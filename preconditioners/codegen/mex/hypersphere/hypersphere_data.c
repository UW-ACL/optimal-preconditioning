/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * hypersphere_data.c
 *
 * Code generation for function 'hypersphere_data'
 *
 */

/* Include files */
#include "hypersphere_data.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;

const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;

emlrtContext emlrtContextGlobal = {
    true,                                                 /* bFirstTime */
    false,                                                /* bInitialized */
    131642U,                                              /* fVersionInfo */
    NULL,                                                 /* fErrorFunction */
    "hypersphere",                                        /* fFunctionName */
    NULL,                                                 /* fRTCallStack */
    false,                                                /* bDebugMode */
    {2045744189U, 2170104910U, 2743257031U, 4284093946U}, /* fSigWrd */
    NULL                                                  /* fSigMem */
};

emlrtRSInfo r_emlrtRSI = {
    7,         /* lineNo */
    "getTime", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/+time/getTime.m" /* pathName */
};

emlrtRSInfo s_emlrtRSI = {
    21,                     /* lineNo */
    "CoderTimeAPI/getTime", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/+time/CoderTimeAPI.m" /* pathName */
};

emlrtRSInfo t_emlrtRSI = {
    148,                                  /* lineNo */
    "CoderTimeAPI/callEMLRTClockGettime", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/+time/CoderTimeAPI.m" /* pathName */
};

emlrtRSInfo x_emlrtRSI = {
    1482,                 /* lineNo */
    "sparse/spallocLike", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

emlrtRSInfo y_emlrtRSI = {
    219,             /* lineNo */
    "sparse/sparse", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

emlrtRSInfo ab_emlrtRSI = {
    176,             /* lineNo */
    "sparse/sparse", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

emlrtRSInfo db_emlrtRSI = {
    20,                               /* lineNo */
    "eml_int_forloop_overflow_check", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/eml/"
    "eml_int_forloop_overflow_check.m" /* pathName */
};

emlrtRSInfo jb_emlrtRSI = {
    275,           /* lineNo */
    "sparse/full", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

emlrtRSInfo ob_emlrtRSI =
    {
        13,       /* lineNo */
        "sparse", /* fcnName */
        "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/sparfun/"
        "sparse.m" /* pathName */
};

emlrtRSInfo pb_emlrtRSI = {
    138,             /* lineNo */
    "sparse/sparse", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

emlrtRSInfo qb_emlrtRSI = {
    1672,          /* lineNo */
    "locSortrows", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

emlrtRTEInfo c_emlrtRTEI = {
    13,     /* lineNo */
    9,      /* colNo */
    "sqrt", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/elfun/sqrt.m" /* pName
                                                                           */
};

emlrtRTEInfo d_emlrtRTEI = {
    159,                    /* lineNo */
    13,                     /* colNo */
    "coderTimeCheckStatus", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/+time/CoderTimeAPI.m" /* pName */
};

emlrtRTEInfo e_emlrtRTEI = {
    1629,              /* lineNo */
    9,                 /* colNo */
    "assertValidSize", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

emlrtRTEInfo f_emlrtRTEI = {
    178,             /* lineNo */
    39,              /* colNo */
    "sparse/sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

emlrtRTEInfo p_emlrtRTEI = {
    193,      /* lineNo */
    42,       /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

emlrtRTEInfo q_emlrtRTEI = {
    1498,     /* lineNo */
    38,       /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

emlrtRTEInfo r_emlrtRTEI = {
    1500,     /* lineNo */
    39,       /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

const char_T cv[26] = {'e', 'm', 'l', 'r', 't', 'C', 'l', 'o', 'c',
                       'k', 'G', 'e', 't', 't', 'i', 'm', 'e', 'M',
                       'o', 'n', 'o', 't', 'o', 'n', 'i', 'c'};

/* End of code generation (hypersphere_data.c) */
