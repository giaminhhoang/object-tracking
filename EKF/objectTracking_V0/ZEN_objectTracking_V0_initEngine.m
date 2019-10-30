%% ************************************************************************
%
%           Description : gives variables examples for matlab coder ZEN_objectTracking_V0.prj
%
%           Author : G.M. Hoang
%
%           Rev. 0 : baseline
%
%           Inputs : 
%                       - none 
%                       
%           Outputs : 
%                       - Params
%
% *************************************************************************

function [signals, paramsSim, dataAlgo, paramsAlgo] = ZEN_objectTracking_V0_initEngine()

[paramsSim] = ZEN_getSimulationParameters(500,0.1);
[signals] = ZEN_initializeSignals(paramsSim);
[dataAlgo, paramsAlgo] = ZEN_objectTracking_V0_init(int8(0));

char_init = repmat('*',[1 2048]);
paramsSim.algoName = char_init;            % algorithm name under test
paramsSim.algoConfigName = char_init;      % settings of the algorithm
paramsSim.displayName = char_init;         % configuration name for plottings

end