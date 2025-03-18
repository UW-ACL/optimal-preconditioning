function z_proj = proj_ball(z, r)
%PROJ_BALL
%   z_proj = proj_ball(z, p)
%
% Project onto the ball of radius `r`.

z_proj = z * r / max(norm(z, 2), r);

end