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

H = [HA, HB];
h = zeros(nx*(N-1), 1);

end