function z_proj = proj_halfspace(z, a, b)
%PROJ_HALFSPACE
%   Z_PROJ = PROJ_HALFSPACE(Z, A, B)
%
% Project onto the halfspace given by `a^T z <= b`. `a` is assumed to be a
% unit vector.

aTz = a.' * z;

if aTz > b
    z_proj = z - ((aTz - b) * a / (a.' * a));
else
    z_proj = z;
end

end