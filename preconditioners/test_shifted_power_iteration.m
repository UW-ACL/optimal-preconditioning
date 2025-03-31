% Test shifted power iteration

clc
clear
close all

rel_tol = 1;

m = randi([2, 10], 1, 1);
n = randi([m, m + 10], 1, 1);

H = rand(m, n);

sigs = svd(H * H.');
sigma_min_svd = min(sigs);

sigma_max = max(sigs);
ps = preconditioner_settings();
[sigma_min_shifted_power, k] = shifted_power_iteration(NaN, sigma_max, H, ps); 

assert(100 * abs(sigma_min_shifted_power - sigma_min_svd) / abs(sigma_min_svd) <= rel_tol);
fprintf('\n Number of shifted power iterations: %d\n', k);
fprintf('\n Test passed.\n\n');