%% ************************************************************************
%
%           Description : wrapper to call algorithmes engines
%
%           Author : G.M. Hoang
%
%           Rev. 0 : baseline
%
%           Inputs : 
%                       - none 
%                       
%           Outputs : 
%                       - none
%
% *************************************************************************

function [results, dataAlgo, paramsAlgo] = ZEN_algoEngine(paramsSim, signals, algoName, algoConfigNum, overwriteParamsList)

if paramsSim.useMex 
    switch algoName
        
        case 'objectTracking_V0'
            [dataAlgo, paramsAlgo] = ZEN_objectTracking_V0_init(algoConfigNum);
            paramsAlgo = overwriteParams(paramsAlgo,overwriteParamsList);
            [results, dataAlgo] = ZEN_objectTracking_V0_engine_mex(signals,dataAlgo,paramsAlgo);          
            
        otherwise
            error(['Unknown algorithm: ', algoName])
    end
else
    switch algoName
        
        case 'objectTracking_V0'
            [dataAlgo, paramsAlgo] = ZEN_objectTracking_V0_init(algoConfigNum);
            paramsAlgo = overwriteParams(paramsAlgo,overwriteParamsList);
            [results, dataAlgo] = ZEN_objectTracking_V0_engine(signals,dataAlgo,paramsAlgo);          
            
        otherwise
            error(['Unknown algorithm: ', algoName])
    end
end

end

function params = overwriteParams(params, overwriteParamsList)
    
for i = 1:length(overwriteParamsList)
    
    if isfield(params,overwriteParamsList(i).name)
        
        value = overwriteParamsList(i).value;
        params.(overwriteParamsList(i).name) = value;
        
    end
end

end
