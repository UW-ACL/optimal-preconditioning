function [z_opt, w_opt, k] = pipg(z_bar, w_bar, P, q, H, h, c, D, E, ground_truth, p, s)
%PIPG
%   [Z_OPT, W_OPT, K] = PIPG(Z_BAR, W_BAR, P, q, H, h, c, D, E, GROUND_TRUTH, P, S)
%
% The proportional-integral projected gradient method.

omg = s.omg;
rho_extrap = s.rho_extrap;
max_iters = s.max_iters;
eps_abs_pipg = s.eps_abs_pipg;
eps_rel_pipg = s.eps_rel_pipg;
percent_rel_err = s.percent_rel_err;
check_every = s.check_every;
termination = s.termination;

N = p.N;
nx = p.nx;
nu = p.nu;

if isnan(z_bar)
    zeta = [p.x_ref(:); zeros(nu*(N-1), 1)];
else
    zeta = z_bar;
end

if isnan(w_bar)
    eta = [zeros(nx*(N-1), 1); zeros(N, 1)];
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

zeta = D \ zeta;

HT = H.';

[sig_max, ~] = power_iteration(NaN, H, s);
lam = max(diag(P));

alf = 2 / (lam + sqrt(lam^2 + 4 * omg^2 * sig_max));
bet = omg^2 * alf;

z = zeta;
w = eta;

for k = 1:max_iters

    zkm1 = z;
    wkm1 = w;
    
    z = zeta - alf * (P * zeta + q + HT * eta);
    z = D \ proj_D(D * z, p);
    w = proj_K_polar(eta + bet * (H * (2*z - zeta) - h), p);
    zeta = (1 - rho_extrap) * zeta + rho_extrap * z;
    eta = (1 - rho_extrap) * eta + rho_extrap * w;

    if mod(k, check_every) == 0

        if strcmp(termination, 'unscaled')
            z_check = D * z;
            zkm1_check = D * zkm1;
            w_check = (1 / c) * E * w;
            wkm1_check = (1 / c) * E * wkm1;
        elseif strcmp(termination, 'scaled')
            z_check = z;
            zkm1_check = zkm1;
            w_check = w;
            wkm1_check = wkm1;
        elseif strcmp(termination, 'ground_truth')
            z_check = D * z;
        end

        if strcmp(termination, 'ground_truth')
            if 100 * norm(z_check - ground_truth, 'inf') / norm(ground_truth, 'inf') <= percent_rel_err
                break;
            end
        else    
            if norm(z_check - zkm1_check, 'inf') <= eps_abs_pipg + eps_rel_pipg * max(norm(z_check, 'inf'), norm(zkm1_check, 'inf')) ...
                && norm(w_check - wkm1_check, 'inf') <= eps_abs_pipg + eps_rel_pipg * max(norm(w_check, 'inf'), norm(wkm1_check, 'inf'))
                break;
            end
        end

    end

end

z_opt = D * z;
w_opt = (1 / c) * E * w;

end