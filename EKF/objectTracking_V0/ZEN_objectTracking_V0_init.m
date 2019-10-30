function [dataAlgo, paramsAlgo] = ZEN_objectTracking_V0_init(platformNum)

deg2rad = pi/180;

%% data structure definition

% time values
dataAlgo.t = 0;        % current time
dataAlgo.t0 = 0;       % initialization time

% monitoring values
dataAlgo.status = int8(0);                  % (0) : first call
                                        % (1) : normal operation

dataAlgo.usedInSolution = int8(0);          % (1) : Sonar range
                                        % (2) : Sonar azimuth
                                        % (3) : Both

% sonar measurements
dataAlgo.sonar.newMeasurement = int8(0);
dataAlgo.sonar.range = 0;
dataAlgo.sonar.azimuth = 0;

% Extended Kalman filter
dataAlgo.ekf.Ts = 0;                        % update period
dataAlgo.ekf.tLastCalled = -1;              % last time EKF has been called
dataAlgo.ekf.tLastUpdated = 0;              % last time EKF has been updated
dataAlgo.ekf.Xk = zeros(4,1);               % state vector: [x, y, vx, vy]'
dataAlgo.ekf.Pk = eye(4);
dataAlgo.ekf.Rk = eye(2);

dataAlgo.ekf.innovationRange = 0;
dataAlgo.ekf.innovationAzimuth = 0;
dataAlgo.ekf.innovationRangeNorm = 0;
dataAlgo.ekf.innovationAzimuthNorm = 0;
dataAlgo.ekf.innovationRangeStd = 0;
dataAlgo.ekf.innovationAzimuthStd = 0;

% main outputs
dataAlgo.outputs.position = zeros(2,1);
dataAlgo.outputs.velocity = zeros(2,1);
dataAlgo.outputs.positionStd = zeros(2,1);
dataAlgo.outputs.velocityStd = zeros(2,1);

%% params structure defintion
paramsAlgo.algoVersion = 0;
paramsAlgo.algoSubversion = 0;
paramsAlgo.platformNum = platformNum;  % 0: standard sonar

% bits definition for usedInSolution
paramsAlgo.bitSonarRangeUsed = int8(1);     % bit #0: sonar range used in solution
paramsAlgo.bitSonarAzimuthUsed = int8(2);   % bit #1: sonar azimuth used in solution

% processing parameters
paramsAlgo.Ts = 0.1;           % sampling period 
paramsAlgo.maximalUpdatePeriod = 0.2;
paramsAlgo.minimalUpdatePeriod = 0;

% initial position velocity and their uncertainties
paramsAlgo.position0 = zeros(2,1);
paramsAlgo.velocity0 = zeros(2,1);
paramsAlgo.positionStd0 = 1;
paramsAlgo.velocityStd0 = 1;

% vehicle dynamics
paramsAlgo.accelerationPSD = 10;     % acceleration PSD (m^2/s^3) 

% Sonar parameters
paramsAlgo.sonarRangeStd = 0.1;
paramsAlgo.sonarAzimuthStd = 3*deg2rad;
paramsAlgo.sonarInnovationRangeThreshold = 6;
paramsAlgo.sonarInnovationAzimuthThreshold = 6;

end