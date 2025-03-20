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
preconditioners_path = genpath('preconditioners');
utils_path = genpath('utils');
addpath(dynamics_path);
addpath(solvers_path);
addpath(preconditioners_path);
addpath(utils_path);

p = params();
s = solver_settings();
ps = preconditioner_settings();
Qf_scale_well = 1;
Qf_scale_ill = 1000;
plot_flag = true;

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
fprintf('    _________________________________________________________________________________________\n\n');
disp(table(table_cots, 'VariableNames', {'..:: COTS Solver ::..'}))

%% Canonicalize Problem

[A, B] = dt_dynamics(p.dt);
C = -eye(p.nx);
[P_well, q_well, H_well, h_well] = canonicalize_pipg(p.Q, p.R, Qf_scale_well * p.Q, C, A, B, p);
[P_ill, q_ill, H_ill, h_ill] = canonicalize_pipg(p.Q, p.R, Qf_scale_ill * p.Q, C, A, B, p);

%% PIPG

tic;
[z_well, w_well, iters_well] = pipg(NaN, NaN, P_well, q_well, H_well, h_well, NaN, NaN, NaN, p, s);
solve_time_pipg_well = toc * 1000;
x_pipg_well_vec = z_well(1:p.nx*p.N);
x_pipg_well = reshape(x_pipg_well_vec, p.nx, p.N);

tic;
[z_ill, w_ill, iters_ill] = pipg(NaN, NaN, P_ill, q_ill, H_ill, h_ill, NaN, NaN, NaN, p, s);
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
fprintf('    _________________________________________________________________________________________\n\n');
disp(table(table_pipg, 'VariableNames', {'..:: PIPG ::..'}))

%% PIPG with Modified Ruiz Equilibration

[P_well_ruiz, q_well_ruiz, H_well_ruiz, h_well_ruiz, c_well_ruiz, D_well_ruiz, E_well_ruiz, ruiz_iters_well] = ruiz(P_well, q_well, H_well, h_well, ps);
tic;
[z_well_ruiz, w_well_ruiz, iters_well_ruiz] = pipg(NaN, NaN, P_well_ruiz, q_well_ruiz, H_well_ruiz, h_well_ruiz, c_well_ruiz, D_well_ruiz, E_well_ruiz, p, s);
solve_time_pipg_well_ruiz = toc * 1000;
x_pipg_well_vec_ruiz = z_well_ruiz(1:p.nx*p.N);
x_pipg_well_ruiz = reshape(x_pipg_well_vec_ruiz, p.nx, p.N);

[P_ill_ruiz, q_ill_ruiz, H_ill_ruiz, h_ill_ruiz, c_ill_ruiz, D_ill_ruiz, E_ill_ruiz, ruiz_iters_ill] = ruiz(P_ill, q_ill, H_ill, h_ill, ps);
tic;
[z_ill_ruiz, w_ill_ruiz, iters_ill_ruiz] = pipg(NaN, NaN, P_ill_ruiz, q_ill_ruiz, H_ill_ruiz, h_ill_ruiz, c_ill_ruiz, D_ill_ruiz, E_ill_ruiz, p, s);
solve_time_pipg_ill_ruiz = toc * 1000;
x_pipg_ill_vec_ruiz = z_ill_ruiz(1:p.nx*p.N);
x_pipg_ill_ruiz = reshape(x_pipg_ill_vec_ruiz, p.nx, p.N);

position_error_well_pipg_ruiz = 100 * norm(x_pipg_well_ruiz(1:2, end) - p.x_target(1:2), 2) / norm(p.x_target(1:2), 2);
velocity_error_well_pipg_ruiz = norm(x_pipg_well_ruiz(3:4, end) - p.x_target(3:4), 2);
attributes_well_pipg_ruiz = [position_error_well_pipg_ruiz; velocity_error_well_pipg_ruiz; solve_time_pipg_well_ruiz; iters_well_ruiz; ruiz_iters_well];
position_error_ill_pipg_ruiz = 100 * norm(x_pipg_ill_ruiz(1:2, end) - p.x_target(1:2), 2) / norm(p.x_target(1:2), 2);
velocity_error_ill_pipg_ruiz = norm(x_pipg_ill_ruiz(3:4, end) - p.x_target(3:4), 2);
attributes_ill_pipg_ruiz = [position_error_ill_pipg_ruiz; velocity_error_ill_pipg_ruiz; solve_time_pipg_ill_ruiz; iters_ill_ruiz; ruiz_iters_ill];
table_pipg_ruiz = table(attributes_well_pipg_ruiz, attributes_ill_pipg_ruiz, 'VariableNames', {'Case: Well-Conditioned', 'Case: Ill-Conditioned'}, 'RowNames', {'Terminal Position Tracking Error (%)', 'Terminal Velocity Tracking Error (abs)', 'Solve Time [ms]', 'Number of Iterations (PIPG)', 'Number of Iterations (Ruiz)'});
fprintf('    _________________________________________________________________________________________\n\n');
disp(table(table_pipg_ruiz, 'VariableNames', {'..:: PIPG + Modified Ruiz Equilibration ::..'}))

%% PIPG with Hypersphere Preconditioning

