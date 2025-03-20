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
v_max = p.v_max;
u_max = p.u_max;

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

k_v = 1:4*N;
row_idx_v = k_v;
col_idx_v = zeros(1, 4*N);
for k = 1:N
    col_idx_v(4*(k-1)+1) = nx*(k-1) + (nx-1);
    col_idx_v(4*(k-1)+2) = nx*(k-1) + (nx-1);
    col_idx_v(4*(k-1)+3) = nx*(k-1) + nx;
    col_idx_v(4*(k-1)+4) = nx*(k-1) + nx;
end
vals_v = -repmat([1, -1, 1, -1], 1, N);
i_v = row_idx_v;
j_v = col_idx_v;
Hx_v = sparse(i_v, j_v, vals_v, 4*N, nx*N);
H_v = [Hx_v, sparse(4*N, nu*(N-1))];
h_v = -v_max * ones(4*N, 1);

k_u = 1:4*(N-1);
row_idx_u = k_u;
col_idx_u = zeros(1, 4*(N-1));
for k = 1:(N-1)
    col_idx_u(4*(k-1)+1) = nu*(k-1) + (nu-1);
    col_idx_u(4*(k-1)+2) = nu*(k-1) + (nu-1);
    col_idx_u(4*(k-1)+3) = nu*(k-1) + nu;
    col_idx_u(4*(k-1)+4) = nu*(k-1) + nu;
end
vals_u = -repmat([1, -1, 1, -1], 1, N-1);
i_u = row_idx_u;
j_u = col_idx_u;
Hu_u = sparse(i_u, j_u, vals_u, 4*(N-1), nu*(N-1));
H_u = [sparse(4*(N-1), nx*N), Hu_u];
h_u = -u_max * ones(4*(N-1), 1);

H = [H_zero; H_r; H_v; H_u];
h = [h_zero; h_r; h_v; h_u];

end