function [x_opt, u_opt, solve_time] = cots(solver, p)
%COTS
%   [X_OPT, U_OPT, SOLVE_TIME] = COTS(SOLVER, P)
%
% Solve the optimal control problem using a commercial off-the-shelf convex
% optimization solver (via YALMIP).

dim = p.dim;
N = p.N;
dt = p.dt;
x_init = p.x_init;
u_max = p.u_max;
theta = p.theta;
rho = p.rho;
v_max = p.v_max;
Q = p.Q;
R = p.R;
x_ref = p.x_ref;

dynamics_path = genpath('dynamics');
addpath(dynamics_path);
[Ad, Bd] = dt_dynamics(dim, dt);
rmpath(dynamics_path);

x = sdpvar(2*dim, N);
u = sdpvar(dim, N-1);

constraints = [];

constraints = [constraints; x(:, 1) == x_init];

for k = 1:N-1
    constraints = [constraints; x(:, k+1) == Ad * x(:, k) + Bd * u(:, k)];
end

for k = 1:N-1
    constraints = [constraints; norm(u(:, k)) <= u_max];
end

for k = 1:N
    c_k = [cos(theta * k); -sin(theta * k)];
    constraints = [constraints; c_k.' * x(1:dim, k) <= -rho];
    constraints = [constraints; norm(x(dim+1:2*dim, k)) <= v_max];
end

objective = 0.0;

for k = 1:N
    x_err_k = x(:, k) - x_ref(:, k);
    objective = objective + 0.5 * x_err_k.' * Q * x_err_k;
end

for k = 1:N-1
    objective = objective + 0.5 * u(:, k).' * R * u(:, k);
end

solver_options = sdpsettings('solver', solver, 'verbose', 0);

solution = optimize(constraints, objective, solver_options);

x_opt = value(x);
u_opt = value(u);

solve_time = 1000 * solution.solvertime;

end