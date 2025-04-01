/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sum.c
 *
 * Code generation for function 'sum'
 *
 */

/* Include files */
#include "sum.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "ruiz_data.h"
#include "ruiz_emxutil.h"
#include "ruiz_types.h"

/* Variable Definitions */
static emlrtRSInfo ke_emlrtRSI = {
    20,    /* lineNo */
    "sum", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/datafun/sum.m" /* pathName
                                                                            */
};

static emlrtRSInfo le_emlrtRSI = {
    99,        /* lineNo */
    "sumprod", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumprod.m" /* pathName */
};

static emlrtRSInfo me_emlrtRSI = {
    131,                     /* lineNo */
    "combineVectorElements", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/datafun/private/"
    "combineVectorElements.m" /* pathName */
};

static emlrtRSInfo ne_emlrtRSI = {
    357,          /* lineNo */
    "sparseIter", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/datafun/private/"
    "combineVectorElements.m" /* pathName */
};

static emlrtRSInfo oe_emlrtRSI = {
    381,                /* lineNo */
    "sparseColumnIter", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/datafun/private/"
    "combineVectorElements.m" /* pathName */
};

static emlrtRSInfo pe_emlrtRSI = {
    396,                /* lineNo */
    "sparseColumnIter", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/datafun/private/"
    "combineVectorElements.m" /* pathName */
};

static emlrtRSInfo qe_emlrtRSI = {
    407,                /* lineNo */
    "sparseColumnIter", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/datafun/private/"
    "combineVectorElements.m" /* pathName */
};

/* Function Definitions */
void sum(const emlrtStack *sp, const emxArray_real_T *x_d,
         const emxArray_int32_T *x_colidx, emxArray_real_T *y_d,
         emxArray_int32_T *y_colidx, emxArray_int32_T *y_rowidx)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  const real_T *x_d_data;
  real_T r;
  real_T *y_d_data;
  const int32_T *x_colidx_data;
  int32_T xend;
  int32_T xp;
  int32_T xstart;
  int32_T *y_colidx_data;
  int32_T *y_rowidx_data;
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
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  x_colidx_data = x_colidx->data;
  x_d_data = x_d->data;
  st.site = &ke_emlrtRSI;
  b_st.site = &le_emlrtRSI;
  c_st.site = &me_emlrtRSI;
  d_st.site = &ne_emlrtRSI;
  e_st.site = &oe_emlrtRSI;
  xstart = y_d->size[0];
  y_d->size[0] = 1;
  emxEnsureCapacity_real_T(&e_st, y_d, xstart, &db_emlrtRTEI);
  y_d_data = y_d->data;
  xstart = y_rowidx->size[0];
  y_rowidx->size[0] = 1;
  emxEnsureCapacity_int32_T(&e_st, y_rowidx, xstart, &eb_emlrtRTEI);
  y_rowidx_data = y_rowidx->data;
  xstart = y_colidx->size[0];
  y_colidx->size[0] = 2;
  emxEnsureCapacity_int32_T(&e_st, y_colidx, xstart, &fb_emlrtRTEI);
  y_colidx_data = y_colidx->data;
  y_colidx_data[0] = 1;
  y_colidx_data[1] = 1;
  xstart = x_colidx_data[0];
  xend = x_colidx_data[1] - 1;
  r = 0.0;
  e_st.site = &pe_emlrtRSI;
  if ((x_colidx_data[0] <= x_colidx_data[1] - 1) &&
      (x_colidx_data[1] - 1 > 2147483646)) {
    f_st.site = &kb_emlrtRSI;
    check_forloop_overflow_error(&f_st);
  }
  for (xp = xstart; xp <= xend; xp++) {
    r += x_d_data[xp - 1];
  }
  if (r != 0.0) {
    y_d_data[0] = r;
    y_colidx_data[1] = 2;
  }
  e_st.site = &qe_emlrtRSI;
  if (y_colidx_data[1] - 2 >= 0) {
    y_rowidx_data[0] = 1;
  }
}

/* End of code generation (sum.c) */
