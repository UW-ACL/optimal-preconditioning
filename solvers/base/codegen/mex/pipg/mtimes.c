/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mtimes.c
 *
 * Code generation for function 'mtimes'
 *
 */

/* Include files */
#include "mtimes.h"
#include "eml_int_forloop_overflow_check.h"
#include "pipg_data.h"
#include "pipg_emxutil.h"
#include "pipg_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo pc_emlrtRSI = {
    35,              /* lineNo */
    "sparse/mtimes", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/mtimes.m" /* pathName */
};

static emlrtRSInfo qc_emlrtRSI = {
    216,        /* lineNo */
    "sfmtimes", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/mtimes.m" /* pathName */
};

static emlrtRSInfo rc_emlrtRSI = {
    232,               /* lineNo */
    "sfmtimes_vector", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/mtimes.m" /* pathName */
};

static emlrtRSInfo sc_emlrtRSI = {
    241,               /* lineNo */
    "sfmtimes_vector", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/mtimes.m" /* pathName */
};

static emlrtRSInfo tc_emlrtRSI = {
    252,               /* lineNo */
    "sfmtimes_vector", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/mtimes.m" /* pathName */
};

static emlrtRSInfo uc_emlrtRSI = {
    258,               /* lineNo */
    "sfmtimes_vector", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/mtimes.m" /* pathName */
};

static emlrtRTEInfo p_emlrtRTEI = {
    29,              /* lineNo */
    23,              /* colNo */
    "sparse/mtimes", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/mtimes.m" /* pName */
};

static emlrtRTEInfo jc_emlrtRTEI = {
    35,       /* lineNo */
    9,        /* colNo */
    "mtimes", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/mtimes.m" /* pName */
};

