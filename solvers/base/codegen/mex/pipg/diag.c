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
#include "pipg_data.h"
#include "pipg_emxutil.h"
#include "pipg_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo u_emlrtRSI = {
    53,            /* lineNo */
    "sparse/diag", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/diag.m" /* pathName */
};

static emlrtRSInfo v_emlrtRSI = {
    136,          /* lineNo */
    "matrixDiag", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/diag.m" /* pathName */
};

static emlrtRTEInfo xb_emlrtRTEI = {
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
  const int32_T *this_rowidx_data;
  int32_T col;
  int32_T low_ip1;
  int32_T numalloc;
  int32_T toFill;
  int32_T *y_rowidx_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  this_rowidx_data = this_rowidx->data;
  this_colidx_data = this_colidx->data;
  this_d_data = this_d->data;
  st.site = &u_emlrtRSI;
  numalloc = this_colidx_data[this_colidx->size[0] - 1] - 1;
  numalloc = muIntScalarMin_sint32(298, numalloc);
  b_st.site = &v_emlrtRSI;
  c_st.site = &w_emlrtRSI;
  d_st.site = &y_emlrtRSI;
  if (numalloc < 0) {
    emlrtErrorWithMessageIdR2018a(&d_st, &f_emlrtRTEI,
                                  "Coder:toolbox:SparseNegativeSize",
                                  "Coder:toolbox:SparseNegativeSize", 0);
  }
  numalloc = muIntScalarMax_sint32(numalloc, 1);
  low_ip1 = y_d->size[0];
  y_d->size[0] = numalloc;
  emxEnsureCapacity_real_T(&c_st, y_d, low_ip1, &xb_emlrtRTEI);
  y_d_data = y_d->data;
  low_ip1 = y_rowidx->size[0];
  y_rowidx->size[0] = numalloc;
  emxEnsureCapacity_int32_T(&c_st, y_rowidx, low_ip1, &xb_emlrtRTEI);
  y_rowidx_data = y_rowidx->data;
  for (low_ip1 = 0; low_ip1 < numalloc; low_ip1++) {
    y_d_data[low_ip1] = 0.0;
    y_rowidx_data[low_ip1] = 0;
  }
  toFill = 0;
  for (col = 0; col < 298; col++) {
    boolean_T found;
    numalloc = this_colidx_data[col + 1];
    if (this_colidx_data[col] < numalloc) {
      if (col + 1 < this_rowidx_data[this_colidx_data[col] - 1]) {
        numalloc = this_colidx_data[col];
        found = false;
      } else {
        int32_T low_i;
        low_i = this_colidx_data[col];
        low_ip1 = this_colidx_data[col];
        while (numalloc > low_ip1 + 1) {
          int32_T mid_i;
          mid_i = (low_i >> 1) + (numalloc >> 1);
          if (((low_i & 1) == 1) && ((numalloc & 1) == 1)) {
            mid_i++;
          }
          if (col + 1 >= this_rowidx_data[mid_i - 1]) {
            low_i = mid_i;
            low_ip1 = mid_i;
          } else {
            numalloc = mid_i;
          }
        }
        numalloc = low_i + 1;
        found = (this_rowidx_data[low_i - 1] == col + 1);
      }
    } else if (this_colidx_data[col] == numalloc) {
      numalloc = this_colidx_data[col];
      found = false;
    } else {
      numalloc = 1;
      found = false;
    }
    if (found) {
      y_rowidx_data[toFill] = col + 1;
      y_d_data[toFill] = this_d_data[numalloc - 2];
      toFill++;
    }
  }
  low_ip1 = y_colidx->size[0];
  y_colidx->size[0] = 2;
  emxEnsureCapacity_int32_T(&st, y_colidx, low_ip1, &xb_emlrtRTEI);
  y_rowidx_data = y_colidx->data;
  y_rowidx_data[0] = 1;
  y_rowidx_data[1] = toFill + 1;
}

/* End of code generation (diag.c) */
