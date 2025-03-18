function s = solver_settings()
%SOLVER_SETTINGS
%   S = SOLVER_SETTINGS()
%
% Solver settings.

s = struct;

s.eps_abs = 1e-5;
s.eps_rel = 1e-5;

s.omg = 1;
s.rho_extrap = 1.95;
s.max_iters = 1e5;

end