function [sigma_max, k, power_iteration_time] = power_iteration(H, s)
%POWER_ITERATION
%   [SIGMA_MAX, K, POWER_ITERATION_TIME] = POWER_ITERATION(H, S)

tic;

eps_abs_power = s.eps_abs_power;
eps_rel_power = s.eps_rel_power;
eps_buff_power = s.eps_buff_power;
max_iters_power = s.max_iters_power;

HT = H.';

m = size(H, 1);
w = ones(m, 1) / sqrt(m);

sigma = norm(w, 2);

for k = 1:max_iters_power

    sigma_km1 = sigma;
    z = HT * w;
    w = (1 / sigma) * H * z;
    sigma = norm(w, 2);

    if abs(sigma - sigma_km1) <= eps_abs_power + eps_rel_power * max(sigma, sigma_km1)
        break
    end

end

sigma_max = (1 + eps_buff_power) * sigma;

power_iteration_time = 1000 * toc;

end