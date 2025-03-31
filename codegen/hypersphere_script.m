% HYPERSPHERE_SCRIPT   Generate MEX-function hypersphere_mex from hypersphere.
% 
% Script generated from project 'hypersphere.prj' on 31-Mar-2025.
% 
% See also CODER, CODER.CONFIG, CODER.TYPEOF, CODEGEN.

%% Create configuration object of class 'coder.MexCodeConfig'.
cfg = coder.config('mex');
cfg.GenerateReport = true;
cfg.ReportPotentialDifferences = false;

%% Define argument types for entry-point 'hypersphere'.
ARGS = cell(1,1);
ARGS{1} = cell(6,1);
ARGS{1}{1} = coder.typeof(sparse(0),[298 298]);
ARGS{1}{2} = coder.typeof(0,[298  1]);
ARGS{1}{3} = coder.typeof(sparse(0),[196 298]);
ARGS{1}{4} = coder.typeof(0,[196  1]);
ARGS_1_5 = struct;
ARGS_1_5.eps_abs_cots = coder.typeof(0);
ARGS_1_5.eps_rel_cots = coder.typeof(0);
ARGS_1_5.eps_abs_pipg = coder.typeof(0);
ARGS_1_5.eps_rel_pipg = coder.typeof(0);
ARGS_1_5.percent_rel_err = coder.typeof(0);
ARGS_1_5.omg = coder.typeof(0);
ARGS_1_5.rho_extrap = coder.typeof(0);
ARGS_1_5.max_iters = coder.typeof(0);
ARGS_1_5.termination = coder.typeof('X',[1 12]);
ARGS_1_5.check_every = coder.typeof(0);
ARGS_1_5.eps_abs_power = coder.typeof(0);
ARGS_1_5.eps_rel_power = coder.typeof(0);
ARGS_1_5.eps_buff_power = coder.typeof(0);
ARGS_1_5.max_iters_power = coder.typeof(0);
ARGS{1}{5} = coder.typeof(ARGS_1_5);
ARGS_1_6 = struct;
ARGS_1_6.p_norm = coder.typeof('X',[1 3]);
ARGS_1_6.max_iters_ruiz = coder.typeof(0);
ARGS_1_6.eps_ruiz = coder.typeof(0);
ARGS_1_6.row_norm_tol = coder.typeof(0);
ARGS_1_6.eps_abs_shifted_power = coder.typeof(0);
ARGS_1_6.eps_rel_shifted_power = coder.typeof(0);
ARGS_1_6.eps_buff_shifted_power = coder.typeof(0);
ARGS_1_6.max_iters_shifted_power = coder.typeof(0);
ARGS{1}{6} = coder.typeof(ARGS_1_6);

%% Invoke MATLAB Coder.
% Run this script from the `preconditioners` directory.
codegen -config cfg hypersphere -args ARGS{1}