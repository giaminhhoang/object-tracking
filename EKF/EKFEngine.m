%% ****************************************************************
%
%           Description : batch run of TC_ECEF17_V5 
%
%           Author : G.M. Hoang
%
%           Rev. 0 : baseline
%
%           Inputs : 
%                       - Signals : struct containing simulated signals
%                       
%           Outputs : 
%                       - Results_FUSION : results of the INS/GNSS/STL processing
%                   
%
% *************************************************************


function [Results] = objectTrackingEngine(signals, paramsSimulation, dataAlgo, paramsAlgo)


Npts = length(signals.x);

%% ************************************************************************
% Main loop

for i = 1:Npts
    
    % copy measurements in algorithm's data structure
    dataAlgo.t = signals.t;
    dataAlgo.sonarRange = signals.sonarRange;
    dataAlgo.sonarAzimuth = signals.sonarAzimuth;
    
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
