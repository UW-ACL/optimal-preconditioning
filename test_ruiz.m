% Test modified Ruiz equilibration

preconditioners_path = genpath('preconditioners');
addpath(preconditioners_path);

tol = 1e-8;

n = 2000;
m = 1000;

a_P = 1;
b_P = 1000;
P_ = a_P + (b_P - a_P) .* rand(n, n);
P = P_.' * P_;

a_q = -100;
b_q = 100;
q = a_P + (b_P - a_P) .* rand(n, 1);

a_H = -100;
b_H = 100;
H = a_H + (b_H - a_H) .* rand(m, n);

a_h = -100;
b_h = 100;
h = a_h + (b_h - a_h) .* rand(m, 1);

ps = preconditioner_settings();

[P_ruiz, q_ruiz, H_ruiz, h_ruiz, c, D, E, ruiz_iters] = ruiz(P, q, H, h, ps);

M = [P_ruiz, H_ruiz.'; H_ruiz, zeros(m, m)];

assert(1 - max(vecnorm(M, 'inf')) <= ps.eps_ruiz);
assert(1 - max(vecnorm(M.', 'inf')) <= ps.eps_ruiz);
assert(norm(P_ruiz - c * D * P * D, 'fro') <= tol);
assert(norm(q_ruiz - c * D * q, 'fro') <= tol);
assert(norm(H_ruiz - E * H * D, 'fro') <= tol);
assert(norm(h_ruiz - E * h, 'fro') <= tol);
fprintf('\n Test passed.\n\n');

rmpath(preconditioners_path);