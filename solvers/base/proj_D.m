function z_proj = proj_D(z, p)
%PROJ_D
%   Z_PROJ = PROJ_D(Z, P)
%
% Project onto the convex set, `D`.

nx = p.nx;
x_init = p.x_init;

z_proj = z;
z_proj(1:nx) = x_init;

end