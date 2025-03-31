function [P_qr, q_qr, H_qr, h_qr, c, D, E] = qr_preconditioner(P, q, H, h)
%QR_PRECONDITIONER
%   [P_QR, q_QR, H_QR, h_QR, c, D, E] = QR_PRECONDITIONER(P, q, H, h)
%
% Reference:
%
% Chari et al., Constraint preconditioning and parameter selection for a
% first-order primal-dual method applied to model predictive control, CDC
% 2024.

[m, n] = size(H);

lam_max = max(diag(P));
lam_min = min(diag(P));

eta = sqrt(lam_max * lam_min + lam_min^2);

[Q_qr, R_qr] = qr(H.', "econ");

P_qr = P;
q_qr = q;
H_qr = full(eta * Q_qr.');
h_qr = eta * (R_qr.' \ h);

c = 1;
D = speye(n);
E = eta * R_qr.' \ speye(m);

end