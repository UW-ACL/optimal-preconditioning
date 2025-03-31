% POWER_ITERATION_SCRIPT   Generate MEX-function power_iteration_mex from
%  power_iteration.
% 
% Script generated from project 'power_iteration.prj' on 30-Mar-2025.
% 
% See also CODER, CODER.CONFIG, CODER.TYPEOF, CODEGEN.

%% Create configuration object of class 'coder.MexCodeConfig'.
cfg = coder.config('mex');
cfg.GenerateReport = true;
cfg.HighlightPotentialRowMajorIssues = false;
cfg.IntegrityChecks = false;
cfg.LaunchReport = true;
cfg.ReportPotentialDifferences = false;
cfg.SaturateOnIntegerOverflow = false;
cfg.ResponsivenessChecks = false;

%% Define argument types for entry-point 'power_iteration'.
ARGS = cell(1,1);
ARGS{1} = cell(2,1);
ARGS{1}{1} = coder.typeof(sparse(0),[196 298]);
ARGS_1_2 = struct;
ARGS_1_2.eps_abs_cots = coder.typeof(0);
ARGS_1_2.eps_rel_cots = coder.typeof(0);
ARGS_1_2.eps_abs_pipg = coder.typeof(0);
ARGS_1_2.eps_rel_pipg = coder.typeof(0);
ARGS_1_2.percent_rel_err = coder.typeof(0);
ARGS_1_2.omg = coder.typeof(0);
ARGS_1_2.rho_extrap = coder.typeof(0);
ARGS_1_2.max_iters = coder.typeof(0);
ARGS_1_2.termination = coder.typeof('X',[1 12]);
ARGS_1_2.check_every = coder.typeof(0);
ARGS_1_2.eps_abs_power = coder.typeof(0);
ARGS_1_2.eps_rel_power = coder.typeof(0);
ARGS_1_2.eps_buff_power = coder.typeof(0);
ARGS_1_2.max_iters_power = coder.typeof(0);
ARGS{1}{2} = coder.typeof(ARGS_1_2);

%% Invoke MATLAB Coder.
% Run this script from the `solvers/base` directory.
codegen -config cfg power_iteration -args ARGS{1}