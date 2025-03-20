function [P_hyper, q_hyper, H_hyper, h_hyper, c, D, E] = hypersphere(P, q, H, h, ps)
%HYPERSPHERE
%   [P_HYPER, q_HYPER, H_HYPER, h_HYPER, c, D, E] = HYPERSPHERE(P, q, H, h, PS)
%
% 1. Hypersphere preconditioning 
% 2. Block row normalization
% 3. Optimal cost scaling

% ..:: Hypersphere Preconditioning ::.. %

p_norm = ps.p_norm;
row_norm_tol = ps.row_norm_tol;

[m, n] = size(H);

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

sqrt_sig_min = svds(H_hyper, 1, 'smallestnz');
c = sqrt_sig_min / sqrt(2);

P_hyper = c * P_hyper;
q_hyper = c * q_hyper;

end