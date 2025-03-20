function [z_opt, w_opt, k] = pipg(z_bar, w_bar, P, q, H, h, c, D, E, p, s)
%PIPG
%   [Z_OPT, W_OPT, K] = PIPG(Z_BAR, W_BAR, P, q, H, h, c, D, E, P, S)
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

if isnan(c)
    c = 1;
end

if isnan(D)
    D = speye(length(zeta));
end

if isnan(E)
    E = speye(length(eta));
end

x_init = D(1:nx, 1:nx) \ p.x_init;

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
    
    z = zeta - alf * (P * zeta + q + HT * eta);
    z(1:nx) = x_init;
    w = proj_K_polar(eta + bet * (H * (2*z - zeta) - h), p);
    zeta = (1 - rho_extrap) * zeta + rho_extrap * z;
    eta = (1 - rho_extrap) * eta + rho_extrap * w;

    z_unscaled = D * z;
    zkm1_unscaled = D * zkm1;
    w_unscaled = (1 / c) * E * w;
    wkm1_unscaled = (1 / c) * E * wkm1;

    if norm(z_unscaled - zkm1_unscaled, 'inf') <= eps_abs + eps_rel * max(norm(z_unscaled, 'inf'), norm(zkm1_unscaled, 'inf')) ...
        && norm(w_unscaled - wkm1_unscaled, 'inf') <= eps_abs + eps_rel * max(norm(w_unscaled, 'inf'), norm(wkm1_unscaled, 'inf'))
        break;
    end

end

z_opt = z_unscaled;
w_opt = wkm1_unscaled;

end