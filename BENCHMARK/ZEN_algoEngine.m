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

function [results, data, paramsAlgo] = ZEN_algoEngine(paramsSim, signals, algoName, algoConfigNum, overwriteParamsList)

if paramsSim.useMex 
    switch algoName
        
        case 'objectTracking_EKF_V0'
            [data, paramsAlgo] = ZEN_objectTrackingInitialization(algoConfigNum);
            paramsAlgo = overwriteParams(paramsAlgo,overwriteParamsList);
            [results] = ZEN_objectTrackingEngine_mex(signals,paramsSim,data,paramsAlgo);          
            
        otherwise
            error(['Unknown algorithm: ', algoName])
    end
else
    switch algoName
        
        case 'objectTracking_EKF_V0'
            [data, paramsAlgo] = ZEN_objectTrackingInitialization(algoConfigNum);
            paramsAlgo = overwriteParams(paramsAlgo,overwriteParamsList);
            [results] = ZEN_objectTrackingEngine(signals,paramsSim,data,paramsAlgo);          
            
        otherwise
            error(['Unknown algorithm: ', algoName])
    end
end

end

function params = overwriteParams(params, overwriteParamsList)
    
for i = length(overwriteParamsList)
    
    if isfield(params,overwriteParamsList(i).name)
        
        value = overwriteParamsList(i).value;
        params.(overwriteParamsList(i).name) = value;
        
    end
end

end
