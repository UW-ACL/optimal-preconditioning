/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ruiz_data.c
 *
 * Code generation for function 'ruiz_data'
 *
 */

/* Include files */
#include "ruiz_data.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;

const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;

emlrtContext emlrtContextGlobal = {
    true,                                                 /* bFirstTime */
    false,                                                /* bInitialized */
    131642U,                                              /* fVersionInfo */
    NULL,                                                 /* fErrorFunction */
    "ruiz",                                               /* fFunctionName */
    NULL,                                                 /* fRTCallStack */
    false,                                                /* bDebugMode */
    {2045744189U, 2170104910U, 2743257031U, 4284093946U}, /* fSigWrd */
    NULL                                                  /* fSigMem */
};

emlrtRSInfo v_emlrtRSI = {
    7,         /* lineNo */
    "getTime", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/+time/getTime.m" /* pathName */
};

emlrtRSInfo w_emlrtRSI = {
    21,                     /* lineNo */
    "CoderTimeAPI/getTime", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/+time/CoderTimeAPI.m" /* pathName */
};

emlrtRSInfo x_emlrtRSI = {
    148,                                  /* lineNo */
    "CoderTimeAPI/callEMLRTClockGettime", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/+time/CoderTimeAPI.m" /* pathName */
};

emlrtRSInfo ab_emlrtRSI =
    {
        13,       /* lineNo */
        "sparse", /* fcnName */
        "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/sparfun/"
        "sparse.m" /* pathName */
};

emlrtRSInfo hb_emlrtRSI = {
    176,             /* lineNo */
    "sparse/sparse", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

emlrtRSInfo kb_emlrtRSI = {
    20,                               /* lineNo */
    "eml_int_forloop_overflow_check", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/eml/"
    "eml_int_forloop_overflow_check.m" /* pathName */
};

emlrtRSInfo nb_emlrtRSI = {
    71,                       /* lineNo */
    "sparse/sparse_catCheck", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/private/catCheck.m" /* pathName */
};

emlrtRSInfo rb_emlrtRSI = {
    1482,                 /* lineNo */
    "sparse/spallocLike", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

emlrtRSInfo xb_emlrtRSI = {
    250,                     /* lineNo */
    "sparse/parenReference", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

emlrtRSInfo fc_emlrtRSI = {
    462,                /* lineNo */
    "sparse/spfunImpl", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

emlrtRSInfo gc_emlrtRSI = {
    465,                /* lineNo */
    "sparse/spfunImpl", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

emlrtRSInfo hc_emlrtRSI = {
    468,                /* lineNo */
    "sparse/spfunImpl", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

emlrtRTEInfo emlrtRTEI = {
    460,                /* lineNo */
    34,                 /* colNo */
    "sparse/spfunImpl", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

emlrtRTEInfo d_emlrtRTEI = {
    159,                    /* lineNo */
    13,                     /* colNo */
    "coderTimeCheckStatus", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/+time/CoderTimeAPI.m" /* pName */
};

emlrtRTEInfo f_emlrtRTEI = {
    1629,              /* lineNo */
    9,                 /* colNo */
    "assertValidSize", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

emlrtRTEInfo g_emlrtRTEI = {
    1632,              /* lineNo */
    31,                /* colNo */
    "assertValidSize", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

emlrtRTEInfo h_emlrtRTEI = {
    95,                   /* lineNo */
    43,                   /* colNo */
    "sparse/addOrAssert", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/private/catCheck.m" /* pName */
};

emlrtRTEInfo x_emlrtRTEI = {
    459,      /* lineNo */
    12,       /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

emlrtRTEInfo db_emlrtRTEI = {
    1498,     /* lineNo */
    38,       /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

emlrtRTEInfo eb_emlrtRTEI = {
    1500,     /* lineNo */
    39,       /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

emlrtRTEInfo fb_emlrtRTEI = {
    1501,     /* lineNo */
    39,       /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

emlrtRTEInfo ib_emlrtRTEI = {
    193,      /* lineNo */
    42,       /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

const char_T cv[26] = {'e', 'm', 'l', 'r', 't', 'C', 'l', 'o', 'c',
                       'k', 'G', 'e', 't', 't', 'i', 'm', 'e', 'M',
                       'o', 'n', 'o', 't', 'o', 'n', 'i', 'c'};

/* End of code generation (ruiz_data.c) */