/* Function Definitions */
void b_sparse_mtimes(const emlrtStack *sp, const emxArray_real_T *a_d,
                     const emxArray_int32_T *a_colidx,
                     const emxArray_int32_T *a_rowidx, const emxArray_real_T *b,
                     real_T c[298])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const real_T *a_d_data;
  const real_T *b_data;
  const int32_T *a_colidx_data;
  const int32_T *a_rowidx_data;
  int32_T acol;
  int32_T ap;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_data = b->data;
  a_rowidx_data = a_rowidx->data;
  a_colidx_data = a_colidx->data;
  a_d_data = a_d->data;
  if (b->size[0] != 298) {
    emlrtErrorWithMessageIdR2018a(sp, &p_emlrtRTEI, "MATLAB:innerdim",
                                  "MATLAB:innerdim", 0);
  }
  st.site = &pc_emlrtRSI;
  memset(&c[0], 0, 298U * sizeof(real_T));
  if (a_colidx_data[a_colidx->size[0] - 1] - 1 != 0) {
    b_st.site = &qc_emlrtRSI;
    for (acol = 0; acol < 298; acol++) {
      real_T bc;
      int32_T a;
      int32_T nap;
      int32_T nap_tmp;
      bc = b_data[acol];
      a = a_colidx_data[acol];
      nap_tmp = a_colidx_data[acol + 1];
      nap = nap_tmp - a_colidx_data[acol];
      if (nap >= 4) {
        int32_T apendm1_tmp;
        int32_T c_tmp;
        nap = ((nap_tmp - nap) + ((nap / 4) << 2)) - 1;
        c_st.site = &sc_emlrtRSI;
        if ((a_colidx_data[acol] <= nap) && (nap > 2147483643)) {
          d_st.site = &cb_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
        for (ap = a; ap <= nap; ap += 4) {
          c_tmp = a_rowidx_data[ap - 1] - 1;
          c[c_tmp] += a_d_data[ap - 1] * bc;
          c[a_rowidx_data[ap] - 1] += a_d_data[ap] * bc;
          c_tmp = a_rowidx_data[ap + 1] - 1;
          c[c_tmp] += a_d_data[ap + 1] * bc;
          c_tmp = a_rowidx_data[ap + 2] - 1;
          c[c_tmp] += a_d_data[ap + 2] * bc;
        }
        apendm1_tmp = nap_tmp - 1;
        a = nap + 1;
        c_st.site = &tc_emlrtRSI;
        if ((nap + 1 <= nap_tmp - 1) && (nap_tmp - 1 > 2147483646)) {
          d_st.site = &cb_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
        for (ap = a; ap <= apendm1_tmp; ap++) {
          c_tmp = a_rowidx_data[ap - 1] - 1;
          c[c_tmp] += a_d_data[ap - 1] * bc;
        }
      } else {
        nap = nap_tmp - 1;
        c_st.site = &uc_emlrtRSI;
        if ((a_colidx_data[acol] <= nap_tmp - 1) &&
            (nap_tmp - 1 > 2147483646)) {
          d_st.site = &cb_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
        for (ap = a; ap <= nap; ap++) {
          int32_T c_tmp;
          c_tmp = a_rowidx_data[ap - 1] - 1;
          c[c_tmp] += a_d_data[ap - 1] * bc;
        }
      }
    }
  }
}

void c_sparse_mtimes(const emlrtStack *sp, const emxArray_real_T *a_d,
                     const emxArray_int32_T *a_colidx,
                     const emxArray_int32_T *a_rowidx, const real_T b[298],
                     real_T c[298])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const real_T *a_d_data;
  const int32_T *a_colidx_data;
  const int32_T *a_rowidx_data;
  int32_T acol;
  int32_T ap;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  a_rowidx_data = a_rowidx->data;
  a_colidx_data = a_colidx->data;
  a_d_data = a_d->data;
  st.site = &pc_emlrtRSI;
  memset(&c[0], 0, 298U * sizeof(real_T));
  if (a_colidx_data[a_colidx->size[0] - 1] - 1 != 0) {
    b_st.site = &qc_emlrtRSI;
    for (acol = 0; acol < 298; acol++) {
      real_T bc;
      int32_T a;
      int32_T nap;
      int32_T nap_tmp;
      bc = b[acol];
      a = a_colidx_data[acol];
      nap_tmp = a_colidx_data[acol + 1];
      nap = nap_tmp - a_colidx_data[acol];
      if (nap >= 4) {
        int32_T apendm1_tmp;
        int32_T c_tmp;
        nap = ((nap_tmp - nap) + ((nap / 4) << 2)) - 1;
        c_st.site = &sc_emlrtRSI;
        if ((a_colidx_data[acol] <= nap) && (nap > 2147483643)) {
          d_st.site = &cb_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
        for (ap = a; ap <= nap; ap += 4) {
          c_tmp = a_rowidx_data[ap - 1] - 1;
          c[c_tmp] += a_d_data[ap - 1] * bc;
          c[a_rowidx_data[ap] - 1] += a_d_data[ap] * bc;
          c_tmp = a_rowidx_data[ap + 1] - 1;
          c[c_tmp] += a_d_data[ap + 1] * bc;
          c_tmp = a_rowidx_data[ap + 2] - 1;
          c[c_tmp] += a_d_data[ap + 2] * bc;
        }
        apendm1_tmp = nap_tmp - 1;
        a = nap + 1;
        c_st.site = &tc_emlrtRSI;
        if ((nap + 1 <= nap_tmp - 1) && (nap_tmp - 1 > 2147483646)) {
          d_st.site = &cb_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
        for (ap = a; ap <= apendm1_tmp; ap++) {
          c_tmp = a_rowidx_data[ap - 1] - 1;
          c[c_tmp] += a_d_data[ap - 1] * bc;
        }
      } else {
        nap = nap_tmp - 1;
        c_st.site = &uc_emlrtRSI;
        if ((a_colidx_data[acol] <= nap_tmp - 1) &&
            (nap_tmp - 1 > 2147483646)) {
          d_st.site = &cb_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
        for (ap = a; ap <= nap; ap++) {
          int32_T c_tmp;
          c_tmp = a_rowidx_data[ap - 1] - 1;
          c[c_tmp] += a_d_data[ap - 1] * bc;
        }
      }
    }
  }
}

void sparse_mtimes(const emlrtStack *sp, const emxArray_real_T *a_d,
                   const emxArray_int32_T *a_colidx,
                   const emxArray_int32_T *a_rowidx, int32_T a_m, int32_T a_n,
                   const emxArray_real_T *b, emxArray_real_T *c)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const real_T *a_d_data;
  const real_T *b_data;
  real_T *c_data;
  const int32_T *a_colidx_data;
  const int32_T *a_rowidx_data;
  int32_T acol;
  int32_T ap;
  int32_T nap;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_data = b->data;
  a_rowidx_data = a_rowidx->data;
  a_colidx_data = a_colidx->data;
  a_d_data = a_d->data;
  if (a_n != b->size[0]) {
    emlrtErrorWithMessageIdR2018a(sp, &p_emlrtRTEI, "MATLAB:innerdim",
                                  "MATLAB:innerdim", 0);
  }
  st.site = &pc_emlrtRSI;
  nap = c->size[0];
  c->size[0] = a_m;
  emxEnsureCapacity_real_T(&st, c, nap, &jc_emlrtRTEI);
  c_data = c->data;
  for (nap = 0; nap < a_m; nap++) {
    c_data[nap] = 0.0;
  }
  if ((a_n != 0) && (a_m != 0) &&
      (a_colidx_data[a_colidx->size[0] - 1] - 1 != 0)) {
    b_st.site = &qc_emlrtRSI;
    c_st.site = &rc_emlrtRSI;
    if (a_n > 2147483646) {
      d_st.site = &cb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
    for (acol = 0; acol < a_n; acol++) {
      real_T bc;
      int32_T a;
      int32_T nap_tmp;
      bc = b_data[acol];
      a = a_colidx_data[acol];
      nap_tmp = a_colidx_data[acol + 1];
      nap = nap_tmp - a_colidx_data[acol];
      if (nap >= 4) {
        int32_T apendm1_tmp;
        int32_T c_tmp;
        nap = ((nap_tmp - nap) + ((nap / 4) << 2)) - 1;
        c_st.site = &sc_emlrtRSI;
        if ((a_colidx_data[acol] <= nap) && (nap > 2147483643)) {
          d_st.site = &cb_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
        for (ap = a; ap <= nap; ap += 4) {
          c_tmp = a_rowidx_data[ap - 1] - 1;
          c_data[c_tmp] += a_d_data[ap - 1] * bc;
          c_data[a_rowidx_data[ap] - 1] += a_d_data[ap] * bc;
          c_tmp = a_rowidx_data[ap + 1] - 1;
          c_data[c_tmp] += a_d_data[ap + 1] * bc;
          c_tmp = a_rowidx_data[ap + 2] - 1;
          c_data[c_tmp] += a_d_data[ap + 2] * bc;
        }
        apendm1_tmp = nap_tmp - 1;
        a = nap + 1;
        c_st.site = &tc_emlrtRSI;
        if ((nap + 1 <= nap_tmp - 1) && (nap_tmp - 1 > 2147483646)) {
          d_st.site = &cb_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
        for (ap = a; ap <= apendm1_tmp; ap++) {
          c_tmp = a_rowidx_data[ap - 1] - 1;
          c_data[c_tmp] += a_d_data[ap - 1] * bc;
        }
      } else {
        nap = nap_tmp - 1;
        c_st.site = &uc_emlrtRSI;
        if ((a_colidx_data[acol] <= nap_tmp - 1) &&
            (nap_tmp - 1 > 2147483646)) {
          d_st.site = &cb_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
        for (ap = a; ap <= nap; ap++) {
          int32_T c_tmp;
          c_tmp = a_rowidx_data[ap - 1] - 1;
          c_data[c_tmp] += a_d_data[ap - 1] * bc;
        }
      }
    }
  }
}

/* End of code generation (mtimes.c) */
