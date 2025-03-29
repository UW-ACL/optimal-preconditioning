function [sigma, k] = power_iteration(w, H, s)
%POWER_ITERATION
%   [SIGMA, K] = POWER_ITERATION(W, H, S)

eps_abs_power = s.eps_abs_power;
eps_rel_power = s.eps_rel_power;
eps_buff_power = s.eps_buff_power;
max_iters_power = s.max_iters_power;

HT = H.';

if isnan(w)
    w = ones(size(H, 1), 1);
end

sigma = norm(w, 2);

for k = 1:max_iters_power

    sigma_km1 = sigma;
    z = HT * w;
    w =  (1 / sigma) * H * z;
    sigma = norm(w, 2);

    if abs(sigma - sigma_km1) <= eps_abs_power + eps_rel_power * max(sigma, sigma_km1)
        break
    end

end

sigma = (1 + eps_buff_power) * sigma;

end