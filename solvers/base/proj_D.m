function z_proj = proj_D(z, p)
%PROJ_D
%   Z_PROJ = PROJ_D(Z, P)
%
% Project onto the convex set, `D`.

N = p.N;
nx = p.nx;
nu = p.nu;
v_max = p.v_max;
u_max = p.u_max;
x_init = p.x_init;

z_proj = z;
z_proj(1:nx) = x_init;

for k = 2:N
    z_proj(nx*k-1:nx*k) = proj_ball(z_proj(nx*k-1:nx*k), v_max);
end

for k = 1:N-1
    z_proj(nx*N+nu*k-1:nx*N+nu*k) = proj_ball(z_proj(nx*N+nu*k-1:nx*N+nu*k), u_max);
end

end