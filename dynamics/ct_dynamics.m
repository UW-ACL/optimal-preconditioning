function [Ac, Bc] = ct_dynamics()
%CT_DYNAMICS
%   [AC, BC] = CT_DYNAMICS()
%
% The continuous-time dynamics.

zeros_2_2 = zeros(2, 2);
eye_2 = eye(2);

Ac = [zeros_2_2, eye_2; zeros_2_2, zeros_2_2];
Bc = [zeros_2_2; eye_2];

end