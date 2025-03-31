/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * horzcat.c
 *
 * Code generation for function 'horzcat'
 *
 */

/* Include files */
#include "horzcat.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "ruiz_data.h"
#include "ruiz_types.h"
#include "sparse.h"

/* Variable Definitions */
static emlrtRSInfo jb_emlrtRSI = {
    12,               /* lineNo */
    "sparse/horzcat", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/horzcat.m" /* pathName */
};

static emlrtRSInfo kb_emlrtRSI = {
    13,               /* lineNo */
    "sparse/horzcat", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/horzcat.m" /* pathName */
};

static emlrtRSInfo mb_emlrtRSI = {
    20,             /* lineNo */
    "sparse/spcat", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/spcat.m" /* pathName */
};

static emlrtRSInfo nb_emlrtRSI = {
    27,          /* lineNo */
    "dohorzcat", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/spcat.m" /* pathName */
};

static emlrtRSInfo ob_emlrtRSI = {
    39,          /* lineNo */
    "dohorzcat", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/spcat.m" /* pathName */
};

/* Function Definitions */
void b_sparse_horzcat(const emlrtStack *sp, const emxArray_real_T *varargin_1_d,
                      const emxArray_int32_T *varargin_1_colidx,
                      const emxArray_int32_T *varargin_1_rowidx,
                      emxArray_real_T *c_d, emxArray_int32_T *c_colidx,
                      emxArray_int32_T *c_rowidx)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const real_T *varargin_1_d_data;
  real_T *c_d_data;
  const int32_T *varargin_1_colidx_data;
  const int32_T *varargin_1_rowidx_data;
  int32_T idx;
  int32_T nnzk_tmp;
  int32_T *c_colidx_data;
  int32_T *c_rowidx_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  varargin_1_rowidx_data = varargin_1_rowidx->data;
  varargin_1_colidx_data = varargin_1_colidx->data;
  varargin_1_d_data = varargin_1_d->data;
  st.site = &jb_emlrtRSI;
  b_st.site = &lb_emlrtRSI;
  st.site = &kb_emlrtRSI;
  b_st.site = &mb_emlrtRSI;
  nnzk_tmp = varargin_1_colidx_data[varargin_1_colidx->size[0] - 1];
  c_st.site = &nb_emlrtRSI;
  sparse_spallocLike(&c_st, nnzk_tmp - 1, c_d, c_colidx, c_rowidx);
  c_rowidx_data = c_rowidx->data;
  c_colidx_data = c_colidx->data;
  c_d_data = c_d->data;
  c_st.site = &ob_emlrtRSI;
  if (nnzk_tmp - 1 > 2147483646) {
    d_st.site = &ib_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }
  for (idx = 0; idx <= nnzk_tmp - 2; idx++) {
    c_rowidx_data[idx] = varargin_1_rowidx_data[idx];
    c_d_data[idx] = varargin_1_d_data[idx];
  }
  for (idx = 0; idx < 298; idx++) {
    c_colidx_data[idx + 1] = varargin_1_colidx_data[idx + 1];
  }
  c_st.site = &ob_emlrtRSI;
  for (idx = 0; idx < 196; idx++) {
    c_colidx_data[idx + 299] = nnzk_tmp;
  }
}

void sparse_horzcat(const emlrtStack *sp, const emxArray_real_T *varargin_1_d,
                    const emxArray_int32_T *varargin_1_colidx,
                    const emxArray_int32_T *varargin_1_rowidx,
                    const emxArray_real_T *varargin_2_d,
                    const emxArray_int32_T *varargin_2_colidx,
                    const emxArray_int32_T *varargin_2_rowidx,
                    emxArray_real_T *c_d, emxArray_int32_T *c_colidx,
                    emxArray_int32_T *c_rowidx)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const real_T *varargin_1_d_data;
  const real_T *varargin_2_d_data;
  real_T *c_d_data;
  const int32_T *varargin_1_colidx_data;
  const int32_T *varargin_1_rowidx_data;
  const int32_T *varargin_2_colidx_data;
  const int32_T *varargin_2_rowidx_data;
  int32_T i;
  int32_T i1;
  int32_T idx;
  int32_T nnzk_tmp;
  int32_T *c_colidx_data;
  int32_T *c_rowidx_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  varargin_2_rowidx_data = varargin_2_rowidx->data;
  varargin_2_colidx_data = varargin_2_colidx->data;
  varargin_2_d_data = varargin_2_d->data;
  varargin_1_rowidx_data = varargin_1_rowidx->data;
  varargin_1_colidx_data = varargin_1_colidx->data;
  varargin_1_d_data = varargin_1_d->data;
  st.site = &jb_emlrtRSI;
  b_st.site = &lb_emlrtRSI;
  i = varargin_1_colidx_data[varargin_1_colidx->size[0] - 1];
  i1 = varargin_2_colidx_data[varargin_2_colidx->size[0] - 1];
  nnzk_tmp = i - 1;
  if (i - 1 > -(i1 + MIN_int32_T)) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &g_emlrtRTEI, "Coder:toolbox:SparseCatTooBig",
        "Coder:toolbox:SparseCatTooBig", 3, 4, 8, "nonzeros");
  }
  st.site = &kb_emlrtRSI;
  b_st.site = &mb_emlrtRSI;
  c_st.site = &nb_emlrtRSI;
  sparse_spallocLike(&c_st, (i + i1) - 2, c_d, c_colidx, c_rowidx);
  c_rowidx_data = c_rowidx->data;
  c_colidx_data = c_colidx->data;
  c_d_data = c_d->data;
  c_st.site = &ob_emlrtRSI;
  if (i - 1 > 2147483646) {
    d_st.site = &ib_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }
  for (idx = 0; idx < nnzk_tmp; idx++) {
    c_rowidx_data[idx] = varargin_1_rowidx_data[idx];
    c_d_data[idx] = varargin_1_d_data[idx];
  }
  for (nnzk_tmp = 0; nnzk_tmp < 298; nnzk_tmp++) {
    c_colidx_data[nnzk_tmp + 1] = varargin_1_colidx_data[nnzk_tmp + 1];
  }
  c_st.site = &ob_emlrtRSI;
  if (i1 - 1 > 2147483646) {
    d_st.site = &ib_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }
  for (idx = 0; idx <= i1 - 2; idx++) {
    nnzk_tmp = (i + idx) - 1;
    c_rowidx_data[nnzk_tmp] = varargin_2_rowidx_data[idx];
    c_d_data[nnzk_tmp] = varargin_2_d_data[idx];
  }
  for (nnzk_tmp = 0; nnzk_tmp < 196; nnzk_tmp++) {
    c_colidx_data[nnzk_tmp + 299] =
        (varargin_2_colidx_data[nnzk_tmp + 1] + i) - 1;
  }
}

/* End of code generation (horzcat.c) */
