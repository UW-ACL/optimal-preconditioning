function z_proj = proj_D(z, p)
%Z_PROJ
%   Z_PROJ = PROJ_D(Z, P)
%
% Project onto the convex set, `D`.

N = p.N;
nx = p.nx;
nu = p.nu;
x_init = p.x_init;
v_max = p.v_max;
u_max = p.u_max;
theta = p.theta;
rho = p.rho;

x = reshape(z(1:nx*N), nx, N);
u = reshape(z((nx*N)+1:end), nu, N-1);

x_proj = x;
u_proj = u;

x_proj(:, 1) = x_init;

for k = 2:N
    n_k = [cos(theta * k); -sin(theta * k)];
    x_proj(1:2, k) = proj_halfspace(x(1:2, k), n_k, -rho);
    x_proj(3:4, k) = proj_box(x(3:4, k), -v_max, v_max);
end

for k = 1:N-1
    u_proj(:, k) = proj_box(u(:, k), -u_max, u_max);
end

z_proj = [x_proj(:); u_proj(:)];