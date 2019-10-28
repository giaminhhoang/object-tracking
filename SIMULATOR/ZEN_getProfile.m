%% ****************************************************************
%
%           Description : generate profilte structure
%                           
%
%           Author : G.M. Hoang
%
%           Rev. 0 : baseline
%
%           Inputs : 
%                       - profile_name : name of the simulation profile
%           Outputs : 
%                       - profile : structure containing simulation parameters associated with that profile 
%
% *************************************************************

function [profile] = ZEN_getProfile(profileName)

switch profileName

    case 'debug'

        [motion] = ZEN_getMotionModel('loaded');
        [sonar] = ZEN_getSonarModel('perfect');

    case 'demo'

        [motion] = ZEN_getMotionModel('loaded');
        [sonar] = ZEN_getSonarModel('standard');

    otherwise

        [extractedProfile] = strsplit(profileName, '+');
        
        if length(extractedProfile) == 2
            [motion] = ZEN_getMotionModel(extractedProfile{1});
            [sonar] = ZEN_getSonarModel(extractedProfile{2});
        else
            error('Unknown profile name');
        end

end

profile.motion = motion;        % save motion parameters
profile.sonar = sonar;          % save sonar parameters
