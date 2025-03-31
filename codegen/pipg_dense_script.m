% PIPG_DENSE_SCRIPT   Generate MEX-function pipg_dense_mex from pipg.
% 
% Script generated from project 'pipg.prj' on 31-Mar-2025.
% 
% See also CODER, CODER.CONFIG, CODER.TYPEOF, CODEGEN.

%% Create configuration object of class 'coder.MexCodeConfig'.
cfg = coder.config('mex');
cfg.GenerateReport = true;
cfg.ReportPotentialDifferences = false;

%% Define argument types for entry-point 'pipg'.
ARGS = cell(1,1);
ARGS{1} = cell(11,1);
ARGS{1}{1} = coder.typeof(sparse(0),[298 298]);
ARGS{1}{2} = coder.typeof(0,[298  1]);
ARGS{1}{3} = coder.typeof(0,[196 298]);
ARGS{1}{4} = coder.typeof(0,[196  1]);
ARGS{1}{5} = coder.typeof(0);
ARGS{1}{6} = coder.typeof(sparse(0),[298 298]);
ARGS{1}{7} = coder.typeof(sparse(0),[196 196]);
ARGS{1}{8} = coder.typeof(0);
ARGS{1}{9} = coder.typeof(0,[298  1]);
ARGS_1_10 = struct;
ARGS_1_10.N = coder.typeof(0);
ARGS_1_10.dt = coder.typeof(0);
ARGS_1_10.nx = coder.typeof(0);
ARGS_1_10.nu = coder.typeof(0);
ARGS_1_10.x_init = coder.typeof(0,[4 1]);
ARGS_1_10.u_max = coder.typeof(0);
ARGS_1_10.theta = coder.typeof(0);
ARGS_1_10.rho = coder.typeof(0);
ARGS_1_10.v_max = coder.typeof(0);
ARGS_1_10.Q = coder.typeof(0,[4 4]);
ARGS_1_10.R = coder.typeof(0,[2 2]);
ARGS_1_10.x_target = coder.typeof(0,[4 1]);
ARGS_1_10.x_ref = coder.typeof(0,[4 50]);
ARGS{1}{10} = coder.typeof(ARGS_1_10);
ARGS_1_11 = struct;
ARGS_1_11.eps_abs_cots = coder.typeof(0);
ARGS_1_11.eps_rel_cots = coder.typeof(0);
ARGS_1_11.eps_abs_pipg = coder.typeof(0);
ARGS_1_11.eps_rel_pipg = coder.typeof(0);
ARGS_1_11.percent_rel_err = coder.typeof(0);
ARGS_1_11.omg = coder.typeof(0);
ARGS_1_11.rho_extrap = coder.typeof(0);
ARGS_1_11.max_iters = coder.typeof(0);
ARGS_1_11.termination = coder.typeof('X',[1 12]);
ARGS_1_11.check_every = coder.typeof(0);
ARGS_1_11.eps_abs_power = coder.typeof(0);
ARGS_1_11.eps_rel_power = coder.typeof(0);
ARGS_1_11.eps_buff_power = coder.typeof(0);
ARGS_1_11.max_iters_power = coder.typeof(0);
ARGS{1}{11} = coder.typeof(ARGS_1_11);

%% Invoke MATLAB Coder.
% Run this script from the `solvers/base` directory.
codegen -config cfg -o pipg_dense_mex pipg -args ARGS{1}