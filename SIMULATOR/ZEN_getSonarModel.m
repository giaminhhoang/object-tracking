%% ****************************************************************
%
%           Description : return sonar parameters
%                           
%
%           Author : G.M. Hoang
%
%           Rev. 0 : baseline
%
%           Inputs : 
%                       - IMU_profile_name : name of the dynamics model
%           Outputs : 
%                       - Acc : structure containing accelerometer parmeters 
%                       - Gyr : structure containing gyrometer parmeters 
%
% *************************************************************

function [sonar] = ZEN_getSonarModel(sonarProfileName)

% constanst
deg2rad = pi/180;

switch sonarProfileName

    case 'prefect'
        sonar.Ts = 0.1;                         % sonar sampling period in s
        sonar.range_std = 0;                     % sonar range uncertainty in m
        sonar.azimuth_std = 0;                   % sonar azimuth uncertainty in rad

    case 'standard'
        sonar.Ts = 0.1;                         % sonar sampling period in s
        sonar.range_std = 0.1;                   % sonar range uncertainty in m
        sonar.azimuth_std = 3*deg2rad;           % sonar azimuth uncertainty in rad

    otherwise
        error('Unknown sonar profile')

end 

end