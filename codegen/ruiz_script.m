% RUIZ_SCRIPT   Generate MEX-function ruiz_mex from ruiz.
% 
% Script generated from project 'ruiz.prj' on 31-Mar-2025.
% 
% See also CODER, CODER.CONFIG, CODER.TYPEOF, CODEGEN.

%% Create configuration object of class 'coder.MexCodeConfig'.
cfg = coder.config('mex');
cfg.GenerateReport = true;
cfg.ReportPotentialDifferences = false;

%% Define argument types for entry-point 'ruiz'.
ARGS = cell(1,1);
ARGS{1} = cell(5,1);
ARGS{1}{1} = coder.typeof(sparse(0),[298 298]);
ARGS{1}{2} = coder.typeof(0,[298  1]);
ARGS{1}{3} = coder.typeof(sparse(0),[196 298]);
ARGS{1}{4} = coder.typeof(0,[196  1]);
ARGS_1_5 = struct;
ARGS_1_5.p_norm = coder.typeof('X',[1 3]);
ARGS_1_5.max_iters_ruiz = coder.typeof(0);
ARGS_1_5.eps_ruiz = coder.typeof(0);
ARGS_1_5.row_norm_tol = coder.typeof(0);
ARGS_1_5.eps_abs_shifted_power = coder.typeof(0);
ARGS_1_5.eps_rel_shifted_power = coder.typeof(0);
ARGS_1_5.eps_buff_shifted_power = coder.typeof(0);
ARGS_1_5.max_iters_shifted_power = coder.typeof(0);
ARGS{1}{5} = coder.typeof(ARGS_1_5);

%% Invoke MATLAB Coder.
% Run this script from the `preconditioners` directory.
codegen -config cfg ruiz -args ARGS{1}