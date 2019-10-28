%% ****************************************************************
%
%           Description : generate sonar signals
%
%           Author : G.M. Hoang
%
%           Rev. 0 : baseline
%
%           Inputs : 
%                       - signals : struct containing simulation signals
%                       - profile : struct containging sensors parameters
%           Outputs : 
%                       - signals : updated struct with sensors signals
%
% *************************************************************

function signals = ZEN_generateSonar(signals, profile, simParams)

Npts = length(signals.t);
Ts = (signals.t(Npts)-signals.t(1))/(Npts-1);

%% build the reference (perfect signal)
signals.sonar_range_perfect = sqrt(signals.position(1,:).^2 + signals.position(2,:).^2);
signals.sonar_azimuth_perfect = atan2(signals.position(2,:), signals.position(1,:));

%% ************************************************************************
% new measurement flag
% compute update measurement flags
Inew = round([1:profile.sonar.Ts/Ts:Npts]);
signals.sonar_newMeasurement(Inew) = 1;

% generate random measuements
for i = 1:simParams.numMonteCarloSim
    signals.sonar_range(i,:) = signals.sonar_range_perfect + profile.sonar.rangeStd * randn(1,Npts);
    signals.sonar_azimuth(i,:) = signals.sonar_azimuth_perfect + profile.sonar.azimuthStd * randn(1,Npts);
end
    