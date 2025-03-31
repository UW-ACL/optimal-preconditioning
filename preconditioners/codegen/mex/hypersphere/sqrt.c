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
#include "hypersphere_data.h"
#include "hypersphere_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo cb_emlrtRSI = {
    14,              /* lineNo */
    "sparse/fillIn", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/fillIn.m" /* pathName */
};

static emlrtRSInfo eb_emlrtRSI = {
    12,     /* lineNo */
    "sqrt", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/elfun/sqrt.m" /* pathName
                                                                           */
};

static emlrtRSInfo fb_emlrtRSI = {
    16,     /* lineNo */
    "sqrt", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/elfun/sqrt.m" /* pathName
                                                                           */
};

static emlrtRSInfo gb_emlrtRSI = {
    518,                /* lineNo */
    "sparse/zerosLike", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo hb_emlrtRSI = {
    12,                   /* lineNo */
    "sparse/genericLike", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/genericLike.m" /* pathName */
};

static emlrtRSInfo ib_emlrtRSI = {
    26,              /* lineNo */
    "isDomainError", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "isDomainError.m" /* pathName */
};

static emlrtRSInfo kb_emlrtRSI = {
    24,                           /* lineNo */
    "applyScalarFunctionInPlace", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "applyScalarFunctionInPlace.m" /* pathName */
};

static emlrtRSInfo lb_emlrtRSI = {
    10,                                  /* lineNo */
    "sparse/applyScalarFunctionInPlace", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/applyScalarFunctionInPlace.m" /* pathName */
};

static emlrtRSInfo mb_emlrtRSI = {
    55,                                  /* lineNo */
    "sparse/applyScalarFunctionInPlace", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/applyScalarFunctionInPlace.m" /* pathName */
};

static emlrtRSInfo nb_emlrtRSI = {
    33,                           /* lineNo */
    "applyScalarFunctionInPlace", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "applyScalarFunctionInPlace.m" /* pathName */
};

/* Function Definitions */
void b_sqrt(const emlrtStack *sp, c_sparse *x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  int32_T nx;
  int32_T ridx;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &eb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &eb_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  d_st.site = &hb_emlrtRSI;
  if (x->colidx->data[1] - 1 < 1) {
    nx = 1;
  } else {
    nx = x->colidx->data[1];
  }
  b_st.site = &ib_emlrtRSI;
  c_st.site = &jb_emlrtRSI;
  p = false;
  for (ridx = 0; ridx <= nx - 2; ridx++) {
    if (p || (x->d->data[ridx] < 0.0)) {
      p = true;
    }
  }
  if (p) {
    emlrtErrorWithMessageIdR2018a(
        sp, &c_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  st.site = &fb_emlrtRSI;
  b_st.site = &kb_emlrtRSI;
  c_st.site = &lb_emlrtRSI;
  nx = x->d->size[0];
  d_st.site = &nb_emlrtRSI;
  if (x->d->size[0] > 2147483646) {
    e_st.site = &db_emlrtRSI;
    check_forloop_overflow_error(&e_st);
  }
  for (ridx = 0; ridx < nx; ridx++) {
    x->d->data[ridx] = muDoubleScalarSqrt(x->d->data[ridx]);
  }
  c_st.site = &mb_emlrtRSI;
  nx = 1;
  d_st.site = &cb_emlrtRSI;
  ridx = x->colidx->data[0];
  x->colidx->data[0] = 1;
  while (ridx < x->colidx->data[1]) {
    real_T val;
    int32_T currRowIdx;
    currRowIdx = x->rowidx->data[ridx - 1];
    val = x->d->data[ridx - 1];
    ridx++;
    if (val != 0.0) {
      x->d->data[nx - 1] = val;
      x->rowidx->data[nx - 1] = currRowIdx;
      nx++;
    }
  }
  x->colidx->data[1] = nx;
}

/* End of code generation (sqrt.c) */
