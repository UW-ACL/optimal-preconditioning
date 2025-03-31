function ps = preconditioner_settings()
%PRECONDITIONER_SETTINGS
%   PS = PRECONDITIONER_SETTINGS()

ps = struct;

ps.p_norm = 'inf';

ps.max_iters_ruiz = 100;
ps.eps_ruiz = 1e-6;

ps.row_norm_tol = 1e-4;

ps.eps_abs_shifted_power = 1e-9;
ps.eps_rel_shifted_power = 1e-9;
ps.eps_buff_shifted_power = 0;
ps.max_iters_shifted_power = 100000;

end