% QR_PRECONDITIONER_SCRIPT   Generate MEX-function qr_preconditioner_mex from
%  qr_preconditioner.
% 
% Script generated from project 'qr_preconditioner.prj' on 31-Mar-2025.
% 
% See also CODER, CODER.CONFIG, CODER.TYPEOF, CODEGEN.

%% Create configuration object of class 'coder.MexCodeConfig'.
cfg = coder.config('mex');
cfg.GenerateReport = true;
cfg.ReportPotentialDifferences = false;

%% Define argument types for entry-point 'qr_preconditioner'.
ARGS = cell(1,1);
ARGS{1} = cell(4,1);
ARGS{1}{1} = coder.typeof(sparse(0),[298 298]);
ARGS{1}{2} = coder.typeof(0,[298  1]);
ARGS{1}{3} = coder.typeof(sparse(0),[196 298]);
ARGS{1}{4} = coder.typeof(0,[196  1]);

%% Invoke MATLAB Coder.
% Run this script from the `preconditioners` directory.
codegen -config cfg qr_preconditioner -args ARGS{1}