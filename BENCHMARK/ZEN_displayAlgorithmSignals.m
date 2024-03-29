%% ************************************************************************
%
%           Description : display signals specific to algorithms outputs
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

function display = ZEN_displayAlgorithmSignals(results, display)

% status

% usedInSolution

% range innovation
if display.innovationRange
    figure
    hold on
    set(gca, 'fontSize', display.fontSize)
    plot(results.t, results.innovationRange,...
        'lineStyle', display.lineStyleEst,...
        'lineWidth', display.lineWidthEst,...
        'marker', display.markerStyleEst,...
        'markerSize', display.markerSizeEst,...
        'color', display.colors(1,:))
    
    if display.std
    plot(results.t, results.innovationRange_std,...
        'lineStyle', display.lineStyleStd,...
        'lineWidth', display.lineWidthStd,...
        'marker', display.markerStyleStd,...
        'markerSize', display.markerSizeStd,...
        'color', display.colors(1,:))
    plot(results.t, -results.innovationRange_std,...
        'lineStyle', display.lineStyleStd,...
        'lineWidth', display.lineWidthStd,...
        'marker', display.markerStyleStd,...
        'markerSize', display.markerSizeStd,...
        'color', display.colors(1,:))
    end
    
    xlabel('time (s)')
    ylabel('error (m)')
    title('Range innovation')

end


% azimuth innovation
if display.innovationAzimuth
    figure
    hold on
    set(gca, 'fontSize', display.fontSize)
    plot(results.t, results.innovationAzimuth*180/pi,...
        'lineStyle', display.lineStyleEst,...
        'lineWidth', display.lineWidthEst,...
        'marker', display.markerStyleEst,...
        'markerSize', display.markerSizeEst,...
        'color', display.colors(1,:))
    
    if display.std
    plot(results.t, results.innovationAzimuth_std*180/pi,...
        'lineStyle', display.lineStyleStd,...
        'lineWidth', display.lineWidthStd,...
        'marker', display.markerStyleStd,...
        'markerSize', display.markerSizeStd,...
        'color', display.colors(1,:))
    plot(results.t, -results.innovationAzimuth_std*180/pi,...
        'lineStyle', display.lineStyleStd,...
        'lineWidth', display.lineWidthStd,...
        'marker', display.markerStyleStd,...
        'markerSize', display.markerSizeStd,...
        'color', display.colors(1,:))
    end
    
    xlabel('time (s)')
    ylabel('error (deg)')
    title('Azimuth innovation')

end
