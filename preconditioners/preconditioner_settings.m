function ps = preconditioner_settings()
%PRECONDITIONER_SETTINGS
%   PS = PRECONDITIONER_SETTINGS()

ps = struct;

ps.p_norm = 'inf';

ps.max_iters_ruiz = 100;
ps.eps_ruiz = 1e-6;

ps.row_norm_tol = 1e-4;

end