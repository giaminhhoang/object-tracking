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

switch displayName
    
    case 'objectTracking'
        
        
        
    otherwise
        
        error(['Unknown display name: ', displayName]);
    
end
