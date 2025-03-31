/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * tic.c
 *
 * Code generation for function 'tic'
 *
 */

/* Include files */
#include "tic.h"
#include "rt_nonfinite.h"
#include "ruiz_data.h"
#include "timeKeeper.h"
#include "emlrt.h"

/* Variable Definitions */
static emlrtRSInfo s_emlrtRSI = {
    34,    /* lineNo */
    "tic", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/timefun/tic.m" /* pathName
                                                                            */
};

/* Function Definitions */
void tic(const emlrtStack *sp)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emlrtTimespec t;
  int32_T status;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &s_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &t_emlrtRSI;
  c_st.site = &u_emlrtRSI;
  status = emlrtClockGettimeMonotonic(&t);
  d_st.site = &v_emlrtRSI;
  if (status != 0) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &c_emlrtRTEI, "Coder:toolbox:CoderTimeCallFailed",
        "Coder:toolbox:CoderTimeCallFailed", 5, 4, 26, &cv[0], 12, status);
  }
  st.site = &s_emlrtRSI;
  timeKeeper(&st, t);
}

/* End of code generation (tic.c) */
