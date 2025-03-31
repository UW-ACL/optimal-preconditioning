/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * proj_D.c
 *
 * Code generation for function 'proj_D'
 *
 */

/* Include files */
#include "proj_D.h"
#include "assertValidSizeArg.h"
#include "pipg_data.h"
#include "pipg_emxutil.h"
#include "pipg_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo gd_emlrtRSI = {
    16,       /* lineNo */
    "proj_D", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/proj_D.m" /* pathName
                                                                        */
};

static emlrtRSInfo hd_emlrtRSI = {
    17,       /* lineNo */
    "proj_D", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/proj_D.m" /* pathName
                                                                        */
};

static emlrtRSInfo id_emlrtRSI = {
    51,                  /* lineNo */
    "reshapeSizeChecks", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "reshapeSizeChecks.m" /* pathName */
};

static emlrtRSInfo jd_emlrtRSI = {
    119,               /* lineNo */
    "computeDimsData", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "reshapeSizeChecks.m" /* pathName */
};

static emlrtDCInfo h_emlrtDCI = {
    16,       /* lineNo */
    17,       /* colNo */
    "proj_D", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/proj_D.m", /* pName
                                                                         */
    1 /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    1,        /* iFirst */
    298,      /* iLast */
    16,       /* lineNo */
    17,       /* colNo */
    "z",      /* aName */
    "proj_D", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/proj_D.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = {
    17,       /* lineNo */
    15,       /* colNo */
    "proj_D", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/proj_D.m", /* pName
                                                                         */
    1 /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = {
    1,        /* iFirst */
    298,      /* iLast */
    17,       /* lineNo */
    15,       /* colNo */
    "z",      /* aName */
    "proj_D", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/proj_D.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtRTEInfo q_emlrtRTEI = {
    24,       /* lineNo */
    9,        /* colNo */
    "proj_D", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/proj_D.m" /* pName
                                                                        */
};

static emlrtBCInfo d_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    26,       /* lineNo */
    44,       /* colNo */
    "x",      /* aName */
    "proj_D", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/proj_D.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    27,       /* lineNo */
    38,       /* colNo */
    "x",      /* aName */
    "proj_D", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/proj_D.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtRTEInfo r_emlrtRTEI = {
    30,       /* lineNo */
    9,        /* colNo */
    "proj_D", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/proj_D.m" /* pName
                                                                        */
};

static emlrtBCInfo f_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    31,       /* lineNo */
    34,       /* colNo */
    "u",      /* aName */
    "proj_D", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/proj_D.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    22,       /* lineNo */
    11,       /* colNo */
    "x_proj", /* aName */
    "proj_D", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/proj_D.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtECInfo f_emlrtECI = {
    -1,       /* nDims */
    22,       /* lineNo */
    1,        /* colNo */
    "proj_D", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/proj_D.m" /* pName
                                                                        */
};

static emlrtBCInfo h_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    26,       /* lineNo */
    17,       /* colNo */
    "x_proj", /* aName */
    "proj_D", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/proj_D.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    27,       /* lineNo */
    17,       /* colNo */
    "x_proj", /* aName */
    "proj_D", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/proj_D.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    31,       /* lineNo */
    15,       /* colNo */
    "u_proj", /* aName */
    "proj_D", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/proj_D.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtECInfo g_emlrtECI = {
    -1,       /* nDims */
    31,       /* lineNo */
    5,        /* colNo */
    "proj_D", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/proj_D.m" /* pName
                                                                        */
};

static emlrtRTEInfo s_emlrtRTEI = {
    74,                  /* lineNo */
    13,                  /* colNo */
    "reshapeSizeChecks", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "reshapeSizeChecks.m" /* pName */
};

static emlrtRTEInfo t_emlrtRTEI = {
    79,                  /* lineNo */
    23,                  /* colNo */
    "reshapeSizeChecks", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "reshapeSizeChecks.m" /* pName */
};

static emlrtRTEInfo u_emlrtRTEI = {
    81,                  /* lineNo */
    23,                  /* colNo */
    "reshapeSizeChecks", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "reshapeSizeChecks.m" /* pName */
};

static emlrtBCInfo k_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    27,       /* lineNo */
    5,        /* colNo */
    "x_proj", /* aName */
    "proj_D", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/proj_D.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    27,       /* lineNo */
    33,       /* colNo */
    "x",      /* aName */
    "proj_D", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/proj_D.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    26,       /* lineNo */
    5,        /* colNo */
    "x_proj", /* aName */
    "proj_D", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/proj_D.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    26,       /* lineNo */
    39,       /* colNo */
    "x",      /* aName */
    "proj_D", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/proj_D.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtRTEInfo kc_emlrtRTEI = {
    19,       /* lineNo */
    1,        /* colNo */
    "proj_D", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/proj_D.m" /* pName
                                                                        */
};

static emlrtRTEInfo lc_emlrtRTEI = {
    20,       /* lineNo */
    1,        /* colNo */
    "proj_D", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/proj_D.m" /* pName
                                                                        */
};

static emlrtRTEInfo mc_emlrtRTEI = {
    34,       /* lineNo */
    1,        /* colNo */
    "proj_D", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/proj_D.m" /* pName
                                                                        */
};

/* Function Definitions */
void proj_D(const emlrtStack *sp, const real_T z[298], real_T p_N, real_T p_nx,
            real_T p_nu, const real_T p_x_init[4], real_T p_u_max,
            real_T p_theta, real_T p_rho, real_T p_v_max,
            emxArray_real_T *z_proj)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *u_proj;
  emxArray_real_T *x_proj;
  real_T b_tmp_data[298];
  real_T tmp_data[298];
  real_T b_p_u_max;
  real_T n_k_idx_1;
  real_T *u_proj_data;
  real_T *x_proj_data;
  real_T *z_proj_data;
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T d_loop_ub;
  int32_T i;
  int32_T loop_ub;
  int32_T maxdimlen;
  int32_T p_nx_idx_0;
  boolean_T out;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  /* Z_PROJ */
  /*    Z_PROJ = PROJ_D(Z, P) */
  /*  */
  /*  Project onto the convex set, `D`. */
  n_k_idx_1 = p_nx * p_N;
  if (n_k_idx_1 < 1.0) {
    loop_ub = 0;
  } else {
    if (n_k_idx_1 != (int32_T)muDoubleScalarFloor(n_k_idx_1)) {
      emlrtIntegerCheckR2012b(n_k_idx_1, &h_emlrtDCI, (emlrtConstCTX)sp);
    }
    if (((int32_T)n_k_idx_1 < 1) || ((int32_T)n_k_idx_1 > 298)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n_k_idx_1, 1, 298, &b_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    loop_ub = (int32_T)n_k_idx_1;
  }
  if (loop_ub - 1 >= 0) {
    memcpy(&tmp_data[0], &z[0], (uint32_T)loop_ub * sizeof(real_T));
  }
  st.site = &gd_emlrtRSI;
  b_st.site = &id_emlrtRSI;
  c_st.site = &jd_emlrtRSI;
  assertValidSizeArg(&c_st, p_nx);
  c_st.site = &jd_emlrtRSI;
  assertValidSizeArg(&c_st, p_N);
  maxdimlen = loop_ub;
  if (loop_ub < 1) {
    maxdimlen = 1;
  }
  maxdimlen = muIntScalarMax_sint32(loop_ub, maxdimlen);
  if ((int32_T)p_nx > maxdimlen) {
    emlrtErrorWithMessageIdR2018a(&st, &s_emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  if ((int32_T)p_N > maxdimlen) {
    emlrtErrorWithMessageIdR2018a(&st, &s_emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  out = ((int32_T)p_nx >= 0);
  if ((!out) || ((int32_T)p_N < 0)) {
    out = false;
  }
  if (!out) {
    emlrtErrorWithMessageIdR2018a(&st, &t_emlrtRTEI,
                                  "MATLAB:checkDimCommon:nonnegativeSize",
                                  "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }
  b_loop_ub = (int32_T)p_nx * (int32_T)p_N;
  if (b_loop_ub != loop_ub) {
    emlrtErrorWithMessageIdR2018a(
        &st, &u_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }
  if (n_k_idx_1 + 1.0 > 298.0) {
    i = 0;
    maxdimlen = 0;
  } else {
    if (n_k_idx_1 + 1.0 != (int32_T)muDoubleScalarFloor(n_k_idx_1 + 1.0)) {
      emlrtIntegerCheckR2012b(n_k_idx_1 + 1.0, &i_emlrtDCI, (emlrtConstCTX)sp);
    }
    if (((int32_T)(n_k_idx_1 + 1.0) < 1) ||
        ((int32_T)(n_k_idx_1 + 1.0) > 298)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n_k_idx_1 + 1.0), 1, 298,
                                    &c_emlrtBCI, (emlrtConstCTX)sp);
    }
    i = (int32_T)(n_k_idx_1 + 1.0) - 1;
    maxdimlen = 298;
  }
  loop_ub = maxdimlen - i;
  for (maxdimlen = 0; maxdimlen < loop_ub; maxdimlen++) {
    b_tmp_data[maxdimlen] = z[i + maxdimlen];
  }
  st.site = &hd_emlrtRSI;
  b_st.site = &id_emlrtRSI;
  c_st.site = &jd_emlrtRSI;
  assertValidSizeArg(&c_st, p_nu);
  c_st.site = &jd_emlrtRSI;
  assertValidSizeArg(&c_st, p_N - 1.0);
  maxdimlen = loop_ub;
  if (loop_ub < 1) {
    maxdimlen = 1;
  }
  maxdimlen = muIntScalarMax_sint32(loop_ub, maxdimlen);
  if ((int32_T)p_nu > maxdimlen) {
    emlrtErrorWithMessageIdR2018a(&st, &s_emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  if ((int32_T)(p_N - 1.0) > maxdimlen) {
    emlrtErrorWithMessageIdR2018a(&st, &s_emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  out = ((int32_T)p_nu >= 0);
  if ((!out) || ((int32_T)(p_N - 1.0) < 0)) {
    out = false;
  }
  if (!out) {
    emlrtErrorWithMessageIdR2018a(&st, &t_emlrtRTEI,
                                  "MATLAB:checkDimCommon:nonnegativeSize",
                                  "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }
  c_loop_ub = (int32_T)p_nu * (int32_T)(p_N - 1.0);
  if (c_loop_ub != loop_ub) {
    emlrtErrorWithMessageIdR2018a(
        &st, &u_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }
  emxInit_real_T(sp, &x_proj, 2, &kc_emlrtRTEI);
  maxdimlen = x_proj->size[0] * x_proj->size[1];
  x_proj->size[0] = (int32_T)p_nx;
  x_proj->size[1] = (int32_T)p_N;
  emxEnsureCapacity_real_T(sp, x_proj, maxdimlen, &kc_emlrtRTEI);
  x_proj_data = x_proj->data;
  for (maxdimlen = 0; maxdimlen < b_loop_ub; maxdimlen++) {
    x_proj_data[maxdimlen] = z[maxdimlen];
  }
  emxInit_real_T(sp, &u_proj, 2, &lc_emlrtRTEI);
  maxdimlen = u_proj->size[0] * u_proj->size[1];
  u_proj->size[0] = (int32_T)p_nu;
  loop_ub = (int32_T)(p_N - 1.0);
  u_proj->size[1] = (int32_T)(p_N - 1.0);
  emxEnsureCapacity_real_T(sp, u_proj, maxdimlen, &lc_emlrtRTEI);
  u_proj_data = u_proj->data;
  for (maxdimlen = 0; maxdimlen < c_loop_ub; maxdimlen++) {
    u_proj_data[maxdimlen] = z[i + maxdimlen];
  }
  if ((int32_T)p_N < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, (int32_T)p_N, &g_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  maxdimlen = (int16_T)(int32_T)p_nx;
  i = 4;
  emlrtSubAssignSizeCheckR2012b(&maxdimlen, 1, &i, 1, &f_emlrtECI,
                                (emlrtCTX)sp);
  for (i = 0; i < maxdimlen; i++) {
    x_proj_data[i] = p_x_init[i];
  }
  emlrtForLoopVectorCheckR2021a(2.0, 1.0, p_N, mxDOUBLE_CLASS,
                                (int32_T)(p_N - 1.0), &q_emlrtRTEI,
                                (emlrtConstCTX)sp);
  for (b_loop_ub = 0; b_loop_ub < loop_ub; b_loop_ub++) {
    real_T n_k;
    real_T n_k_idx_0;
    real_T z_idx_0;
    real_T z_idx_1;
    n_k_idx_1 = p_theta * ((real_T)b_loop_ub + 2.0);
    n_k_idx_0 = muDoubleScalarCos(n_k_idx_1);
    n_k_idx_1 = -muDoubleScalarSin(n_k_idx_1);
    if (((int32_T)((uint32_T)b_loop_ub + 2U) < 1) ||
        ((int32_T)((uint32_T)b_loop_ub + 2U) > (int32_T)p_N)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)b_loop_ub + 2U), 1,
                                    (int32_T)p_N, &d_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if ((int32_T)p_nx < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, (int32_T)p_nx, &n_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    maxdimlen = (int32_T)p_nx * (b_loop_ub + 1);
    z_idx_0 = tmp_data[maxdimlen];
    if ((int32_T)p_nx < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, (int32_T)p_nx, &n_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    z_idx_1 = tmp_data[maxdimlen + 1];
    /* PROJ_HALFSPACE */
    /*    Z_PROJ = PROJ_HALFSPACE(Z, A, B) */
    /*  */
    /*  Project onto the halfspace given by `a^T z <= b`. `a` is assumed to be a
     */
    /*  unit vector. */
    n_k = n_k_idx_0 * z_idx_0 + n_k_idx_1 * z_idx_1;
    if (n_k > -p_rho) {
      real_T a;
      a = n_k - (-p_rho);
      n_k = n_k_idx_0 * n_k_idx_0 + n_k_idx_1 * n_k_idx_1;
      z_idx_0 -= a * n_k_idx_0 / n_k;
      z_idx_1 -= a * n_k_idx_1 / n_k;
    }
    if (((int32_T)((uint32_T)b_loop_ub + 2U) < 1) ||
        ((int32_T)((uint32_T)b_loop_ub + 2U) > x_proj->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)b_loop_ub + 2U), 1,
                                    x_proj->size[1], &h_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (x_proj->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, x_proj->size[0], &m_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    x_proj_data[x_proj->size[0] * (b_loop_ub + 1)] = z_idx_0;
    if (x_proj->size[0] < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, x_proj->size[0], &m_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    x_proj_data[x_proj->size[0] * (b_loop_ub + 1) + 1] = z_idx_1;
    if ((int32_T)p_nx < 3) {
      emlrtDynamicBoundsCheckR2012b(3, 1, (int32_T)p_nx, &l_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if ((int32_T)p_nx < 4) {
      emlrtDynamicBoundsCheckR2012b(4, 1, (int32_T)p_nx, &l_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if ((b_loop_ub + 2 < 1) || (b_loop_ub + 2 > (int32_T)p_N)) {
      emlrtDynamicBoundsCheckR2012b(b_loop_ub + 2, 1, (int32_T)p_N, &e_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    /* PROJ_BOX */
    /*    P = PROJ_BOX(Z, L, U) */
    /*  */
    /*  Project onto the box defined by `[l, u]`. */
    p_nx_idx_0 = (int32_T)p_nx;
    if (((int32_T)((uint32_T)b_loop_ub + 2U) < 1) ||
        ((int32_T)((uint32_T)b_loop_ub + 2U) > x_proj->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)b_loop_ub + 2U), 1,
                                    x_proj->size[1], &i_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (x_proj->size[0] < 3) {
      emlrtDynamicBoundsCheckR2012b(3, 1, x_proj->size[0], &k_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i = (int32_T)p_nx * (b_loop_ub + 1);
    x_proj_data[x_proj->size[0] * (b_loop_ub + 1) + 2] = muDoubleScalarMin(
        muDoubleScalarMax(tmp_data[i + 2], -p_v_max), p_v_max);
    if (x_proj->size[0] < 4) {
      emlrtDynamicBoundsCheckR2012b(4, 1, x_proj->size[0], &k_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    x_proj_data[x_proj->size[0] * (b_loop_ub + 1) + 3] = muDoubleScalarMin(
        muDoubleScalarMax(tmp_data[i + 3], -p_v_max), p_v_max);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, p_N - 1.0, mxDOUBLE_CLASS,
                                (int32_T)(p_N - 1.0), &r_emlrtRTEI,
                                (emlrtConstCTX)sp);
  if ((int32_T)(p_N - 1.0) - 1 >= 0) {
    p_nx_idx_0 = (int32_T)p_nu;
    b_p_u_max = -p_u_max;
    d_loop_ub = (int32_T)p_nu;
  }
  for (b_loop_ub = 0; b_loop_ub < loop_ub; b_loop_ub++) {
    if ((b_loop_ub + 1 < 1) || (b_loop_ub + 1 > u_proj->size[1])) {
      emlrtDynamicBoundsCheckR2012b(b_loop_ub + 1, 1, u_proj->size[1],
                                    &j_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((b_loop_ub + 1 < 1) || (b_loop_ub + 1 > (int32_T)(p_N - 1.0))) {
      emlrtDynamicBoundsCheckR2012b(b_loop_ub + 1, 1, (int32_T)(p_N - 1.0),
                                    &f_emlrtBCI, (emlrtConstCTX)sp);
    }
    /* PROJ_BOX */
    /*    P = PROJ_BOX(Z, L, U) */
    /*  */
    /*  Project onto the box defined by `[l, u]`. */
    maxdimlen = (int32_T)p_nu;
    for (i = 0; i < d_loop_ub; i++) {
      tmp_data[i] = muDoubleScalarMin(
          muDoubleScalarMax(b_tmp_data[i + p_nx_idx_0 * b_loop_ub], b_p_u_max),
          p_u_max);
    }
    emlrtSubAssignSizeCheckR2012b(&u_proj->size[0], 1, &maxdimlen, 1,
                                  &g_emlrtECI, (emlrtCTX)sp);
    for (i = 0; i < maxdimlen; i++) {
      u_proj_data[i + u_proj->size[0] * b_loop_ub] = tmp_data[i];
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  loop_ub = x_proj->size[0] * x_proj->size[1];
  i = z_proj->size[0];
  z_proj->size[0] = loop_ub + c_loop_ub;
  emxEnsureCapacity_real_T(sp, z_proj, i, &mc_emlrtRTEI);
  z_proj_data = z_proj->data;
  for (i = 0; i < loop_ub; i++) {
    z_proj_data[i] = x_proj_data[i];
  }
  emxFree_real_T(sp, &x_proj);
  for (i = 0; i < c_loop_ub; i++) {
    z_proj_data[i + loop_ub] = u_proj_data[i];
  }
  emxFree_real_T(sp, &u_proj);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (proj_D.c) */
