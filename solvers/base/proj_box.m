function z_proj = proj_box(z, l, u)
%PROJ_BOX
%   P = PROJ_BOX(Z, L, U)
%
% Project onto the box defined by `[l, u]`.

z_proj = min(max(z, l), u);

end