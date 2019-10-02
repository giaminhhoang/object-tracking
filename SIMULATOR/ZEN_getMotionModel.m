%% ****************************************************************
%
%           Description : return dynamics parmeters
%                           
%
%           Author : G.M. Hoang
%
%           Rev. 0 : baseline
%
%           Inputs : 
%                       - profile_name : name of the dynamics model
%           Outputs : 
%                       - dyn : structure containing dynamics parmeters 
%
% *************************************************************


function [motion] = ZEN_getMotionModel(motionProfileName)

switch motionProfileName

    case 'loaded'
        
        motion = [];

    otherwise
        error('Only loaded motion profile is currently supported')

end
