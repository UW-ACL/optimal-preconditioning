function [P_qr, q_qr, H_qr, h_qr, c, D, E, qr_time] = qr_preconditioner(P, q, H, h)
%QR_PRECONDITIONER
%   [P_QR, q_QR, H_QR, h_QR, c, D, E, QR_TIME] = QR_PRECONDITIONER(P, q, H, h)
%
% Reference:
%
% Chari et al., Constraint preconditioning and parameter selection for a
% first-order primal-dual method applied to model predictive control, CDC
% 2024.

tic;

[m, n] = size(H);

lam_max = full(max(diag(P)));
lam_min = full(min(diag(P)));

eta = sqrt(lam_max * lam_min + lam_min^2);

[Q_qr, R_qr] = qr(full(H.'), "econ");

P_qr = P;
q_qr = q;
H_qr = eta * Q_qr.';
h_qr = full(eta * (R_qr.' \ h));

c = 1;
D = speye(n);
E = eta * sparse(R_qr).' \ speye(m);

qr_time = 1000 * toc;

end