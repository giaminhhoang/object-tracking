%% ************************************************************************
%
%           Description : EKF update 
%                   frame = Cartersian
%                   state = 4 parameters
%           
%
%           Author : G.M. Hoang
%
%           Rev. 0 : baseline
%
%           Inputs : 
%                       - data, params
%                       
%           Outputs : 
%                       - data
%
%
% *************************************************************************

function [dataAlgo, paramsAlgo] = ZEN_objectTracking_V0_ekf(dataAlgo, paramsAlgo)

% load parameters
Pk = dataAlgo.ekf.Pk;               % state covariance
Xk = dataAlgo.ekf.Xk;               % state vector

updateSolution = false;             % flad indicate that solution is updated

% measurement noise covariance matrix
dataAlgo.ekf.Rk = diag([paramsAlgo.sonarRange_std^2; paramsAlgo.sonarAzimuth_std^2]);

%% ************************************************************************
% compute sampling period since last call

% compute the update period
if dataAlgo.ekf.tLastCalled ~= -1
    dataAlgo.ekf.Ts = dataAlgo.t - dataAlgo.ekf.tLastCalled;
else   
    dataAlgo.ekf.Ts = paramsAlgo.Ts;
end
dataAlgo.ekf.tLastCalled = dataAlgo.t;

%% ************************************************************************
% state update (prediction)
% compute transition matrix
[Phi] = ZEN_objectTracking_V0_transitionMatrix(dataAlgo.ekf.Ts);

[Qk] = ZEN_objectTracking_V0_systemNoiseCov(paramsAlgo.acceleration_psd, dataAlgo.ekf.Ts);

% prediction step
Xk = Phi*Xk;
Pk = Phi*Pk*Phi' + Qk;

%% ************************************************************************
%
%                           Standard update
%
% *************************************************************************
% compute measurment matrix
[Hk] = ZEN_objectTracking_V0_measurementMatrix(Xk);

% measurement noise covariance
Rk = dataAlgo.ekf.Rk;

% innovation covariance matrix
Ck = Hk*Pk*Hk' + Rk;

delta_z = zeros(2,1);
% compute innovations
if dataAlgo.sonar.newMeasurement
    delta_z(1,1) = dataAlgo.sonar.range - sqrt(Xk(1,1)^2 + Xk(2,1)^2);
    delta_z(2,1) = dataAlgo.sonar.azimuth - atan2(Xk(2,1), Xk(1,1));
else
    delta_z = zeros(2,1);
end
dataAlgo.ekf.innovationRange = delta_z(1,1);
dataAlgo.ekf.innovationAzimuth = delta_z(2,1);

% compute normamized innovations
dataAlgo.ekf.innovationRange_std = sqrt(abs(Ck(1,1)));
dataAlgo.ekf.innovationAzimuth_std = sqrt(abs(Ck(2,2)));
dataAlgo.ekf.innovationRange_norm = dataAlgo.ekf.innovationRange/dataAlgo.ekf.innovationRange_std;
dataAlgo.ekf.innovationAzimuth_norm = dataAlgo.ekf.innovationAzimuth/dataAlgo.ekf.innovationAzimuth_std;

% select matrix is usded to discard inconsistent measurements
selectMatrix = [];

% check integrity
sonarRangeInnovationTest = abs(dataAlgo.ekf.innovationRange_norm) < paramsAlgo.sonarInnovationRange_threshold;
sonarAzimuthInnovationTest = abs(dataAlgo.ekf.innovationAzimuth_norm) < paramsAlgo.sonarInnovationAzimuth_threshold;

if sonarRangeInnovationTest
    % if valid , set the corresponding flag
    dataAlgo.usedInSolution = bitset(dataAlgo.usedInSolution, paramsAlgo.bitSonarRangeUsed, 1);
    
    % add the range measurement
    selectMatrix = [selectMatrix;...
                    1 0];
    
    % indicate that the solution must be updated
    updateSolution = true;
    
else
    % if no valid, clear the corresponding flag
    dataAlgo.usedInSolution = bitset(dataAlgo.usedInSolution, paramsAlgo.bitSonarRangeUsed, 0);
end

if sonarAzimuthInnovationTest
    % if valid , set the corresponding flag
    dataAlgo.usedInSolution = bitset(dataAlgo.usedInSolution, paramsAlgo.bitSonarAzimuthUsed, 1);
    
    % add the azimuth measurement
    selectMatrix = [selectMatrix;...
                    0 1];
    
    % indicate that the solution must be updated
    updateSolution = true;
else
    % if no valid, clear the corresponding flag
    dataAlgo.usedInSolution = bitset(dataAlgo.usedInSolution, paramsAlgo.bitSonarAzimuthUsed, 0);
end

% apply selection
if updateSolution
    Rk = selectMatrix*Rk*selectMatrix';
    Hk = selectMatrix*Hk;
    delta_z = selectMatrix*delta_z;
    
    % compute Kalman gain
    Kk = Pk * Hk' / (Hk*Pk*Hk' + Rk);
    
    % update state
    Xk = Xk + Kk * delta_z;
    
    % update covariance matrix
    Pk = Pk - Kk*(Hk*Pk);

end

%% ************************************************************************
% store states
dataAlgo.ekf.Pk = Pk;       % store covariance
dataAlgo.ekf.Xk = Xk;       % store state
