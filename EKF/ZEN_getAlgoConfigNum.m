%% ****************************************************************
%
%           Description : return simulation parameters
%
%           Author : G.M. Hoang
%
%           Rev. 0 : baseline
%
%           Inputs : 
%                       - none 
%                       
%           Outputs : 
%                       - simulationParameters
%
% *************************************************************

function algoConfigNum = ZEN_getAlgoConfigNum(algoConfigName)

switch algoConfigName
    
    case 'debug'
        algoConfigNum = int8(100);
        
    otherwise
        algoConfigNum = int8(-1);
        error([algoConfigName, ': unknown configuration']);
end
        