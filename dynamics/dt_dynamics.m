function [Ad, Bd] = dt_dynamics(dt)
%DT_DYNAMICS
%   [AD, BD] = DT_DYNAMICS(DT)
%
% The discrete-time dynamics with a sampling time of `dt`.
    
[Ac, Bc] = ct_dynamics();

[nx, nu] = size(Bc);

Mc = [Ac, Bc; zeros(nu, nx+nu)];
M = expm(Mc * dt);

Ad = M(1:nx, 1:nx);
Bd = M(1:nx, nx+1:nx+nu);

end