/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * vertcat.c
 *
 * Code generation for function 'vertcat'
 *
 */

/* Include files */
#include "vertcat.h"
#include "eml_int_forloop_overflow_check.h"
#include "fillIn.h"
#include "rt_nonfinite.h"
#include "ruiz_data.h"
#include "ruiz_emxutil.h"
#include "ruiz_types.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo qb_emlrtRSI = {
    12,               /* lineNo */
    "sparse/vertcat", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/vertcat.m" /* pathName */
};

static emlrtRSInfo rb_emlrtRSI = {
    13,               /* lineNo */
    "sparse/vertcat", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/vertcat.m" /* pathName */
};

static emlrtRSInfo sb_emlrtRSI = {
    17,             /* lineNo */
    "sparse/spcat", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/spcat.m" /* pathName */
};

static emlrtRSInfo tb_emlrtRSI = {
    74,          /* lineNo */
    "dovertcat", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/spcat.m" /* pathName */
};

static emlrtRSInfo ub_emlrtRSI = {
    93,          /* lineNo */
    "dovertcat", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/spcat.m" /* pathName */
};

static emlrtRTEInfo eb_emlrtRTEI = {
    13,        /* lineNo */
    1,         /* colNo */
    "vertcat", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/vertcat.m" /* pName */
};

/* Function Definitions */
void sparse_vertcat(const emlrtStack *sp, const emxArray_real_T *varargin_1_d,
                    const emxArray_int32_T *varargin_1_colidx,
                    const emxArray_int32_T *varargin_1_rowidx,
                    const emxArray_real_T *varargin_2_d,
                    const emxArray_int32_T *varargin_2_colidx,
                    const emxArray_int32_T *varargin_2_rowidx, b_sparse *c)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  const real_T *varargin_1_d_data;
  const real_T *varargin_2_d_data;
  const int32_T *varargin_1_colidx_data;
  const int32_T *varargin_1_rowidx_data;
  const int32_T *varargin_2_colidx_data;
  const int32_T *varargin_2_rowidx_data;
  int32_T ccol;
  int32_T i;
  int32_T kp;
  int32_T numalloc;
  int32_T nzCount;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  varargin_2_rowidx_data = varargin_2_rowidx->data;
  varargin_2_colidx_data = varargin_2_colidx->data;
  varargin_2_d_data = varargin_2_d->data;
  varargin_1_rowidx_data = varargin_1_rowidx->data;
  varargin_1_colidx_data = varargin_1_colidx->data;
  varargin_1_d_data = varargin_1_d->data;
  st.site = &qb_emlrtRSI;
  b_st.site = &lb_emlrtRSI;
  i = varargin_1_colidx_data[varargin_1_colidx->size[0] - 1];
  numalloc = varargin_2_colidx_data[varargin_2_colidx->size[0] - 1];
  if (i - 1 > -(numalloc + MIN_int32_T)) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &g_emlrtRTEI, "Coder:toolbox:SparseCatTooBig",
        "Coder:toolbox:SparseCatTooBig", 3, 4, 8, "nonzeros");
  }
  numalloc = (i + numalloc) - 2;
  st.site = &rb_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  c_st.site = &tb_emlrtRSI;
  d_st.site = &pb_emlrtRSI;
  e_st.site = &fb_emlrtRSI;
  if (numalloc < 0) {
    emlrtErrorWithMessageIdR2018a(&e_st, &e_emlrtRTEI,
                                  "Coder:toolbox:SparseNegativeSize",
                                  "Coder:toolbox:SparseNegativeSize", 0);
  }
  if (numalloc >= MAX_int32_T) {
    emlrtErrorWithMessageIdR2018a(
        &e_st, &f_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
        "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
  }
  numalloc = muIntScalarMax_sint32(numalloc, 1);
  i = c->d->size[0];
  c->d->size[0] = numalloc;
  emxEnsureCapacity_real_T(&d_st, c->d, i, &eb_emlrtRTEI);
  i = c->colidx->size[0];
  c->colidx->size[0] = 495;
  emxEnsureCapacity_int32_T(&d_st, c->colidx, i, &s_emlrtRTEI);
  c->colidx->data[0] = 1;
  i = c->rowidx->size[0];
  c->rowidx->size[0] = numalloc;
  emxEnsureCapacity_int32_T(&d_st, c->rowidx, i, &eb_emlrtRTEI);
  for (i = 0; i < numalloc; i++) {
    c->d->data[i] = 0.0;
    c->rowidx->data[i] = 0;
  }
  for (numalloc = 0; numalloc < 494; numalloc++) {
    c->colidx->data[numalloc + 1] = 1;
  }
  sparse_fillIn(c);
  nzCount = 0;
  for (ccol = 0; ccol < 494; ccol++) {
    int32_T kpend_tmp;
    int32_T kpend_tmp_tmp;
    i = varargin_1_colidx_data[ccol];
    kpend_tmp_tmp = varargin_1_colidx_data[ccol + 1];
    kpend_tmp = kpend_tmp_tmp - 1;
    c_st.site = &ub_emlrtRSI;
    if ((varargin_1_colidx_data[ccol] <= kpend_tmp_tmp - 1) &&
        (kpend_tmp_tmp - 1 > 2147483646)) {
      d_st.site = &ib_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
    for (kp = i; kp <= kpend_tmp; kp++) {
      numalloc = (nzCount + kp) - i;
      c->rowidx->data[numalloc] = varargin_1_rowidx_data[kp - 1];
      c->d->data[numalloc] = varargin_1_d_data[kp - 1];
    }
    nzCount = (nzCount + kpend_tmp_tmp) - varargin_1_colidx_data[ccol];
    i = varargin_2_colidx_data[ccol];
    kpend_tmp_tmp = varargin_2_colidx_data[ccol + 1];
    kpend_tmp = kpend_tmp_tmp - 1;
    c_st.site = &ub_emlrtRSI;
    if ((varargin_2_colidx_data[ccol] <= kpend_tmp_tmp - 1) &&
        (kpend_tmp_tmp - 1 > 2147483646)) {
      d_st.site = &ib_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
    for (kp = i; kp <= kpend_tmp; kp++) {
      numalloc = (nzCount + kp) - i;
      c->rowidx->data[numalloc] = varargin_2_rowidx_data[kp - 1] + 298;
      c->d->data[numalloc] = varargin_2_d_data[kp - 1];
    }
    nzCount = (nzCount + kpend_tmp_tmp) - varargin_2_colidx_data[ccol];
    c->colidx->data[ccol + 1] = nzCount + 1;
  }
}

/* End of code generation (vertcat.c) */
