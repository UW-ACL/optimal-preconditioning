function w_proj = proj_K(w, p)
%PROJ_K
%   W_PROJ = PROJ_K(W, P)
%
% Project onto the convex cone, `K`.

N = p.N;
nx = p.nx;

w_proj = w;

w_proj(1:nx*(N-1)) = 0.0;

end