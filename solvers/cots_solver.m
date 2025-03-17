function [x_opt, u_opt, solve_time] = cots_solver(solver, p)
%COTS
%   [X_OPT, U_OPT, SOLVE_TIME] = COTS_SOLVER(SOLVER, P)
%
% Solve the optimal control problem using a commercial off-the-shelf convex
% optimization solver (via YALMIP).

N = p.N;
dt = p.dt;
x_init = p.x_init;
u_max = p.u_max;
theta = p.theta;
rho = p.rho;
v_max = p.v_max;
Q = p.Q;
Qf = p.Qf;
R = p.R;
x_ref = p.x_ref;

dynamics_path = genpath('dynamics');
addpath(dynamics_path);
[Ad, Bd] = dt_dynamics(dt);
rmpath(dynamics_path);

x = sdpvar(4, N);
u = sdpvar(2, N-1);

constraints = [];

constraints = [constraints; x(:, 1) == x_init];

for k = 1:N-1
    constraints = [constraints; x(:, k+1) == Ad * x(:, k) + Bd * u(:, k)];
end

for k = 1:N-1
    constraints = [constraints; norm(u(:, k), 2) <= u_max];
end

for k = 1:N
    n_k = [cos(theta * k); -sin(theta * k)];
    constraints = [constraints; n_k.' * x(1:2, k) <= -rho];
    constraints = [constraints; norm(x(3:4, k)) <= v_max];
end

objective = 0.0;

for k = 1:N-1
    x_err_k = x(:, k) - x_ref(:, k);
    objective = objective ...
        + 0.5 * x_err_k.' * Q * x_err_k ...
        + 0.5 * u(:, k).' * R * u(:, k); ...
end

x_err_N = x(:, N) - x_ref(:, N);
objective = objective + 0.5 * x_err_N.' * Qf * x_err_N;

max_coefficient = norm(coefficients(objective), 'inf');
if max_coefficient <= 1
    scaling_factor = 1;
else
    scaling_factor = 1 / max_coefficient;
end

objective = scaling_factor * objective;

solver_options = sdpsettings('solver', solver, 'verbose', 0);

solution = optimize(constraints, objective, solver_options);

x_opt = value(x);
u_opt = value(u);

solve_time = 1000 * solution.solvertime;

solve_flag = solution.problem;

switch solve_flag
    case 0
        % 1: Feasible
    case {1, 12, 15}
        % 1:  Infeasible
        % 12: Infeasible or unbounded
        % 15: Either infeasible or unbounded
        fprintf('\n Warning: Problem infeasible.\n\n');
    case {3, 4, 5}
        % 3: Maximum number of iterations exceeded
        % 4: Numerical problems
        % 5: Lack of progress
        fprintf('\n Warning: Numerical issues.\n\n');
    otherwise
        display(solve_flag);
        fprintf('\n Unsupported exit flag: %d.\n\n', solve_flag);
end

end