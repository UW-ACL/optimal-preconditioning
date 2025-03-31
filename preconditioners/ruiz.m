function [P_ruiz, q_ruiz, H_ruiz, h_ruiz, c, D, E, ruiz_iters, ruiz_time] = ruiz(P, q, H, h, ps)
%RUIZ
%   [P_RUIZ, q_RUIZ, H_RUIZ, h_RUIZ, c, D, E, RUIZ_ITERS, RUIZ_TIME] = RUIZ(P, q, H, h, PS)
%
% Modified Ruiz equilibration [Algorithm 2, Stellato et al. (OSQP)]

tic;

p_norm = ps.p_norm;
max_iters_ruiz = ps.max_iters_ruiz;
eps_ruiz = ps.eps_ruiz;

[m, n] = size(H);
npm = n+m;
zeros_m_m = sparse(m, m);
ones_npm = ones(npm, 1);

c = 1;
S = speye(npm);
P_ruiz = P;
q_ruiz = q;
H_ruiz = H;
h_ruiz = h;

row_indices = 1:npm;
col_indices = 1:npm;
del_vals = zeros(npm, 1);

for ruiz_iters = 1:max_iters_ruiz

    M = [P_ruiz, H_ruiz.'; H_ruiz, zeros_m_m];

    for k = 1:npm
        del_vals(k) = 1 / sqrt(norm(M(:, k), p_norm));
    end
    
    diag_del = sparse(row_indices, col_indices, del_vals, npm, npm);

    D_temp = diag_del(1:n, 1:n);
    E_temp = diag_del(n+1:end, n+1:end);
    
    P_ruiz = D_temp * P_ruiz * D_temp;
    q_ruiz = D_temp * q_ruiz;
    H_ruiz = E_temp * H_ruiz * D_temp;
    h_ruiz = E_temp * h_ruiz;
    
    gam = 1 / max(mean(vecnorm(P_ruiz, p_norm)), norm(q_ruiz, p_norm));
    
    P_ruiz = gam * P_ruiz;
    q_ruiz = gam * q_ruiz;
    
    S = diag_del * S;
    c = gam * c;

    if norm(ones_npm - del_vals, p_norm) <= eps_ruiz
        break
    end

end

D = S(1:n, 1:n);
E = S(n+1:end, n+1:end);

ruiz_time = 1000 * toc;

end