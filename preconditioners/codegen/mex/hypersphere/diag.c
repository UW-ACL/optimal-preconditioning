/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * diag.c
 *
 * Code generation for function 'diag'
 *
 */

/* Include files */
#include "diag.h"
#include "hypersphere_data.h"
#include "hypersphere_emxutil.h"
#include "hypersphere_types.h"
#include "locBsearch.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo v_emlrtRSI = {
    53,            /* lineNo */
    "sparse/diag", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/diag.m" /* pathName */
};

static emlrtRSInfo w_emlrtRSI = {
    136,          /* lineNo */
    "matrixDiag", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/diag.m" /* pathName */
};

static emlrtRTEInfo ab_emlrtRTEI = {
    53,     /* lineNo */
    5,      /* colNo */
    "diag", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/diag.m" /* pName */
};

/* Function Definitions */
void sparse_diag(const emlrtStack *sp, const emxArray_real_T *this_d,
                 const emxArray_int32_T *this_colidx,
                 const emxArray_int32_T *this_rowidx, emxArray_real_T *y_d,
                 emxArray_int32_T *y_colidx, emxArray_int32_T *y_rowidx)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const real_T *this_d_data;
  real_T *y_d_data;
  const int32_T *this_colidx_data;
  int32_T col;
  int32_T numalloc;
  int32_T toFill;
  int32_T *y_rowidx_data;
  boolean_T found;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  this_colidx_data = this_colidx->data;
  this_d_data = this_d->data;
  st.site = &v_emlrtRSI;
  numalloc = this_colidx_data[this_colidx->size[0] - 1] - 1;
  numalloc = muIntScalarMin_sint32(298, numalloc);
  b_st.site = &w_emlrtRSI;
  c_st.site = &x_emlrtRSI;
  d_st.site = &ab_emlrtRSI;
  if (numalloc < 0) {
    emlrtErrorWithMessageIdR2018a(&d_st, &e_emlrtRTEI,
                                  "Coder:toolbox:SparseNegativeSize",
                                  "Coder:toolbox:SparseNegativeSize", 0);
  }
  numalloc = muIntScalarMax_sint32(numalloc, 1);
  col = y_d->size[0];
  y_d->size[0] = numalloc;
  emxEnsureCapacity_real_T(&c_st, y_d, col, &ab_emlrtRTEI);
  y_d_data = y_d->data;
  col = y_rowidx->size[0];
  y_rowidx->size[0] = numalloc;
  emxEnsureCapacity_int32_T(&c_st, y_rowidx, col, &ab_emlrtRTEI);
  y_rowidx_data = y_rowidx->data;
  for (col = 0; col < numalloc; col++) {
    y_d_data[col] = 0.0;
    y_rowidx_data[col] = 0;
  }
  toFill = 0;
  for (col = 0; col < 298; col++) {
    numalloc = sparse_locBsearch(this_rowidx, col + 1, this_colidx_data[col],
                                 this_colidx_data[col + 1], &found);
    if (found) {
      y_rowidx_data[toFill] = col + 1;
      y_d_data[toFill] = this_d_data[numalloc - 1];
      toFill++;
    }
  }
  col = y_colidx->size[0];
  y_colidx->size[0] = 2;
  emxEnsureCapacity_int32_T(&st, y_colidx, col, &ab_emlrtRTEI);
  y_rowidx_data = y_colidx->data;
  y_rowidx_data[0] = 1;
  y_rowidx_data[1] = toFill + 1;
}

/* End of code generation (diag.c) */
