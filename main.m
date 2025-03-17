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

cots_solver = cots_solver_compiler('ecos', p);

Qf_scale_well = 1;
[sol_well, flag_well, ~, ~, ~, diagnostics_well] = cots_solver(sqrt(Qf_scale_well));
cots_solver_status(flag_well)
x_opt_well = sol_well{1};
solve_time_well = 1000 * diagnostics_well.solvertime;

Qf_scale_ill = 10000;
[sol_ill, flag_ill, ~, ~, ~, diagnostics_ill] = cots_solver(sqrt(Qf_scale_ill));
cots_solver_status(flag_ill)
x_opt_ill = sol_ill{1};
solve_time_ill = 1000 * diagnostics_ill.solvertime;

position_error_well = norm(x_opt_well(1:2, end) - p.x_target(1:2), 2);
velocity_error_well = norm(x_opt_well(3:4, end) - p.x_target(3:4), 2);
attributes_well = [position_error_well; velocity_error_well; solve_time_well];
position_error_ill = norm(x_opt_ill(1:2, end) - p.x_target(1:2), 2);
velocity_error_ill = norm(x_opt_ill(3:4, end) - p.x_target(3:4), 2);
attributes_ill = [position_error_ill; velocity_error_ill; solve_time_ill];
table(attributes_well, attributes_ill, 'VariableNames', {'Case: Well-Conditioned', 'Case: Ill-Conditioned'}, 'RowNames', {'Terminal Position Tracking Error', 'Terminal Velocity Tracking Error', 'Solve Time [ms]'})

setfig;

figure
rectangle('Position', [-p.rho, -p.rho, 2*p.rho, 2*p.rho], 'Curvature', [1, 1], 'EdgeColor', 'k', 'LineStyle', ':', 'LineWidth', 2);
hold on
plot(NaN, NaN, 'Color', 'k', 'LineStyle', ':', 'LineWidth', 2, 'DisplayName', 'Keep-Out Zone');
plot(p.x_init(1), p.x_init(2), 'Color', 'k', 'LineStyle', 'none', 'Marker', 'o', 'LineWidth', 2, 'DisplayName', 'Initial Position');
plot(p.x_target(1), p.x_target(2), 'Color', 'k', 'LineStyle', 'none', 'Marker', 'x', 'LineWidth', 2, 'DisplayName', 'Target Position');
plot(p.x_ref(1, :), p.x_ref(2, :), 'Color', [0, 0, 1, 0.5], 'LineStyle', '--', 'LineWidth', 2.5, 'DisplayName', 'Reference Trajectory');
plot(x_opt_well(1, :), x_opt_well(2, :), 'Color', [200, 50, 50] / 255, 'LineWidth', 2.5, 'DisplayName', 'Optimal Trajectory (Case: Well-Conditioned)');
plot(x_opt_ill(1, :), x_opt_ill(2, :), 'Color', [60, 179, 113] / 255, 'LineWidth', 2.5, 'DisplayName', 'Optimal Trajectory (Case: Ill-Conditioned)');
axis equal
xlabel("Downrange")
ylabel("Crossrange")
legend('Location', 'best')

rmpath(solvers_path);
rmpath(utils_path);