function kkt_cond = cond_kkt(P, H)
%COND_KKT
%   KKT_COND = COND_KKT(P, H)
%
% Compute the condition number of the KKT matrix.

m = size(H, 1);
M = full([P, H.'; H, zeros(m, m)]);
kkt_cond = cond(M);

end