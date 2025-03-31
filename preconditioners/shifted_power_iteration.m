function [sigma_min, k, shifted_power_iteration_time] = shifted_power_iteration(sigma_max, H, ps)
%SHIFTED_POWER_ITERATION
%   [SIGMA_MIN, K, SHIFTED_POWER_ITERATION_TIME] = SHIFTED_POWER_ITERATION(SIGMA_MAX, H, PS)

tic;

eps_abs_shifted_power = ps.eps_abs_shifted_power;
eps_rel_shifted_power = ps.eps_rel_shifted_power;
eps_buff_shifted_power = ps.eps_buff_shifted_power;
max_iters_shifted_power = ps.max_iters_shifted_power;

HT = H.';

m = size(H, 1);
w = ones(m, 1) / sqrt(m);

sigma = norm(w, 2);

for k = 1:max_iters_shifted_power

    sigma_km1 = sigma;
    z = HT * w;
    w = (1 / sigma) * (H * z - sigma_max * w);
    sigma = norm(w, 2);

    if abs(sigma - sigma_km1) <= eps_abs_shifted_power + eps_rel_shifted_power * max(sigma, sigma_km1)
        break
    end

end

sigma_min = (1 - eps_buff_shifted_power) * (sigma_max - sigma);

shifted_power_iteration_time = 1000 * toc;

end