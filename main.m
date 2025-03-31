%%
% *Main Script*
%
% Solve a modified version of the optimal control problem from
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
Qf_scale = 10000;
plot_flag = true;

%% COTS

cots_solver = cots_solver_compiler('ecos', p, s);

[sol, flag, ~, ~, ~, diagnostics] = cots_solver(sqrt(Qf_scale));
cots_solver_status(flag)
x_cots = sol{1};
u_cots = sol{2};
ground_truth = [x_cots(:); u_cots(:)];
solve_time_cots = 1000 * diagnostics.solvertime;

position_error_cots = norm(x_cots(1:2, end) - p.x_target(1:2), 2);
velocity_error_cots = norm(x_cots(3:4, end) - p.x_target(3:4), 2);
attributes_cots = [position_error_cots; velocity_error_cots; solve_time_cots];
attributes_cots_formatted = str2double(compose('%.6f', attributes_cots));
table_cots = table(attributes_cots_formatted, 'VariableNames', {' '}, 'RowNames', {'Terminal Position Tracking Error (abs)', 'Terminal Velocity Tracking Error (abs)', 'Solve Time [ms]'});
fprintf('\n');
disp(table(table_cots, 'VariableNames', {'..:: COTS Solver (Ground Truth) ::..'}))

%% Canonicalize Problem

[A, B] = dt_dynamics(p.dt);
C = -eye(p.nx);
[P, q, H, h] = canonicalize_pipg(p.Q, p.R, Qf_scale * p.Q, C, A, B, p);
[m, n] = size(H);
c = 1;
D = speye(n);
E = speye(m);

%% PIPG

[sigma_max, ~, power_iteration_time] = power_iteration_mex(H, s);
[z, w, iters, pipg_time] = pipg_mex(P, q, H, h, c, D, E, sigma_max, ground_truth, p, s);
solve_time_pipg = power_iteration_time + pipg_time;
kkt_cond = cond_kkt(P, H);
x_pipg_vec = z(1:p.nx*p.N);
x_pipg = reshape(x_pipg_vec, p.nx, p.N);

percent_relative_error_pipg = 100 * norm(z - ground_truth, 'inf') / norm(ground_truth, 'inf');
attributes_pipg = [percent_relative_error_pipg; solve_time_pipg; iters; kkt_cond];
attributes_pipg_formatted = str2double(compose('%.6f', attributes_pipg));
table_pipg = table(attributes_pipg_formatted, 'VariableNames', {' '}, 'RowNames', {'Relative Error w.r.t. Ground Truth (%)', 'Solve Time [ms]', 'Number of Iterations', 'KKT Condition Number'});
fprintf('\n');
disp(table(table_pipg, 'VariableNames', {'..:: PIPG ::..'}))

%% PIPG with Modified Ruiz Equilibration

[P_ruiz, q_ruiz, H_ruiz, h_ruiz, c_ruiz, D_ruiz, E_ruiz, ruiz_iters, ruiz_time] = ruiz_mex(P, q, H, h, ps);
[sigma_max_ruiz, ~, power_iteration_time_ruiz] = power_iteration_mex(H_ruiz, s);
[z_ruiz, w_ruiz, iters_ruiz, pipg_time_ruiz] = pipg_mex(P_ruiz, q_ruiz, H_ruiz, h_ruiz, c_ruiz, D_ruiz, E_ruiz, sigma_max_ruiz, ground_truth, p, s);
solve_time_pipg_ruiz = ruiz_time + power_iteration_time_ruiz + pipg_time_ruiz;
kkt_cond_ruiz = cond_kkt(P_ruiz, H_ruiz);
x_pipg_vec_ruiz = z_ruiz(1:p.nx*p.N);
x_pipg_ruiz = reshape(x_pipg_vec_ruiz, p.nx, p.N);

percent_relative_error_pipg_ruiz = 100 * norm(z_ruiz - ground_truth, 'inf') / norm(ground_truth, 'inf');
attributes_pipg_ruiz = [percent_relative_error_pipg_ruiz; solve_time_pipg_ruiz; iters_ruiz; ruiz_iters; kkt_cond_ruiz];
attributes_pipg_ruiz_formatted = str2double(compose('%.6f', attributes_pipg_ruiz));
table_pipg_ruiz = table(attributes_pipg_ruiz_formatted, 'VariableNames', {' '}, 'RowNames', {'Relative Error w.r.t. Ground Truth (%)', 'Solve Time [ms]', 'Number of Iterations (PIPG)', 'Number of Iterations (Ruiz)', 'KKT Condition Number'});
fprintf('\n');
disp(table(table_pipg_ruiz, 'VariableNames', {'..:: PIPG + Modified Ruiz Equilibration ::..'}))

