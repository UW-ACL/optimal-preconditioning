/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * qr_preconditioner_data.c
 *
 * Code generation for function 'qr_preconditioner_data'
 *
 */

/* Include files */
#include "qr_preconditioner_data.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;

emlrtContext emlrtContextGlobal = {
    true,                                                 /* bFirstTime */
    false,                                                /* bInitialized */
    131642U,                                              /* fVersionInfo */
    NULL,                                                 /* fErrorFunction */
    "qr_preconditioner",                                  /* fFunctionName */
    NULL,                                                 /* fRTCallStack */
    false,                                                /* bDebugMode */
    {2045744189U, 2170104910U, 2743257031U, 4284093946U}, /* fSigWrd */
    NULL                                                  /* fSigMem */
};

emlrtRSInfo k_emlrtRSI = {
    7,         /* lineNo */
    "getTime", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/+time/getTime.m" /* pathName */
};

emlrtRSInfo l_emlrtRSI = {
    21,                     /* lineNo */
    "CoderTimeAPI/getTime", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/+time/CoderTimeAPI.m" /* pathName */
};

emlrtRSInfo m_emlrtRSI = {
    148,                                  /* lineNo */
    "CoderTimeAPI/callEMLRTClockGettime", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/+time/CoderTimeAPI.m" /* pathName */
};

emlrtRSInfo bb_emlrtRSI =
    {
        13,       /* lineNo */
        "sparse", /* fcnName */
        "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/sparfun/"
        "sparse.m" /* pathName */
};

emlrtRSInfo sc_emlrtRSI = {
    459,                  /* lineNo */
    "CXSparseAPI/makeCX", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "CXSparseAPI.m" /* pathName */
};

emlrtRSInfo fd_emlrtRSI = {
    250,                     /* lineNo */
    "sparse/parenReference", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

emlrtRSInfo gd_emlrtRSI = {
    20,                        /* lineNo */
    "sparse/parenReference2D", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/parenReference2D.m" /* pathName */
};

emlrtRSInfo hd_emlrtRSI = {
    93,                        /* lineNo */
    "parenReference2DColumns", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/parenReference2D.m" /* pathName */
};

emlrtRSInfo jd_emlrtRSI = {
    264,                  /* lineNo */
    "sparse/parenAssign", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

emlrtRSInfo kd_emlrtRSI = {
    56,                     /* lineNo */
    "sparse/parenAssign2D", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/parenAssign2D.m" /* pathName */
};

emlrtRTEInfo b_emlrtRTEI = {
    159,                    /* lineNo */
    13,                     /* colNo */
    "coderTimeCheckStatus", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/+time/CoderTimeAPI.m" /* pName */
};

emlrtRTEInfo e_emlrtRTEI = {
    44,          /* lineNo */
    13,          /* colNo */
    "infocheck", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "infocheck.m" /* pName */
};

emlrtRTEInfo f_emlrtRTEI = {
    47,          /* lineNo */
    13,          /* colNo */
    "infocheck", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "infocheck.m" /* pName */
};

emlrtRTEInfo o_emlrtRTEI =
    {
        13,       /* lineNo */
        1,        /* colNo */
        "sparse", /* fName */
        "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/sparfun/"
        "sparse.m" /* pName */
};

emlrtRTEInfo bb_emlrtRTEI = {
    325,             /* lineNo */
    1,               /* colNo */
    "parenAssign2D", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/parenAssign2D.m" /* pName */
};

emlrtRTEInfo cb_emlrtRTEI = {
    326,             /* lineNo */
    1,               /* colNo */
    "parenAssign2D", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/parenAssign2D.m" /* pName */
};

const char_T cv[26] = {'e', 'm', 'l', 'r', 't', 'C', 'l', 'o', 'c',
                       'k', 'G', 'e', 't', 't', 'i', 'm', 'e', 'M',
                       'o', 'n', 'o', 't', 'o', 'n', 'i', 'c'};

/* End of code generation (qr_preconditioner_data.c) */
