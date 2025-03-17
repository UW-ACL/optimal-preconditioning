function p = params()
%PARAMS
%   P = PARAMS()
%
% Problem parameters.

p = struct;

p.N = 50;
p.dt = 0.5;
p.x_init = [-2.5, 0.6, 0, 0].';
p.u_max = 0.1;
p.theta = 0.063;
p.rho = 1;
p.v_max = 0.25;
p.Q = diag([1, 0.5, 1, 0.5]);
p.R = diag([1, 0.5]);

x_target = [2.9, 0.3, 0, 0].';
x_ref = zeros(4, p.N);
for k = 1:size(x_ref, 1)
    x_ref(k, :) = linspace(p.x_init(k), x_target(k), p.N);
end
p.x_target = x_target;
p.x_ref = x_ref;

end