[P_well_hyper, q_well_hyper, H_well_hyper, h_well_hyper, c_well_hyper, D_well_hyper, E_well_hyper] = hypersphere(P_well, q_well, H_well, h_well, ps);
tic;
[z_well_hyper, w_well_hyper, iters_well_hyper] = pipg(NaN, NaN, P_well_hyper, q_well_hyper, H_well_hyper, h_well_hyper, c_well_hyper, D_well_hyper, E_well_hyper, p, s);
solve_time_pipg_well_hyper = toc * 1000;
x_pipg_well_vec_hyper = z_well_hyper(1:p.nx*p.N);
x_pipg_well_hyper = reshape(x_pipg_well_vec_hyper, p.nx, p.N);

[P_ill_hyper, q_ill_hyper, H_ill_hyper, h_ill_hyper, c_ill_hyper, D_ill_hyper, E_ill_hyper] = hypersphere(P_ill, q_ill, H_ill, h_ill, ps);
tic;
[z_ill_hyper, w_ill_hyper, iters_ill_hyper] = pipg(NaN, NaN, P_ill_hyper, q_ill_hyper, H_ill_hyper, h_ill_hyper, c_ill_hyper, D_ill_hyper, E_ill_hyper, p, s);
solve_time_pipg_ill_hyper = toc * 1000;
x_pipg_ill_vec_hyper = z_ill_hyper(1:p.nx*p.N);
x_pipg_ill_hyper = reshape(x_pipg_ill_vec_hyper, p.nx, p.N);

position_error_well_pipg_hyper = 100 * norm(x_pipg_well_hyper(1:2, end) - p.x_target(1:2), 2) / norm(p.x_target(1:2), 2);
velocity_error_well_pipg_hyper = norm(x_pipg_well_hyper(3:4, end) - p.x_target(3:4), 2);
attributes_well_pipg_hyper = [position_error_well_pipg_hyper; velocity_error_well_pipg_hyper; solve_time_pipg_well_hyper; iters_well_hyper];
position_error_ill_pipg_hyper = 100 * norm(x_pipg_ill_hyper(1:2, end) - p.x_target(1:2), 2) / norm(p.x_target(1:2), 2);
velocity_error_ill_pipg_hyper = norm(x_pipg_ill_hyper(3:4, end) - p.x_target(3:4), 2);
attributes_ill_pipg_hyper = [position_error_ill_pipg_hyper; velocity_error_ill_pipg_hyper; solve_time_pipg_ill_hyper; iters_ill_hyper];
table_pipg_hyper = table(attributes_well_pipg_hyper, attributes_ill_pipg_hyper, 'VariableNames', {'Case: Well-Conditioned', 'Case: Ill-Conditioned'}, 'RowNames', {'Terminal Position Tracking Error (%)', 'Terminal Velocity Tracking Error (abs)', 'Solve Time [ms]', 'Number of Iterations (PIPG)'});
fprintf('    _________________________________________________________________________________________\n\n');
disp(table(table_pipg_hyper, 'VariableNames', {'..:: PIPG + Hypersphere Preconditioning ::..'}))

%% Plots

if plot_flag == true
    setfig;
    figure
    hold on
    plot(x_cots_well(1, :), x_cots_well(2, :), 'Color', [200, 50, 50] / 255, 'LineStyle', 'none', 'Marker', '*', 'LineWidth', 2.5, 'DisplayName', 'COTS (Case: Well-Conditioned)');
    plot(x_cots_ill(1, :), x_cots_ill(2, :), 'Color', [60, 179, 113] / 255,  'LineStyle', 'none', 'Marker', 'o', 'LineWidth', 2.5, 'DisplayName', 'COTS (Case: Ill-Conditioned)');
    plot(x_pipg_well_hyper(1, :), x_pipg_well_hyper(2, :), 'Color', [200, 50, 50] / 255, 'LineWidth', 2.5, 'DisplayName', 'PIPG + Hypersphere (Case: Well-Conditioned)');
    plot(x_pipg_ill_hyper(1, :), x_pipg_ill_hyper(2, :), 'Color', [60, 179, 113] / 255, 'LineWidth', 2.5, 'DisplayName', 'PIPG + Hypersphere (Case: Ill-Conditioned)');
    rectangle('Position', [-p.rho, -p.rho, 2*p.rho, 2*p.rho], 'Curvature', [1, 1], 'EdgeColor', 'k', 'LineStyle', ':', 'LineWidth', 2);
    plot(NaN, NaN, 'Color', 'k', 'LineStyle', ':', 'LineWidth', 2, 'DisplayName', 'Keep-Out Zone');
    plot(p.x_ref(1, :), p.x_ref(2, :), 'Color', [0, 0, 1, 0.5], 'LineStyle', '--', 'LineWidth', 2.5, 'DisplayName', 'Reference Trajectory');
    plot(p.x_init(1), p.x_init(2), 'Color', 'k', 'LineStyle', 'none', 'Marker', 'o', 'LineWidth', 2.5, 'DisplayName', 'Initial Position');
    plot(p.x_target(1), p.x_target(2), 'Color', 'k', 'LineStyle', 'none', 'Marker', 'x', 'LineWidth', 2.5, 'DisplayName', 'Target Position');
    axis equal
    xlabel("Downrange")
    ylabel("Crossrange")
    legend('Location', 'best')
end

rmpath(dynamics_path);
rmpath(solvers_path);
rmpath(preconditioners_path);
rmpath(utils_path);