%% PIPG with QR Preconditioning

[P_qr, q_qr, H_qr, h_qr, c_qr, D_qr, E_qr, qr_time] = qr_preconditioner_mex(P, q, H, h);
[sigma_max_qr, ~, power_iteration_time_qr] = power_iteration_dense_mex(H_qr, s);
[z_qr, w_qr, iters_qr, pipg_time_qr] = pipg_dense_mex(P_qr, q_qr, H_qr, h_qr, c_qr, D_qr, E_qr, sigma_max_qr, ground_truth, p, s);
solve_time_pipg_qr = qr_time + power_iteration_time_qr + pipg_time_qr;
kkt_cond_qr = cond_kkt(P_qr, H_qr);
x_pipg_vec_qr = z_qr(1:p.nx*p.N);
x_pipg_qr = reshape(x_pipg_vec_qr, p.nx, p.N);

percent_relative_error_pipg_qr = 100 * norm(z_qr - ground_truth, 'inf') / norm(ground_truth, 'inf');
attributes_pipg_qr = [percent_relative_error_pipg_qr; solve_time_pipg_qr; iters_qr; kkt_cond_qr];
attributes_pipg_qr_formatted = str2double(compose('%.6f', attributes_pipg_qr));
table_pipg_qr = table(attributes_pipg_qr_formatted, 'VariableNames', {' '}, 'RowNames', {'Relative Error w.r.t. Ground Truth (%)', 'Solve Time [ms]', 'Number of Iterations (PIPG)', 'KKT Condition Number'});
fprintf('\n');
disp(table(table_pipg_qr, 'VariableNames', {'..:: PIPG + QR Preconditioning ::..'}))

%% PIPG with Hypersphere Preconditioning

[P_hyper, q_hyper, H_hyper, h_hyper, c_hyper, D_hyper, E_hyper, sigma_max_hyper, shifted_power_iters, shifted_power_iteration_time, hypersphere_time] = hypersphere_mex(P, q, H, h, s, ps);
[z_hyper, w_hyper, iters_hyper, pipg_time_hyper] = pipg_mex(P_hyper, q_hyper, H_hyper, h_hyper, c_hyper, D_hyper, E_hyper, sigma_max_hyper, ground_truth, p, s);
solve_time_pipg_hyper = hypersphere_time + pipg_time_hyper;
kkt_cond_hyper = cond_kkt(P_hyper, H_hyper);
x_pipg_vec_hyper = z_hyper(1:p.nx*p.N);
x_pipg_hyper = reshape(x_pipg_vec_hyper, p.nx, p.N);

percent_relative_error_pipg_hyper = 100 * norm(z_hyper - ground_truth, 'inf') / norm(ground_truth, 'inf');
attributes_pipg_hyper = [percent_relative_error_pipg_hyper; solve_time_pipg_hyper; iters_hyper; shifted_power_iters; kkt_cond_hyper];
attributes_pipg_hyper_formatted = str2double(compose('%.6f', attributes_pipg_hyper));
table_pipg_hyper = table(attributes_pipg_hyper_formatted, 'VariableNames', {' '}, 'RowNames', {'Relative Error w.r.t. Ground Truth (%)', 'Solve Time [ms]', 'Number of Iterations (PIPG)', 'Number of Iterations (Shifted Power)', 'KKT Condition Number'});
fprintf('\n');
disp(table(table_pipg_hyper, 'VariableNames', {'..:: PIPG + Hypersphere Preconditioning ::..'}))

%% Plots

if plot_flag == true
    setfig;
    figure
    hold on
    plot(x_cots(1, :), x_cots(2, :), 'Color', [200, 50, 50] / 255, 'LineWidth', 2.5, 'DisplayName', 'Ground Truth');
    plot(x_pipg_hyper(1, :), x_pipg_hyper(2, :), 'Color', [0.5, 0.5, 1, 0.5], 'LineStyle', 'none', 'Marker', 'o', 'LineWidth', 2.5, 'DisplayName', 'PIPG + Hypersphere');
    plot(p.x_ref(1, :), p.x_ref(2, :), 'Color', [60, 179, 113] / 255, 'LineStyle', '--', 'LineWidth', 2.5, 'DisplayName', 'Reference Trajectory');
    rectangle('Position', [-p.rho, -p.rho, 2*p.rho, 2*p.rho], 'Curvature', [1, 1], 'EdgeColor', 'k', 'LineStyle', ':', 'LineWidth', 2);
    plot(NaN, NaN, 'Color', 'k', 'LineStyle', ':', 'LineWidth', 2, 'DisplayName', 'Keep-Out Zone');
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