function [Ac, Bc] = ct_dynamics(dim)
%CT_DYNAMICS
%   [AC, BC] = CT_DYNAMICS(DIM)
%
% The continuous-time dynamics in `dim` dimensions.

zeros_dim_dim = zeros(dim, dim);
eye_dim = eye(dim);

Ac = [zeros_dim_dim, eye_dim; zeros_dim_dim, zeros_dim_dim];
Bc = [zeros_dim_dim; eye_dim];

end