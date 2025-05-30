/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * timeKeeper.c
 *
 * Code generation for function 'timeKeeper'
 *
 */

/* Include files */
#include "timeKeeper.h"
#include "pipg_data.h"
#include "rt_nonfinite.h"
#include "emlrt.h"
#include <string.h>

/* Variable Definitions */
static emlrtTimespec savedTime;

static boolean_T savedTime_not_empty;

static emlrtRSInfo t_emlrtRSI = {
    13,           /* lineNo */
    "timeKeeper", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/+time/+impl/timeKeeper.m" /* pathName */
};

static emlrtRTEInfo x_emlrtRTEI = {
    11,           /* lineNo */
    9,            /* colNo */
    "timeKeeper", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/+time/+impl/timeKeeper.m" /* pName */
};

/* Function Definitions */
real_T b_timeKeeper(const emlrtStack *sp, real_T *outTime_tv_nsec)
{
  real_T outTime_tv_sec;
  if (!savedTime_not_empty) {
    emlrtErrorWithMessageIdR2018a(sp, &x_emlrtRTEI,
                                  "MATLAB:toc:callTicFirstNoInputs",
                                  "MATLAB:toc:callTicFirstNoInputs", 0);
  }
  outTime_tv_sec = savedTime.tv_sec;
  *outTime_tv_nsec = savedTime.tv_nsec;
  return outTime_tv_sec;
}

void savedTime_not_empty_init(void)
{
  savedTime_not_empty = false;
}

void timeKeeper(const emlrtStack *sp, const emlrtTimespec newTime)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  if (!savedTime_not_empty) {
    int32_T status;
    st.site = &t_emlrtRSI;
    b_st.site = &q_emlrtRSI;
    c_st.site = &r_emlrtRSI;
    status = emlrtClockGettimeMonotonic(&savedTime);
    d_st.site = &s_emlrtRSI;
    if (status != 0) {
      emlrtErrorWithMessageIdR2018a(
          &d_st, &e_emlrtRTEI, "Coder:toolbox:CoderTimeCallFailed",
          "Coder:toolbox:CoderTimeCallFailed", 5, 4, 26, &cv[0], 12, status);
    }
    savedTime_not_empty = true;
  }
  savedTime = newTime;
}

/* End of code generation (timeKeeper.c) */
