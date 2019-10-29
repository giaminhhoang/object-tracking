function [data, params] = ZEN_objectTrackingInitialization()

deg2rad = pi/180;

%% data structure definition
data.t = 0;        % current time

data.usedInSolution = int8(0);          % (1) : Sonar range
                                        % (2) : Sonar azimuth

% sonar measurements
data.sonar.range = 0;
data.sonar.azimuth = 0;

% Extended Kalman filter
data.EKF.Ts = 0;                        % update period
data.EKF.Xk = zeros(4,1);     % state vector: [x, y, vx, vy]
data.EKF.Pk = eye(4);

data.EKF.InnovationRange = 0;
data.EKF.InnovationAzimuth = 0;
data.EKF.InnovationRangeNorm = 0;
data.EKF.InnovationAzimuthNorm = 0;
data.EKF.InnovationRangeStd = 0;
data.EKF.InnovationAzimuthStd = 0;

% main outputs
data.outputs.position = zeros(2,1);
data.outputs.velocity = zeros(2,1);
data.outputs.positionStd = zeros(2,1);
data.outputs.velocityStd = zeros(2,1);

%% params structure defintion
params.configNum = 0;  % default config

% processing parameters
params.Ts = 0.1;           % sampling period 
params.maximalUpdatePeriod = 0.2;
params.minimalUpdatePeriod = 0;

% initial position velocity and their uncertainties
params.position0 = zeros(2,1);
params.velocity0 = zeros(2,1);
params.positionStd0 = 1;
params.velocityStd0 = 1;

% Sonar parameters
params.sonarRangeStd = 0.1;
params.sonarAzimuthStd = 3*deg2rad;
params.sonarInnovationPositionThreshold = 6;
params.sonarInnovationVelocityThreshold = 6;


