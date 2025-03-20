function s = solver_settings()
%SOLVER_SETTINGS
%   S = SOLVER_SETTINGS()
%
% Solver settings.

s = struct;

s.eps_abs_cots = 5e-6;
s.eps_rel_cots = 5e-6;

s.eps_abs_pipg = 5e-6;
s.eps_rel_pipg = 5e-6;
s.omg = 1;
s.rho_extrap = 1.95;
s.max_iters = 1e5;
s.termination = 'scaled';
s.check_every = 1;

end