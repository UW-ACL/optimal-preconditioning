function s = pipg_settings()
%PIPG_SETTINGS
%   S = PIPG_SETTINGS()
%
% PIPG solver settings.

s = struct;

s.omg = 1;
s.rho_extrap = 1.95;
s.max_iters = 1e4;
s.eps_abs = 5e-5;
s.eps_rel = 5e-5;

end