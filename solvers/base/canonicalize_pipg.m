function [P, q, H, h] = canonicalize_pipg(Q, R, Qf, E, A, B, p)
%CANONICALIZE_PIPG
%   [P, Q, H, h] = CANONICALIZE_PIPG(Q, R, QF, E, A, B, p)
%
% Canonical optimization problem template:
%
% minimize    ½ z^T P z + q^T z
% subject to  H z - h ∈ K
%             z ∈ D

N = p.N;
x_ref = p.x_ref;
nx = 4;
nu = 2;
theta = p.theta;
rho = p.rho;

speye_Nm1 = speye(N-1);

PQ_Nm1 = kron(speye_Nm1, Q);
PQf = Qf;
PQ = blkdiag(PQ_Nm1, PQf);
PR = kron(speye_Nm1, R);
P = blkdiag(PQ, PR);

qx = -PQ * x_ref(:); % -PQ.' * x_ref(:), but PQ = PQ.'
qu = zeros(nu*(N-1), 1);
q = [qx; qu];

Hxp1 = kron(speye_Nm1, E);
Hx = kron(speye_Nm1, A);
sparse_nxNm1_nx = sparse(nx*(N-1), nx);
HA = [Hx, sparse_nxNm1_nx] + [sparse_nxNm1_nx, Hxp1];
HB = kron(speye_Nm1, B);
H_zero = [HA, HB];
h_zero = zeros(nx*(N-1), 1);

k_nno = 1:N;
row_idx_nno = k_nno;
col_idx_cos = nx*k_nno - (nx-1);
col_idx_sin = nx*k_nno - (nx-2);
theta_k = theta * k_nno;
cos_terms = -cos(theta_k);
sin_terms = sin(theta_k);
i_nno = [row_idx_nno, row_idx_nno];
j_nno = [col_idx_cos, col_idx_sin];
vals_nno = [cos_terms, sin_terms];
Hx_nno = sparse(i_nno, j_nno, vals_nno, N, nx*N);
H_nno = [Hx_nno, sparse(N, nu*(N-1))];
h_nno = rho * ones(N, 1);

H = [H_zero; H_nno];
h = [h_zero; h_nno];

end