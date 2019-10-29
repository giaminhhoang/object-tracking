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


function [resultsAlgo] = ZEN_objectTrackingEngine(signals, paramsSim, dataAlgo, paramsAlgo, idxMonteCarlo)

Npts = length(signals.x);

%% ************************************************************************
% Main loop

for i = 1:Npts
    
    % copy measurements in algorithm's data structure
    dataAlgo.t = signals.t;
    dataAlgo.sonar.range = signals.sonar.range(idxMonteCarlo,i);
    dataAlgo.sonar.azimuth = signals.sonar.azimuth(idxMonteCarlo,i);
    
    if i > 1
        dataAlgo.Ts = resultsAlgo.t(i) - resultsAlgo.t(i-1);
    else
        dataAlgo.Ts = 0;
    end
    
    %% ********************************************************************
    %
    %                    Initial position and velocity
    %
    % *********************************************************************
    if i == 1
        % load initial position from reference 
        paramsAlgo.position0 = signals.position0(:,i);
        % assume zero initial velocity
        paramsAlgo.velocity0 = signals.velocity0(:,i);
    end
    
    
    % *********************************************************************
    %
    %                       Filter processing
    %
    % *********************************************************************
    
    [dataAlgo, paramsAlgo] = ZEN_objectTrackingProcess(dataAlgo, paramsAlgo);
    
    
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
    resultsAlgo.positionStd(:,i) = dataAlgo.outputs.positionStd;
    resultsAlgo.velocityStd(:,i) = dataAlgo.outputs.velocityStd;
    
    % internal values
    
    % standard deviations
    
    % innovations
    
    
    
    
end

end
