function [z_opt, w_opt, k] = pipg(z_bar, w_bar, P, q, H, h, p, s)
%PIPG
%   [Z_OPT, W_OPT, K] = PIPG(Z_BAR, W_BAR, P, Q, H, H, P, S)
%
% The proportional-integral projected gradient method.

omg = s.omg;
rho_extrap = s.rho_extrap;
max_iters = s.max_iters;
eps_abs = s.eps_abs;
eps_rel = s.eps_rel;

N = p.N;
nx = p.nx;
nu = p.nu;

if isnan(z_bar)
    zeta = [p.x_ref(:); zeros(nu*(N-1), 1)];
else
    zeta = z_bar;
end

if isnan(w_bar)
    eta = [zeros(nx*(N-1), 1); zeros(N, 1); zeros(4*N, 1); zeros(4*(N-1), 1)];
else
    eta = w_bar;
end

HT = H.';

sigs = svds(H*HT);
sig_max = max(sigs);
lam = max(diag(P));

alf = 2 / (lam + sqrt(lam^2 + 4 * omg^2 * sig_max));
bet = omg^2 * alf;

z = zeta;
w = eta;

for k = 1:max_iters

    zkm1 = z;
    wkm1 = w;
    
    z = proj_D(zeta - alf * (P * zeta + q + HT * eta), p);
    w = proj_K_polar(eta + bet * (H * (2*z - zeta) - h), p);
    zeta = (1 - rho_extrap) * zeta + rho_extrap * z;
    eta = (1 - rho_extrap) * eta + rho_extrap * w;

    if norm(z - zkm1, 'inf') <= eps_abs + eps_rel * max(norm(z, 'inf'), norm(zkm1, 'inf')) ...
        && norm(w - wkm1, 'inf') <= eps_abs + eps_rel * max(norm(w, 'inf'), norm(wkm1, 'inf'))
        break;
    end

end

z_opt = z;
w_opt = w;

end