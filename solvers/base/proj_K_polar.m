function w_proj = proj_K_polar(w, p)
%PROJ_K_POLAR
%   W_PROJ = PROJ_K_POLAR(W, P)
%
% Project onto the polar cone, `K_polar`.

w_proj = w - proj_K(w, p);

end