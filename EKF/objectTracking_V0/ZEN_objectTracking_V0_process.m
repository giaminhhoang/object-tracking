% *************************************************************************
%
%           Description : Object tracking algorithm processing function
%                   frame = Cartersin
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

function [dataAlgo, paramsAlgo] = ZEN_objectTracking_V0_process(dataAlgo, paramsAlgo)

%% normal operation
switch dataAlgo.status
   
    case 0 % not initialized, first call
        
        % initalize covariance matrix
        dataAlgo.ekf.Pk = diag([paramsAlgo.positionStd0^2;...
                                paramsAlgo.positionStd0^2;...
                                paramsAlgo.velocityStd0^2;...
                                paramsAlgo.velocityStd0^2]);
        
        % initialize state
        dataAlgo.ekf.Xk = [paramsAlgo.position0;...
                           paramsAlgo.velocity0];
        
        % change status
        dataAlgo.status = int8(1);
        dataAlgo.t0 = dataAlgo.t;               % record initial time
        
        % output results
        dataAlgo.outputs.position = dataAlgo.ekf.Xk(1:2,:);
        dataAlgo.outputs.positionStd = sqrt(abs(diag(dataAlgo.ekf.Pk(1:2,1:2))));
        dataAlgo.outputs.velocity = dataAlgo.ekf.Xk(3:4,:);
        dataAlgo.outputs.velocityStd = sqrt(abs(diag(dataAlgo.ekf.Pk(3:4,3:4))));
        
    case 1 % normal operation mode
        
        [dataAlgo, paramsAlgo] = callFilter(dataAlgo, paramsAlgo); 
        
        dataAlgo.status = int8(1);
        
end

end

%% ************************************************************************
% EKF call

function [dataAlgo, paramsAlgo] = callFilter(dataAlgo, paramsAlgo)
    
if (dataAlgo.t - dataAlgo.ekf.tLastCalled) < paramsAlgo.minimalUpdatePeriod
    
    dataAlgo.sonar.newMeasurement = int8(0);

elseif dataAlgo.sonar.newMeasurement || ...
    (dataAlgo.t - dataAlgo.ekf.tLastCalled) >= paramsAlgo.maximalUpdatePeriod
    
    % call EKF update
    [dataAlgo, paramsAlgo] = ZEN_objectTracking_V0_ekf(dataAlgo, paramsAlgo);
    
    % clear sonar new measurement flag
    dataAlgo.sonar.newMeasurement = int8(0);

end

% position
dataAlgo.outputs.position = dataAlgo.ekf.Xk(1:2,:);
dataAlgo.outputs.positionStd = sqrt(abs(diag(dataAlgo.ekf.Pk(1:2,1:2))));

% velocity
dataAlgo.outputs.velocity = dataAlgo.ekf.Xk(3:4,:);
dataAlgo.outputs.velocityStd = sqrt(abs(diag(dataAlgo.ekf.Pk(3:4,3:4))));

end

