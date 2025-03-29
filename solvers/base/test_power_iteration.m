% Test power iteration

clc
clear
close all

solver_settings_path = "../";
addpath(solver_settings_path);

rel_tol = 1e-5;

m = randi([1, 1000], 1, 1);
n = randi([m, m + 1000], 1, 1);

H = 100 * 1 ./ ((1:m)' + (0:n-1));

sigs = svd(H * H.');
sigma_svd = max(sigs);

s = solver_settings();
[sigma_power, k] = power_iteration(NaN, H, s);

assert(abs(sigma_power - sigma_svd) / abs(sigma_svd) <= rel_tol);
fprintf('\n Number of power iterations: %d\n', k);
fprintf('\n Test passed.\n\n');

rmpath(solver_settings_path)