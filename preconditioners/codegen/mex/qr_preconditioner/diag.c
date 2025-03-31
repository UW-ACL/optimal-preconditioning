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
#include "qr_preconditioner_emxutil.h"
#include "qr_preconditioner_types.h"
#include "rt_nonfinite.h"
#include "sparse.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo o_emlrtRSI = {
    53,            /* lineNo */
    "sparse/diag", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/diag.m" /* pathName */
};

static emlrtRSInfo p_emlrtRSI = {
    136,          /* lineNo */
    "matrixDiag", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/diag.m" /* pathName */
};

static emlrtRTEInfo s_emlrtRTEI = {
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
  emlrtStack st;
  const real_T *this_d_data;
  real_T *y_d_data;
  const int32_T *this_colidx_data;
  const int32_T *this_rowidx_data;
  int32_T col;
  int32_T high_i;
  int32_T toFill;
  int32_T *y_rowidx_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  this_rowidx_data = this_rowidx->data;
  this_colidx_data = this_colidx->data;
  this_d_data = this_d->data;
  st.site = &o_emlrtRSI;
  high_i = this_colidx_data[this_colidx->size[0] - 1] - 1;
  b_st.site = &p_emlrtRSI;
  sparse_spallocLike(&b_st, muIntScalarMin_sint32(298, high_i), y_d, y_colidx,
                     y_rowidx);
  y_rowidx_data = y_rowidx->data;
  y_d_data = y_d->data;
  toFill = 0;
  for (col = 0; col < 298; col++) {
    boolean_T found;
    high_i = this_colidx_data[col + 1];
    if (this_colidx_data[col] < high_i) {
      if (col + 1 < this_rowidx_data[this_colidx_data[col] - 1]) {
        high_i = this_colidx_data[col];
        found = false;
      } else {
        int32_T low_i;
        int32_T low_ip1;
        low_i = this_colidx_data[col];
        low_ip1 = this_colidx_data[col];
        while (high_i > low_ip1 + 1) {
          int32_T mid_i;
          mid_i = (low_i >> 1) + (high_i >> 1);
          if (((low_i & 1) == 1) && ((high_i & 1) == 1)) {
            mid_i++;
          }
          if (col + 1 >= this_rowidx_data[mid_i - 1]) {
            low_i = mid_i;
            low_ip1 = mid_i;
          } else {
            high_i = mid_i;
          }
        }
        high_i = low_i + 1;
        found = (this_rowidx_data[low_i - 1] == col + 1);
      }
    } else if (this_colidx_data[col] == high_i) {
      high_i = this_colidx_data[col];
      found = false;
    } else {
      high_i = 1;
      found = false;
    }
    if (found) {
      y_rowidx_data[toFill] = col + 1;
      y_d_data[toFill] = this_d_data[high_i - 2];
      toFill++;
    }
  }
  high_i = y_colidx->size[0];
  y_colidx->size[0] = 2;
  emxEnsureCapacity_int32_T(&st, y_colidx, high_i, &s_emlrtRTEI);
  y_rowidx_data = y_colidx->data;
  y_rowidx_data[0] = 1;
  y_rowidx_data[1] = toFill + 1;
}

/* End of code generation (diag.c) */
