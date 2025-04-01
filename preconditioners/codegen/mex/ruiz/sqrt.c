/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sqrt.c
 *
 * Code generation for function 'sqrt'
 *
 */

/* Include files */
#include "sqrt.h"
#include "eml_int_forloop_overflow_check.h"
#include "fillIn.h"
#include "rt_nonfinite.h"
#include "ruiz_data.h"
#include "ruiz_emxutil.h"
#include "ruiz_types.h"
#include "sparse.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo rc_emlrtRSI = {
    12,     /* lineNo */
    "sqrt", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/elfun/sqrt.m" /* pathName
                                                                           */
};

static emlrtRSInfo sc_emlrtRSI = {
    16,     /* lineNo */
    "sqrt", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/elfun/sqrt.m" /* pathName
                                                                           */
};

static emlrtRSInfo tc_emlrtRSI = {
    518,                /* lineNo */
    "sparse/zerosLike", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo uc_emlrtRSI = {
    12,                   /* lineNo */
    "sparse/genericLike", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/genericLike.m" /* pathName */
};

static emlrtRSInfo vc_emlrtRSI = {
    26,              /* lineNo */
    "isDomainError", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "isDomainError.m" /* pathName */
};

static emlrtRSInfo xc_emlrtRSI = {
    24,                           /* lineNo */
    "applyScalarFunctionInPlace", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "applyScalarFunctionInPlace.m" /* pathName */
};

static emlrtRSInfo yc_emlrtRSI = {
    10,                                  /* lineNo */
    "sparse/applyScalarFunctionInPlace", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/applyScalarFunctionInPlace.m" /* pathName */
};

static emlrtRSInfo ad_emlrtRSI = {
    55,                                  /* lineNo */
    "sparse/applyScalarFunctionInPlace", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/applyScalarFunctionInPlace.m" /* pathName */
};

static emlrtRSInfo bd_emlrtRSI = {
    33,                           /* lineNo */
    "applyScalarFunctionInPlace", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "applyScalarFunctionInPlace.m" /* pathName */
};

static emlrtRTEInfo tb_emlrtRTEI = {
    12,     /* lineNo */
    43,     /* colNo */
    "sqrt", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/elfun/sqrt.m" /* pName
                                                                           */
};

/* Function Definitions */
void b_sqrt(const emlrtStack *sp, c_sparse *x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_int32_T *val1_colidx;
  emxArray_real_T *val1_d;
  real_T *val1_d_data;
  int32_T k;
  int32_T nx;
  int32_T *val1_colidx_data;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &rc_emlrtRSI;
  b_st.site = &rc_emlrtRSI;
  c_st.site = &tc_emlrtRSI;
  d_st.site = &uc_emlrtRSI;
  emxInit_int32_T(&d_st, &val1_colidx, &tb_emlrtRTEI);
  emxInit_real_T(&d_st, &val1_d, 1, &tb_emlrtRTEI);
  nx = val1_d->size[0];
  val1_d->size[0] = 1;
  emxEnsureCapacity_real_T(&d_st, val1_d, nx, &tb_emlrtRTEI);
  val1_d_data = val1_d->data;
  nx = val1_colidx->size[0];
  val1_colidx->size[0] = 2;
  emxEnsureCapacity_int32_T(&d_st, val1_colidx, nx, &ib_emlrtRTEI);
  val1_colidx_data = val1_colidx->data;
  val1_d_data[0] = 0.0;
  val1_colidx_data[0] = 1;
  val1_colidx_data[1] = 1;
  b_st.site = &vc_emlrtRSI;
  sparse_full(&b_st, val1_d, val1_colidx);
  emxFree_int32_T(&st, &val1_colidx);
  emxFree_real_T(&st, &val1_d);
  st.site = &sc_emlrtRSI;
  b_st.site = &xc_emlrtRSI;
  c_st.site = &yc_emlrtRSI;
  nx = x->d->size[0];
  d_st.site = &bd_emlrtRSI;
  if (x->d->size[0] > 2147483646) {
    e_st.site = &kb_emlrtRSI;
    check_forloop_overflow_error(&e_st);
  }
  for (k = 0; k < nx; k++) {
    x->d->data[k] = muDoubleScalarSqrt(x->d->data[k]);
  }
  c_st.site = &ad_emlrtRSI;
  b_sparse_fillIn(x);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (sqrt.c) */
