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
#include "rt_nonfinite.h"
#include "ruiz_data.h"
#include "ruiz_emxutil.h"
#include "ruiz_types.h"

/* Variable Definitions */
static emlrtRSInfo
    bb_emlrtRSI =
        {
            33,      /* lineNo */
            "speye", /* fcnName */
            "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/sparfun/"
            "speye.m" /* pathName */
};

static emlrtRSInfo cb_emlrtRSI = {
    8,                /* lineNo */
    "sparse/eyeLike", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/eyeLike.m" /* pathName */
};

/* Function Definitions */
void speye(const emlrtStack *sp, emxArray_real_T *y_d,
           emxArray_int32_T *y_colidx, emxArray_int32_T *y_rowidx)
{
  emlrtStack b_st;
  emlrtStack st;
  real_T *y_d_data;
  int32_T i;
  int32_T *y_colidx_data;
  int32_T *y_rowidx_data;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &bb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &cb_emlrtRSI;
  i = y_d->size[0];
  y_d->size[0] = 494;
  emxEnsureCapacity_real_T(&b_st, y_d, i, &db_emlrtRTEI);
  y_d_data = y_d->data;
  i = y_rowidx->size[0];
  y_rowidx->size[0] = 494;
  emxEnsureCapacity_int32_T(&b_st, y_rowidx, i, &eb_emlrtRTEI);
  y_rowidx_data = y_rowidx->data;
  i = y_colidx->size[0];
  y_colidx->size[0] = 495;
  emxEnsureCapacity_int32_T(&b_st, y_colidx, i, &fb_emlrtRTEI);
  y_colidx_data = y_colidx->data;
  for (i = 0; i < 494; i++) {
    y_d_data[i] = 1.0;
    y_rowidx_data[i] = i + 1;
  }
  y_colidx_data[0] = 1;
  for (i = 0; i < 493; i++) {
    y_colidx_data[i + 1] = i + 2;
  }
  y_colidx_data[494] = 495;
}

/* End of code generation (speye.c) */
