%% ************************************************************************
%
%           Description : display sensors sonar signals resulting from simulation
%
%           Author : G.M. Hoang
%
%           Rev. 0 : baseline
%
%           Inputs : 
%                       - Signals : struct containing simulation signals
%                       - Display : struct containgin display options
%           Outputs : 
%                       - none
%
% *************************************************************************

function display = ZEN_displaySensorSignals(signals, display)

% sonar range perfect measurement

% sonar range measurement

% sonar range measurement error
if display.sonar_range_error
    figure
    set(gca, 'fontSize', display.fontSize)
    plot(signals.t, signals.sonar.range - signals.sonar.range_perfect,...
        'lineStyle', display.lineStyleError,...
        'lineWidth', display.lineWidthError,...
        'marker', display.markerStyleError,...
        'markerSize', display.markerSizeError,...
        'color', display.colors(1,:))
    xlabel('time (s)')
    ylabel('error (m)')
    title('Sonar range measurement residual error')
end

% sonar azimuth perfect measurement

% sonar range measurement

% sonar azimuth measurement error
if display.sonar_azimuth_error
    figure
    set(gca, 'fontSize', display.fontSize)
    plot(signals.t, (signals.sonar.azimuth - signals.sonar.azimuth_perfect)*180/pi,...
        'lineStyle', display.lineStyleError,...
        'lineWidth', display.lineWidthError,...
        'marker', display.markerStyleError,...
        'markerSize', display.markerSizeError,...
        'color', display.colors(1,:))
    xlabel('time (s)')
    ylabel('error (deg)')
    title('Sonar azimuth measurement residual error')
end