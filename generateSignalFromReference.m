%% ****************************************************************
%
%           Description : 
%           
%
%           Author : G.M. Hoang
%
%           Rev. 0 : baseline
%
%           Inputs : 
%                       - none 
%                       
%           Outputs : 
%                       - nMeasurements
%
%
%
% *************************************************************

function signals = generateSignalFromReference(varargin)

switch nargin
    
    case 0
        path = [pwd, '/'];
        file = 'object_trajectory.mat';
        display = 1;
        
    case 1
        path = [pwd, '/'];
        file = '.mat';
        [file,path] = uigetfile([path,file],'Choose trajectory file'); 
        display = 1;
        
    otherwise
        disp('Error: Choose a correct .mat trajectory file')

end

if exist(fullfile(path,file), 'file') == 2
    
    load(fullfile(path,file));
    npts = size(x_traj_pos,2);

    % load scenario paramters
    params = getSignalsParameters();
    numMonteCarlo = params.numberOfMonteCarloSimulation;

    % initial signals structure 
    signals.t = 0:params.Ts:(npts-1)*params.Ts;
    signals.x = zeros(1,npts);
    signals.y = zeros(1,npts);
    signals.range = zeros(1,npts);
    signals.azimuth = zeros(1,npts);
    signals.sonar_range = zeros(numMonteCarlo, npts);
    signals.sonar_azimuth = zeros(numMonteCarlo, npts);

    % compute true range and azimuth from reference
    signals.x = x_traj_pos(1,:);
    signals.y = x_traj_pos(2,:);
    signals.range = sqrt(signals.x.^2 + signals.y.^2);
    signals.azimuth = atan2(signals.y, signals.x);

    % generate random measuements
    for i = 1:numMonteCarlo
        signals.sonar_range(i,:) = signals.range + params.sonarRangeStd * randn(1,npts);
        signals.sonar_azimuth(i,:) = signals.azimuth + params.sonarAzimuthStd * randn(1,npts);
    end

    %% ********************************************************************
    % display cureves

    if display == 1

        % object trajectory
        figure
        plot(signals.x, signals.y, 'LineWidth', 2)
        xlabel('x [m]')
        ylabel('y [m]')
        title('object trajectory')

        % simulated range residuals
        figure
        hold on 
        for i = 1:numMonteCarlo
            plot(signals.t, signals.sonar_range(i,:) - signals.range, 'Color','b', 'Marker', 'o');
        end
        hold off
        xlabel('time [s]')
        ylabel('error [m]')
        title('range residual error')

        % simulated azimuth residuals
        figure
        hold on
        for i = 1:numMonteCarlo
            plot(signals.t, (signals.sonar_azimuth(i,:) - signals.azimuth)*180/pi, 'Color','b', 'Marker', 'o');
        end
        hold off
        xlabel('time [s]')
        ylabel('error [deg]')
        title('azimuth residual error')
        
    end

end

