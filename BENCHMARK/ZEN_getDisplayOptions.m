%% ************************************************************************
%
%           Description : Return a default Display struct
%
%           Author : G.M. Hoang
%
%           Rev. 0 : baseline
%
%           Inputs :
%                       - Params : [struct] simulation parameters
%                       - SettingsName : [string] name of the settings
%
%           Outputs :
%                       - Display struct
%
% *************************************************************************

function [display] = ZEN_getDisplayOptions(displayName)

%% ************************************************************************
% Display parameters

display.scale = 1;                  
display.fontSize = 14;                  % front size
display.markerSize = 2;                 % marker size
display.tabbedFigure = 0;               % collect figures as tabs in a window

display.lineStyleEst = '-';             % line style of estimated values
display.lineWidthEst = 2;               % line width of estimated values
display.markerStyleEst = 'none';        % marker style of estimated values
display.markerSizeEst = 2;              % marker size of estimated values

display.lineStyleSensor = '-';             % line style of sensor values
display.lineWidthSensor = 2;               % line width of sensor values
display.markerStyleSensor = '.';           % marker style of sensor values
display.markerSizeSensor = 2;              % marker size of sensor values

display.lineStyleRef = '--';             % line style of reference values
display.lineWidthRef = 2;               % line width of reference values
display.markerStyleRef = 'none';        % marker style of reference values
display.markerSizeRef = 2;              % marker size of reference values

display.lineStyleError = '-';             % line style of error values
display.lineWidthError = 2;               % line width of error values
display.markerStyleError = 'none';        % marker style of error values
display.markerSizeError = 2;              % marker size of error values

display.lineStyleStd = ':';             % line style of std values
display.lineWidthStd = 1;               % line width of std values
display.markerStyleStd = 'none';        % marker style of std values
display.markerSizeStd = 1;              % marker size of std values

display.sceneCartersian = 0;            % flag for indicating Cartersian scene or not

display.colors = [1 0 0;
                  0 1 0;
                  0 0 1;
                  0 1 1;
                  1 0 1;
                  1 1 0;
                  0 0 0];

display.std = 1;        % add confidence curves when available

% -------------------------------------------------------------------------
% dynamic
display.position = 0;
display.velocity = 0;
display.position_error = 0;
display.velocity_error = 0;

% -------------------------------------------------------------------------
% sensor
display.sonar_range_perfect = 0;
display.sonar_azimuth_perfect = 0;
display.sonar_range = 0;
display.sonar_azimuth = 0;
display.sonar_range_error = 0;
display.sonar_azimuth_error = 0;

% -------------------------------------------------------------------------
% processing
display.status = 0;
display.usedInSolution = 0;     % flag indicate which measurement is used in the solution

display.innovationRange = 0;    % range innovation
display.innovationAzimuth = 0;  % azimuth innovation
display.innovationRange_norm = 0;    % normalized range innovation
display.innovationAzimuth_norm = 0;  % normalized azimuth innovation


switch displayName
    
    case 'all'
        
        display.sceneCartersian = 1;
        
        display.position = 1;
        display.velocity = 1;
        display.position_error = 1;
        display.velocity_error = 1;
        
        display.sonar_range_perfect = 1;
        display.sonar_azimuth_perfect = 1;
        display.sonar_range = 1;
        display.sonar_azimuth = 1;
        display.sonar_range_error = 1;
        display.sonar_azimuth_error = 1;
        
        display.status = 1;
        display.usedInSolution = 1;    

        display.innovationRange = 1;   
        display.innovationAzimuth = 1; 
        display.innovationRange_norm = 1;   
        display.innovationAzimuth_norm = 1;
        
    otherwise
        
        error(['Unknown display name: ', displayName]);
    
end
