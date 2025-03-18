function cots_solver = cots_solver_compiler(solver_name, p)
%COTS_SOLVER_COMPILER
%   COTS_SOLVER = COTS_SOLVER_COMPILER(SOLVER_NAME, P)
%
% Compile a commercial off-the-shelf convex optimization solver (via
% YALMIP) for the optimal control problem.

N = p.N;
dt = p.dt;
nx = p.nx;
nu = p.nu;
x_init = p.x_init;
u_max = p.u_max;
theta = p.theta;
rho = p.rho;
v_max = p.v_max;
Q = p.Q;
R = p.R;
x_ref = p.x_ref;

[Ad, Bd] = dt_dynamics(dt);

yalmip('clear')

x = sdpvar(nx, N);
u = sdpvar(nu, N-1);
sqrt_Qf_scale = sdpvar(1);
sqrt_Qf_x_err_N = sdpvar(nx, 1);

constraints = [];

constraints = [constraints; x(:, 1) == x_init];

for k = 1:N-1
    constraints = [constraints; x(:, k+1) == Ad * x(:, k) + Bd * u(:, k)];
end

for k = 1:N-1
    constraints = [constraints; norm(u(:, k), 2) <= u_max];
end

for k = 2:N
    n_k = [cos(theta * k); -sin(theta * k)];
    constraints = [constraints; n_k.' * x(1:2, k) <= -rho];
    constraints = [constraints; norm(x(3:4, k)) <= v_max];
end

objective = 0.0;

for k = 1:N-1
    x_err_k = x(:, k) - x_ref(:, k);
    objective = objective ...
        + 0.5 * x_err_k.' * Q * x_err_k ...
        + 0.5 * u(:, k).' * R * u(:, k);
end

x_err_N = x(:, N) - x_ref(:, N);
constraints = [constraints; sqrt_Qf_x_err_N == sqrt_Qf_scale * sqrt(Q) * x_err_N];
objective = objective + 0.5 * (sqrt_Qf_x_err_N.' * sqrt_Qf_x_err_N);

solver_options = sdpsettings('solver', solver_name, 'verbose', 0);

cots_solver = optimizer(constraints, objective, solver_options, {sqrt_Qf_scale}, {x, u});

end