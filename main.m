%%
% *Main Script*
%
% Solve the optimal control problem from
% https://ieeexplore.ieee.org/abstract/document/9295329.

clc
clear
close all

dynamics_path = genpath('dynamics');
solvers_path = genpath('solvers');
utils_path = genpath('utils');
addpath(dynamics_path);
addpath(solvers_path);
addpath(utils_path);

p = params();
s = solver_settings();
Qf_scale_well = 1;
Qf_scale_ill = 1000;

%% COTS

cots_solver = cots_solver_compiler('osqp', p, s);

[sol_well, flag_well, ~, ~, ~, diagnostics_well] = cots_solver(sqrt(Qf_scale_well));
cots_solver_status(flag_well)
x_cots_well = sol_well{1};
solve_time_cots_well = 1000 * diagnostics_well.solvertime;

[sol_ill, flag_ill, ~, ~, ~, diagnostics_ill] = cots_solver(sqrt(Qf_scale_ill));
cots_solver_status(flag_ill)
x_cots_ill = sol_ill{1};
solve_time_cots_ill = 1000 * diagnostics_ill.solvertime;

position_error_well_cots = 100 * norm(x_cots_well(1:2, end) - p.x_target(1:2), 2) / norm(p.x_target(1:2), 2);
velocity_error_well_cots = norm(x_cots_well(3:4, end) - p.x_target(3:4), 2);
attributes_well_cots = [position_error_well_cots; velocity_error_well_cots; solve_time_cots_well];
position_error_ill_cots = 100 * norm(x_cots_ill(1:2, end) - p.x_target(1:2), 2) / norm(p.x_target(1:2), 2);
velocity_error_ill_cots = norm(x_cots_ill(3:4, end) - p.x_target(3:4), 2);
attributes_ill_cots = [position_error_ill_cots; velocity_error_ill_cots; solve_time_cots_ill];
table_cots = table(attributes_well_cots, attributes_ill_cots, 'VariableNames', {'Case: Well-Conditioned', 'Case: Ill-Conditioned'}, 'RowNames', {'Terminal Position Tracking Error (%)', 'Terminal Velocity Tracking Error (abs)', 'Solve Time [ms]'});
table(table_cots, 'VariableNames', {'..:: COTS Solver ::..'})

%% PIPG

[A, B] = dt_dynamics(p.dt);
E = -eye(p.nx);

[P, q, H, h] = canonicalize_pipg(p.Q, p.R, Qf_scale_well * p.Q, E, A, B, p);
tic;
[z_well, w_well, iters_well] = pipg(NaN, NaN, P, q, H, h, p, s);
solve_time_pipg_well = toc * 1000;
x_pipg_well_vec = z_well(1:p.nx*p.N);
x_pipg_well = reshape(x_pipg_well_vec, p.nx, p.N);

[P, q, H, h] = canonicalize_pipg(p.Q, p.R, Qf_scale_ill * p.Q, E, A, B, p);
tic;
[z_ill, w_ill, iters_ill] = pipg(NaN, NaN, P, q, H, h, p, s);
solve_time_pipg_ill = toc * 1000;
x_pipg_ill_vec = z_ill(1:p.nx*p.N);
x_pipg_ill = reshape(x_pipg_ill_vec, p.nx, p.N);

position_error_well_pipg = 100 * norm(x_pipg_well(1:2, end) - p.x_target(1:2), 2) / norm(p.x_target(1:2), 2);
velocity_error_well_pipg = norm(x_pipg_well(3:4, end) - p.x_target(3:4), 2);
attributes_well_pipg = [position_error_well_pipg; velocity_error_well_pipg; solve_time_pipg_well; iters_well];
position_error_ill_pipg = 100 * norm(x_pipg_ill(1:2, end) - p.x_target(1:2), 2) / norm(p.x_target(1:2), 2);
velocity_error_ill_pipg = norm(x_pipg_ill(3:4, end) - p.x_target(3:4), 2);
attributes_ill_pipg = [position_error_ill_pipg; velocity_error_ill_pipg; solve_time_pipg_ill; iters_ill];
table_pipg = table(attributes_well_pipg, attributes_ill_pipg, 'VariableNames', {'Case: Well-Conditioned', 'Case: Ill-Conditioned'}, 'RowNames', {'Terminal Position Tracking Error (%)', 'Terminal Velocity Tracking Error (abs)', 'Solve Time [ms]', 'Number of Iterations'});
table(table_pipg, 'VariableNames', {'..:: PIPG Solver ::..'})

%% Plots

setfig;

figure
rectangle('Position', [-p.rho, -p.rho, 2*p.rho, 2*p.rho], 'Curvature', [1, 1], 'EdgeColor', 'k', 'LineStyle', ':', 'LineWidth', 2);
hold on
plot(NaN, NaN, 'Color', 'k', 'LineStyle', ':', 'LineWidth', 2, 'DisplayName', 'Keep-Out Zone');
plot(p.x_init(1), p.x_init(2), 'Color', 'k', 'LineStyle', 'none', 'Marker', 'o', 'LineWidth', 2, 'DisplayName', 'Initial Position');
plot(p.x_target(1), p.x_target(2), 'Color', 'k', 'LineStyle', 'none', 'Marker', 'x', 'LineWidth', 2, 'DisplayName', 'Target Position');
plot(p.x_ref(1, :), p.x_ref(2, :), 'Color', [0, 0, 1, 0.5], 'LineStyle', '--', 'LineWidth', 2.5, 'DisplayName', 'Reference Trajectory');
plot(x_cots_well(1, :), x_cots_well(2, :), 'Color', [200, 50, 50] / 255, 'LineStyle', 'none', 'Marker', '*', 'LineWidth', 2.5, 'DisplayName', 'COTS (Case: Well-Conditioned)');
plot(x_cots_ill(1, :), x_cots_ill(2, :), 'Color', [60, 179, 113] / 255,  'LineStyle', 'none', 'Marker', 'o', 'LineWidth', 2.5, 'DisplayName', 'COTS (Case: Ill-Conditioned)');
plot(x_pipg_well(1, :), x_pipg_well(2, :), 'Color', [200, 50, 50] / 255, 'LineWidth', 2.5, 'DisplayName', 'PIPG (Case: Well-Conditioned)');
plot(x_pipg_ill(1, :), x_pipg_ill(2, :), 'Color', [60, 179, 113] / 255, 'LineWidth', 2.5, 'DisplayName', 'PIPG (Case: Ill-Conditioned)');
axis equal
xlabel("Downrange")
ylabel("Crossrange")
legend('Location', 'best')

rmpath(dynamics_path);
rmpath(solvers_path);
rmpath(utils_path);