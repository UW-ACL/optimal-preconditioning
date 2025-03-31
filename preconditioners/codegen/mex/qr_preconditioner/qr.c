/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * qr.c
 *
 * Code generation for function 'qr'
 *
 */

/* Include files */
#include "qr.h"
#include "qr_preconditioner_data.h"
#include "rt_nonfinite.h"
#include "lapacke.h"
#include <stddef.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo jb_emlrtRSI = {
    24,   /* lineNo */
    "qr", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/matfun/qr.m" /* pathName
                                                                          */
};

static emlrtRSInfo kb_emlrtRSI = {
    35,       /* lineNo */
    "eml_qr", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/matfun/private/"
    "eml_qr.m" /* pathName */
};

static emlrtRSInfo lb_emlrtRSI = {
    166,       /* lineNo */
    "qr_econ", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/matfun/private/"
    "eml_qr.m" /* pathName */
};

static emlrtRSInfo mb_emlrtRSI = {
    187,       /* lineNo */
    "qr_econ", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/matfun/private/"
    "eml_qr.m" /* pathName */
};

static emlrtRSInfo nb_emlrtRSI = {
    27,       /* lineNo */
    "xgeqrf", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqrf.m" /* pathName */
};

static emlrtRSInfo ob_emlrtRSI = {
    91,             /* lineNo */
    "ceval_xgeqrf", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqrf.m" /* pathName */
};

static emlrtRSInfo qb_emlrtRSI = {
    202,        /* lineNo */
    "unpackQR", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/matfun/private/"
    "eml_qr.m" /* pathName */
};

static emlrtRSInfo rb_emlrtRSI = {
    14,       /* lineNo */
    "xorgqr", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xorgqr.m" /* pathName */
};

static emlrtRSInfo sb_emlrtRSI = {
    60,             /* lineNo */
    "ceval_xorgqr", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xorgqr.m" /* pathName */
};

/* Function Definitions */
void qr(const emlrtStack *sp, const real_T A[58408], real_T Q[58408],
        real_T R[38416])
{
  static const char_T b_fname[14] = {'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                     '_', 'd', 'o', 'r', 'g', 'q', 'r'};
  static const char_T fname[14] = {'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                   '_', 'd', 'g', 'e', 'q', 'r', 'f'};
  ptrdiff_t info_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T tau[196];
  int32_T i;
  int32_T j;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &jb_emlrtRSI;
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
  b_st.site = &kb_emlrtRSI;
  c_st.site = &lb_emlrtRSI;
  memcpy(&Q[0], &A[0], 58408U * sizeof(real_T));
  d_st.site = &nb_emlrtRSI;
  info_t = LAPACKE_dgeqrf(102, (ptrdiff_t)298, (ptrdiff_t)196, &Q[0],
                          (ptrdiff_t)298, &tau[0]);
  e_st.site = &ob_emlrtRSI;
  if ((int32_T)info_t != 0) {
    p = true;
    if ((int32_T)info_t != -4) {
      if ((int32_T)info_t == -1010) {
        emlrtErrorWithMessageIdR2018a(&e_st, &e_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&e_st, &f_emlrtRTEI,
                                      "Coder:toolbox:LAPACKCallErrorInfo",
                                      "Coder:toolbox:LAPACKCallErrorInfo", 5, 4,
                                      14, &fname[0], 12, (int32_T)info_t);
      }
    }
  } else {
    p = false;
  }
  if (p) {
    for (i = 0; i < 58408; i++) {
      Q[i] = rtNaN;
    }
    for (i = 0; i < 196; i++) {
      tau[i] = rtNaN;
    }
  }
  for (j = 0; j < 196; j++) {
    for (i = 0; i <= j; i++) {
      R[i + 196 * j] = Q[i + 298 * j];
    }
    i = j + 2;
    if (i <= 196) {
      memset(&R[(j * 196 + i) + -1], 0, (uint32_T)(-i + 197) * sizeof(real_T));
    }
  }
  c_st.site = &mb_emlrtRSI;
  d_st.site = &qb_emlrtRSI;
  e_st.site = &rb_emlrtRSI;
  info_t = LAPACKE_dorgqr(102, (ptrdiff_t)298, (ptrdiff_t)196, (ptrdiff_t)196,
                          &Q[0], (ptrdiff_t)298, &tau[0]);
  f_st.site = &sb_emlrtRSI;
  if ((int32_T)info_t != 0) {
    boolean_T b_p;
    p = true;
    b_p = false;
    if ((int32_T)info_t == -7) {
      b_p = true;
    } else if ((int32_T)info_t == -5) {
      b_p = true;
    }
    if (!b_p) {
      if ((int32_T)info_t == -1010) {
        emlrtErrorWithMessageIdR2018a(&f_st, &e_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&f_st, &f_emlrtRTEI,
                                      "Coder:toolbox:LAPACKCallErrorInfo",
                                      "Coder:toolbox:LAPACKCallErrorInfo", 5, 4,
                                      14, &b_fname[0], 12, (int32_T)info_t);
      }
    }
  } else {
    p = false;
  }
  if (p) {
    for (i = 0; i < 58408; i++) {
      Q[i] = rtNaN;
    }
  }
}

/* End of code generation (qr.c) */
