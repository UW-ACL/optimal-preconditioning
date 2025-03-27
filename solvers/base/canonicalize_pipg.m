function [P, q, H, h] = canonicalize_pipg(Q, R, Qf, C, A, B, p)
%CANONICALIZE_PIPG
%   [P, Q, H, h] = CANONICALIZE_PIPG(Q, R, QF, C, A, B, p)
%
% Canonical optimization problem template (assemble `P`, `q`, `H`, & `h`):
%
% minimize    ½ z^T P z + q^T z
% subject to  H z - h ∈ K
%             z ∈ D

N = p.N;
x_ref = p.x_ref;
nx = p.nx;
nu = p.nu;
theta = p.theta;
rho = p.rho;

speye_Nm1 = speye(N-1);

PQ_Nm1 = kron(speye_Nm1, Q);
PQf = Qf;
PQ = blkdiag(PQ_Nm1, PQf);
PR = kron(speye_Nm1, R);
P = blkdiag(PQ, PR);

qx = -PQ.' * x_ref(:);
qu = zeros(nu*(N-1), 1);
q = [qx; qu];

Hxp1 = kron(speye_Nm1, C);
Hx = kron(speye_Nm1, A);
sparse_nxNm1_nx = sparse(nx*(N-1), nx);
HA = [Hx, sparse_nxNm1_nx] + [sparse_nxNm1_nx, Hxp1];
HB = kron(speye_Nm1, B);
H_zero = [HA, HB];
h_zero = zeros(nx*(N-1), 1);

k_r = 1:N;
row_idx_r = k_r;
col_idx_cos = nx*k_r - (nx-1);
col_idx_sin = nx*k_r - (nx-2);
theta_k = theta * k_r;
cos_terms = -cos(theta_k);
sin_terms = sin(theta_k);
i_r = [row_idx_r, row_idx_r];
j_r = [col_idx_cos, col_idx_sin];
vals_r = [cos_terms, sin_terms];
Hx_r = sparse(i_r, j_r, vals_r, N, nx*N);
H_r = [Hx_r, sparse(N, nu*(N-1))];
h_r = rho * ones(N, 1);

H = [H_zero; H_r];
h = [h_zero; h_r];

end