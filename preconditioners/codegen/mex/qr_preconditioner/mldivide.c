/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mldivide.c
 *
 * Code generation for function 'mldivide'
 *
 */

/* Include files */
#include "mldivide.h"
#include "qr_preconditioner_data.h"
#include "qr_preconditioner_types.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "lapacke.h"
#include <stddef.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo
    tb_emlrtRSI =
        {
            20,         /* lineNo */
            "mldivide", /* fcnName */
            "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/ops/"
            "mldivide.m" /* pathName */
};

static emlrtRSInfo
    ub_emlrtRSI =
        {
            42,      /* lineNo */
            "mldiv", /* fcnName */
            "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/ops/"
            "mldivide.m" /* pathName */
};

static emlrtRSInfo vb_emlrtRSI =
    {
        67,        /* lineNo */
        "lusolve", /* fcnName */
        "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo wb_emlrtRSI =
    {
        109,          /* lineNo */
        "lusolveNxN", /* fcnName */
        "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo xb_emlrtRSI =
    {
        112,          /* lineNo */
        "lusolveNxN", /* fcnName */
        "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo yb_emlrtRSI =
    {
        124,          /* lineNo */
        "InvAtimesX", /* fcnName */
        "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo ac_emlrtRSI = {
    19,        /* lineNo */
    "xgetrfs", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrfs.m" /* pathName */
};

static emlrtRSInfo bc_emlrtRSI = {
    108,      /* lineNo */
    "cmldiv", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrfs.m" /* pathName */
};

static emlrtRSInfo cc_emlrtRSI =
    {
        90,              /* lineNo */
        "warn_singular", /* fcnName */
        "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

/* Function Definitions */
void mldivide(qr_preconditionerStackData *SD, const emlrtStack *sp,
              const real_T A[38416], real_T B[196])
{
  static const char_T fname[19] = {'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                   '_', 'd', 'g', 'e', 't', 'r', 'f',
                                   '_', 'w', 'o', 'r', 'k'};
  ptrdiff_t IPIV[196];
  ptrdiff_t INFO;
  ptrdiff_t LDA;
  ptrdiff_t N;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &tb_emlrtRSI;
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
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  b_st.site = &ub_emlrtRSI;
  c_st.site = &vb_emlrtRSI;
  d_st.site = &wb_emlrtRSI;
  e_st.site = &yb_emlrtRSI;
  f_st.site = &ac_emlrtRSI;
  memcpy(&SD->f0.A[0], &A[0], 38416U * sizeof(real_T));
  N = (ptrdiff_t)196;
  LDA = (ptrdiff_t)196;
  INFO = LAPACKE_dgetrf_work(102, N, N, &SD->f0.A[0], LDA, &IPIV[0]);
  g_st.site = &bc_emlrtRSI;
  if ((int32_T)INFO < 0) {
    if ((int32_T)INFO == -1010) {
      emlrtErrorWithMessageIdR2018a(&g_st, &e_emlrtRTEI, "MATLAB:nomem",
                                    "MATLAB:nomem", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&g_st, &f_emlrtRTEI,
                                    "Coder:toolbox:LAPACKCallErrorInfo",
                                    "Coder:toolbox:LAPACKCallErrorInfo", 5, 4,
                                    19, &fname[0], 12, (int32_T)INFO);
    }
  }
  LAPACKE_dgetrs_work(102, 'N', N, (ptrdiff_t)1, &SD->f0.A[0], LDA, &IPIV[0],
                      &B[0], (ptrdiff_t)196);
  if ((int32_T)INFO > 0) {
    d_st.site = &xb_emlrtRSI;
    e_st.site = &cc_emlrtRSI;
    warning(&e_st);
  }
}

/* End of code generation (mldivide.c) */
