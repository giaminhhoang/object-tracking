%% ****************************************************************
%
%           Description : batch run of 
%
%           Author : G.M. Hoang
%
%           Rev. 0 : baseline
%
%           Inputs : 
%                       - Signals : struct containing simulated signals
%                       
%           Outputs : 
%                       - Results_FUSION : results of the 
%                   
%
% *************************************************************


function [resultsAlgo, dataAlgo] = ZEN_objectTracking_V0_engine(signals, dataAlgo, paramsAlgo)

% initialize results structure
[resultsAlgo] = ZEN_initializeResults(signals); 

resultsAlgo.t = signals.t;
Npts = length(signals.t);

%% ************************************************************************
% Main loop

for i = 1:Npts
    
    % copy measurements in algorithm's data structure
    dataAlgo.t = signals.t(i);
    dataAlgo.sonar.newMeasurement = signals.sonar.newMeasurement(:,i);
    dataAlgo.sonar.range = signals.sonar.range(:,i);
    dataAlgo.sonar.azimuth = signals.sonar.azimuth(:,i);
    
    % if i > 1
    %    dataAlgo.Ts = resultsAlgo.t(i) - resultsAlgo.t(i-1);
    % else
    %    dataAlgo.Ts = 0;
    % end
    
    %% ********************************************************************
    %
    %                    Initial position and velocity
    %
    % *********************************************************************
    if i == 1
        % load initial position from reference 
        paramsAlgo.position0 = signals.position(:,i);
        % assume zero initial velocity
        paramsAlgo.velocity0 = signals.velocity(:,i);
    end
    
    
    % *********************************************************************
    %
    %                       Filter processing
    %
    % *********************************************************************
    
    [dataAlgo, paramsAlgo] = ZEN_objectTracking_V0_process(dataAlgo, paramsAlgo);
    
    
    % *********************************************************************
    %
    %                       Save results
    %
    % *********************************************************************
    
    % save filter status
    resultsAlgo.status(:,i) = dataAlgo.status;
    
    % save used in solution
    resultsAlgo.usedInSolution(:,i) = dataAlgo.usedInSolution;
    
    % main outputs
    resultsAlgo.position(:,i) = dataAlgo.outputs.position;
    resultsAlgo.velocity(:,i) = dataAlgo.outputs.velocity;
    resultsAlgo.position_std(:,i) = dataAlgo.outputs.position_std;
    resultsAlgo.velocity_std(:,i) = dataAlgo.outputs.velocity_std;
    
    % innovations
    resultsAlgo.innovationRange(:,i) = dataAlgo.ekf.innovationRange;
    resultsAlgo.innovationAzimuth(:,i) = dataAlgo.ekf.innovationAzimuth;
    
    resultsAlgo.innovationRange_norm(:,i) = dataAlgo.ekf.innovationRange_norm;
    resultsAlgo.innovationAzimuth_norm(:,i) = dataAlgo.ekf.innovationAzimuth_norm;
    
    resultsAlgo.innovationRange_std(:,i) = dataAlgo.ekf.innovationRange_std;
    resultsAlgo.innovationAzimuth_std(:,i) = dataAlgo.ekf.innovationAzimuth_std;
    
end

end
