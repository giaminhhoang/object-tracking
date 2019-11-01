%% ************************************************************************
%
%           Description :
%           
%
%           Author : G.M. Hoang
%
%           Rev. 0 : baseline
%
%           Inputs :
%                       - 
%
%           Outputs :
%                       - 
%
% ************************************************************************

function ZEN_runMonteCarlo(numMonteCarlo, acceleration_psd)

% initialize
results_MonteCarlo.t = zeros(1,500);
results_MonteCarlo.position_x_error = zeros(numMonteCarlo,500);
results_MonteCarlo.position_y_error = zeros(numMonteCarlo,500);
results_MonteCarlo.velocity_x_error = zeros(numMonteCarlo,500);
results_MonteCarlo.velocity_y_error = zeros(numMonteCarlo,500);

% extract random measurement sequences for Q2 in the assignment
results_MonteCarlo.sonar_range_perfect = zeros(numMonteCarlo,500);
results_MonteCarlo.sonar_range = zeros(numMonteCarlo,500);
results_MonteCarlo.sonar_azimuth_perfect = zeros(numMonteCarlo,500);
results_MonteCarlo.sonar_azimuth = zeros(numMonteCarlo,500);

overwriteParamsList(1).name = 'acceleration_psd';
overwriteParamsList(1).value = acceleration_psd;

for i = 1:numMonteCarlo

    [~, signals, results] = ZEN_runSimulation(overwriteParamsList);

    results_MonteCarlo.position_x_error(i,:) = results.position_error(1,:);
    results_MonteCarlo.position_y_error(i,:) = results.position_error(2,:);
    results_MonteCarlo.velocity_x_error(i,:) = results.velocity_error(1,:);
    results_MonteCarlo.velocity_y_error(i,:) = results.velocity_error(2,:);
    
    % extract random measurement sequences for Q2 in the assignment
    results_MonteCarlo.sonar_range_perfect(i,:) = signals.sonar.range_perfect;
    results_MonteCarlo.sonar_range(i,:) = signals.sonar.range;
    results_MonteCarlo.sonar_azimuth_perfect(i,:) = signals.sonar.azimuth_perfect;
    results_MonteCarlo.sonar_azimuth(i,:) = signals.sonar.azimuth;
end
results_MonteCarlo.t =  results.t;


%% graphics
[display] = ZEN_getDisplayOptions('all');
figure
hold on
set(gca, 'fontSize', 14)
plot(results_MonteCarlo.t, sqrt(mean(results_MonteCarlo.position_x_error.^2)),...
    'lineStyle', display.lineStyleError,...
    'lineWidth', display.lineWidthError,...
    'marker', display.markerStyleError,...
    'markerSize', display.markerSizeError,...
    'color', display.colors(1,:))

plot(results_MonteCarlo.t, sqrt(mean(results_MonteCarlo.position_y_error.^2)),...
    'lineStyle', display.lineStyleError,...
    'lineWidth', display.lineWidthError,...
    'marker', display.markerStyleError,...
    'markerSize', display.markerSizeError,...
    'color', display.colors(2,:))

legend('x','y')
xlabel('time (s)')
ylabel('error (m)')
title(['Position errors (rms) with accel PSD=',num2str(acceleration_psd),' over ',num2str(numMonteCarlo),' Monte Carlo evaluations'])


figure
hold on
set(gca, 'fontSize', 14)
plot(results_MonteCarlo.t, sqrt(mean(results_MonteCarlo.velocity_x_error.^2)),...
    'lineStyle', display.lineStyleError,...
    'lineWidth', display.lineWidthError,...
    'marker', display.markerStyleError,...
    'markerSize', display.markerSizeError,...
    'color', display.colors(1,:))

plot(results_MonteCarlo.t, sqrt(mean(results_MonteCarlo.velocity_y_error.^2)),...
    'lineStyle', display.lineStyleError,...
    'lineWidth', display.lineWidthError,...
    'marker', display.markerStyleError,...
    'markerSize', display.markerSizeError,...
    'color', display.colors(2,:))

legend('x','y')
xlabel('time (s)')
ylabel('error (m/s)')
title(['Velocity errors (rms) with accel PSD=',num2str(acceleration_psd),' over ',num2str(numMonteCarlo),' Monte Carlo evaluations'])

figure
hold on
set(gca, 'fontSize', 14)
for i = 1:numMonteCarlo
    plot(results_MonteCarlo.t, results_MonteCarlo.sonar_range(i,:) - results_MonteCarlo.sonar_range_perfect(i,:),...
        'lineStyle', display.lineStyleError,...
        'lineWidth', display.lineWidthError,...
        'marker', display.markerStyleError,...
        'markerSize', display.markerSizeError,...
        'color', display.colors(3,:))
end
hold off
xlabel('time (s)')
ylabel('error (m)')
title(['Sonar range residual errors in ', num2str(numMonteCarlo),' Monte Carlo simulations'])

figure
hold on
set(gca, 'fontSize', 14)
for i = 1:numMonteCarlo
    plot(results_MonteCarlo.t, (results_MonteCarlo.sonar_azimuth(i,:) - results_MonteCarlo.sonar_azimuth_perfect(i,:))*180/pi,...
        'lineStyle', display.lineStyleError,...
        'lineWidth', display.lineWidthError,...
        'marker', display.markerStyleError,...
        'markerSize', display.markerSizeError,...
        'color', display.colors(3,:))
end
hold off
xlabel('time (s)')
ylabel('error (deg)')
title(['Sonar azimuth residual errors in ', num2str(numMonteCarlo),' Monte Carlo simulations'])

end

