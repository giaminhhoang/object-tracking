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


function [Results] = ZEN_objectTrackingEngine(signals, paramsSimulation, dataAlgo, paramsAlgo)


Npts = length(signals.x);

%% ************************************************************************
% Main loop

for i = 1:Npts
    
    % copy measurements in algorithm's data structure
    dataAlgo.t = signals.t;
    dataAlgo.sonar.range = signals.sonar.range;
    dataAlgo.sonar.azimuth = signals.sonar.azimuth;
    
    if i > 1
        dataAlgo.Ts = paramsAlgo.Ts;
    else
        dataAlgo.Ts = 0;
    end
    
    % *********************************************************************
    %
    %                       Filter processing
    %
    % *********************************************************************
    
    [dataAlgo, paramsAlgo] = objectTrackingEKF(dataAlgo, paramsAlgo);
    
    
    % *********************************************************************
    %
    %                       Save results
    %
    % *********************************************************************
    
    
    
    
end

end
