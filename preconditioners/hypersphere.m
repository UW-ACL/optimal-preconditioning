function [P_hyper, q_hyper, H_hyper, h_hyper, c, D, E, sigma_max_hyper, shifted_power_iters, shifted_power_iteration_time, hypersphere_time] = hypersphere(P, q, H, h, s, ps)
%HYPERSPHERE
%   [P_HYPER, q_HYPER, H_HYPER, h_HYPER, c, D, E, SIGMA_MAX_HYPER SHIFTED_POWER_ITERS, SHIFTED_POWER_ITERATION_TIME, HYPERSPHERE_TIME] = HYPERSPHERE(P, q, H, h, S, PS)
%
% 1. Hypersphere preconditioning 
% 2. Block row normalization
% 3. Optimal cost scaling

tic;

p_norm = ps.p_norm;
row_norm_tol = ps.row_norm_tol;
[m, n] = size(H);

% ..:: Hypersphere Preconditioning ::.. %

R = chol(P);
D = spdiags(1 ./ spdiags(R, 0), 0, n, n);
P_hyper = speye(n);
q_hyper = D.' * q;
H_hyper = H * D;
h_hyper = h;

% ..:: Block Row Normalization ::.. %

row_norms = max(vecnorm(H_hyper, p_norm, 2), row_norm_tol);
E_vals = 1 ./ row_norms;
E = sparse(1:m, 1:m, E_vals, m, m);
H_hyper = E * H_hyper;
h_hyper = E * h_hyper;

% ..:: Optimal Cost Scaling ::.. %

[sigma_max_hyper, ~] = power_iteration(NaN, H_hyper, s);
[sigma_min_hyper, shifted_power_iters, shifted_power_iteration_time] = shifted_power_iteration(NaN, sigma_max_hyper, H_hyper, ps);
if shifted_power_iters >= ps.max_iters_shifted_power
    warning(' Shifted power iteration hit `max_iters`.');
end
c = sqrt(sigma_min_hyper / 2);
P_hyper = c * P_hyper;
q_hyper = c * q_hyper;

hypersphere_time = 1000 * toc;

end