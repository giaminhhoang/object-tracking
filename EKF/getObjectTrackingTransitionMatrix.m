function Phi = getObjectTrackingTransitionMatrix(Ts)

Phi = eye(4);
Phi(1,3) = Ts;
Phi(2,4) = Ts;

