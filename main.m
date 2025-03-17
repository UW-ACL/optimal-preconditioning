%%
% *Main Script*
%
% Solve the optimal control problem from
% https://ieeexplore.ieee.org/abstract/document/9295329.

clc
clear
close all

solvers_path = genpath('solvers');
utils_path = genpath('utils');
addpath(solvers_path);
addpath(utils_path);

p = params();

solver_name = 'ecos';

[x_opt, u_opt, solve_time] = cots(solver_name, p);

setfig;

figure
rectangle('Position', [-p.rho, -p.rho, 2*p.rho, 2*p.rho], 'Curvature', [1, 1], 'EdgeColor', 'k', 'LineStyle', ':', 'LineWidth', 2);
hold on
plot(NaN, NaN, 'Color', 'k', 'LineStyle', ':', 'LineWidth', 2, 'DisplayName', 'Keep-Out Zone');
plot(p.x_init(1), p.x_init(2), 'Color', [0, 0, 1, 0.5], 'LineStyle', 'none', 'Marker', 'o', 'LineWidth', 2, 'DisplayName', 'Initial Position');
plot(p.x_ref(1, :), p.x_ref(2, :), 'Color', [200, 50, 50] / 255, 'LineStyle', '--', 'LineWidth', 2.5, 'DisplayName', 'Reference Trajectory');
plot(x_opt(1, :), x_opt(2, :), 'Color', [60, 179, 113] / 255, 'LineWidth', 2.5, 'DisplayName', 'Optimal Trajectory');
axis equal
xlabel("$r_{x}$")
ylabel("$r_{y}$")
legend

rmpath(solvers_path);
rmpath(utils_path);