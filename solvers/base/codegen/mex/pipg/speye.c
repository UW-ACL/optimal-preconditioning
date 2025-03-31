/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * speye.c
 *
 * Code generation for function 'speye'
 *
 */

/* Include files */
#include "speye.h"
#include "eml_int_forloop_overflow_check.h"
#include "pipg_data.h"
#include "pipg_emxutil.h"
#include "pipg_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo
    ic_emlrtRSI =
        {
            17,      /* lineNo */
            "speye", /* fcnName */
            "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/sparfun/"
            "speye.m" /* pathName */
};

static emlrtRSInfo
    jc_emlrtRSI =
        {
            33,      /* lineNo */
            "speye", /* fcnName */
            "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/sparfun/"
            "speye.m" /* pathName */
};

static emlrtRSInfo kc_emlrtRSI = {
    21,                           /* lineNo */
    "checkAndSaturateExpandSize", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "checkAndSaturateExpandSize.m" /* pathName */
};

static emlrtRSInfo lc_emlrtRSI = {
    8,                /* lineNo */
    "sparse/eyeLike", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/eyeLike.m" /* pathName */
};

static emlrtRSInfo mc_emlrtRSI = {
    14,               /* lineNo */
    "sparse/eyeLike", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/eyeLike.m" /* pathName */
};

static emlrtRSInfo nc_emlrtRSI = {
    20,               /* lineNo */
    "sparse/eyeLike", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/eyeLike.m" /* pathName */
};

static emlrtRSInfo oc_emlrtRSI = {
    23,               /* lineNo */
    "sparse/eyeLike", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/eyeLike.m" /* pathName */
};

static emlrtDCInfo g_emlrtDCI = {
    1501,                  /* lineNo */
    44,                    /* colNo */
    "sparse/nullcopyLike", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m", /* pName */
    4                             /* checkKind */
};

static emlrtRTEInfo gc_emlrtRTEI = {
    1498,     /* lineNo */
    38,       /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo hc_emlrtRTEI = {
    1500,     /* lineNo */
    39,       /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo ic_emlrtRTEI = {
    1501,     /* lineNo */
    39,       /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

/* Function Definitions */
int32_T speye(const emlrtStack *sp, real_T m, emxArray_real_T *y_d,
              emxArray_int32_T *y_colidx, emxArray_int32_T *y_rowidx,
              int32_T *y_n)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T d;
  real_T *y_d_data;
  int32_T c;
  int32_T ndiag_tmp_tmp_tmp;
  int32_T nzmax;
  int32_T y_m;
  int32_T *y_colidx_data;
  int32_T *y_rowidx_data;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ic_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &kc_emlrtRSI;
  if ((m != muDoubleScalarFloor(m)) || muDoubleScalarIsInf(m) ||
      (m < -2.147483648E+9) || (m > 2.147483647E+9)) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &n_emlrtRTEI, "Coder:MATLAB:NonIntegerInput",
        "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }
  if (m <= 0.0) {
    d = 0.0;
  } else {
    d = m;
  }
  if (!(d <= 2.147483647E+9)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &o_emlrtRTEI, "Coder:MATLAB:pmaxsize",
                                  "Coder:MATLAB:pmaxsize", 0);
  }
  ndiag_tmp_tmp_tmp = (int32_T)m;
  st.site = &jc_emlrtRSI;
  b_st.site = &lc_emlrtRSI;
  nzmax = (int32_T)m;
  if ((int32_T)m < 1) {
    nzmax = 1;
  }
  c = y_d->size[0];
  y_d->size[0] = nzmax;
  emxEnsureCapacity_real_T(&b_st, y_d, c, &gc_emlrtRTEI);
  y_d_data = y_d->data;
  c = y_rowidx->size[0];
  y_rowidx->size[0] = nzmax;
  emxEnsureCapacity_int32_T(&b_st, y_rowidx, c, &hc_emlrtRTEI);
  y_rowidx_data = y_rowidx->data;
  if ((int32_T)m + 1 < 0) {
    emlrtNonNegativeCheckR2012b((int32_T)m + 1, &g_emlrtDCI, &b_st);
  }
  c = y_colidx->size[0];
  y_colidx->size[0] = (int32_T)m + 1;
  emxEnsureCapacity_int32_T(&b_st, y_colidx, c, &ic_emlrtRTEI);
  y_colidx_data = y_colidx->data;
  b_st.site = &mc_emlrtRSI;
  if ((int32_T)m > 2147483646) {
    c_st.site = &cb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  for (nzmax = 0; nzmax < ndiag_tmp_tmp_tmp; nzmax++) {
    y_d_data[nzmax] = 1.0;
    y_rowidx_data[nzmax] = nzmax + 1;
  }
  y_colidx_data[0] = 1;
  b_st.site = &nc_emlrtRSI;
  if ((int32_T)m > 2147483646) {
    c_st.site = &cb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  for (c = 2; c <= ndiag_tmp_tmp_tmp; c++) {
    y_colidx_data[c - 1] = c;
  }
  nzmax = (int32_T)m + 1;
  b_st.site = &oc_emlrtRSI;
  if ((int32_T)m + 1 > 2147483646) {
    c_st.site = &cb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  for (c = nzmax; c <= nzmax; c++) {
    y_colidx_data[c - 1] = (int32_T)m + 1;
  }
  y_m = (int32_T)m;
  *y_n = (int32_T)m;
  return y_m;
}

/* End of code generation (speye.c) */
