function s = solver_settings()
%SOLVER_SETTINGS
%   S = SOLVER_SETTINGS()
%
% Solver settings.

s = struct;

s.eps_abs_cots = 1e-10;
s.eps_rel_cots = 1e-10;

s.eps_abs_pipg = 1e-5;
s.eps_rel_pipg = 1e-5;
s.percent_rel_err = 0.1; % used if `termination = 'ground_truth'`
s.omg = 1;
s.rho_extrap = 1.95;
s.max_iters = 1e5;
s.termination = 'ground_truth'; % 'unscaled', 'scaled'
s.check_every = 1;

end