/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * insertionsort.c
 *
 * Code generation for function 'insertionsort'
 *
 */

/* Include files */
#include "insertionsort.h"
#include "eml_int_forloop_overflow_check.h"
#include "hypersphere_data.h"
#include "hypersphere_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo rb_emlrtRSI = {
    18,              /* lineNo */
    "insertionsort", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/insertionsort.m" /* pathName */
};

/* Function Definitions */
void b_insertionsort(const emlrtStack *sp, emxArray_int32_T *x, int32_T xstart,
                     int32_T xend)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T a;
  int32_T k;
  int32_T *x_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  x_data = x->data;
  a = xstart + 1;
  st.site = &rb_emlrtRSI;
  if ((xstart + 1 <= xend) && (xend > 2147483646)) {
    b_st.site = &db_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  for (k = a; k <= xend; k++) {
    int32_T idx;
    int32_T xc;
    boolean_T exitg1;
    xc = x_data[k - 1];
    idx = k - 1;
    exitg1 = false;
    while ((!exitg1) && (idx >= xstart)) {
      int32_T i;
      i = x_data[idx - 1];
      if (xc < i) {
        x_data[idx] = i;
        idx--;
      } else {
        exitg1 = true;
      }
    }
    x_data[idx] = xc;
  }
}

void c_insertionsort(const emlrtStack *sp, int32_T x[196], int32_T xstart,
                     int32_T xend)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T a;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  a = xstart + 1;
  st.site = &rb_emlrtRSI;
  if ((xstart + 1 <= xend) && (xend > 2147483646)) {
    b_st.site = &db_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  for (k = a; k <= xend; k++) {
    int32_T idx;
    int32_T xc;
    xc = x[k - 1];
    idx = k - 2;
    while ((idx + 1 >= xstart) && (xc < x[idx])) {
      x[idx + 1] = x[idx];
      idx--;
    }
    x[idx + 1] = xc;
  }
}

void insertionsort(const emlrtStack *sp, int32_T x[298], int32_T xstart,
                   int32_T xend)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T a;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  a = xstart + 1;
  st.site = &rb_emlrtRSI;
  if ((xstart + 1 <= xend) && (xend > 2147483646)) {
    b_st.site = &db_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  for (k = a; k <= xend; k++) {
    int32_T idx;
    int32_T xc;
    xc = x[k - 1];
    idx = k - 2;
    while ((idx + 1 >= xstart) && (xc < x[idx])) {
      x[idx + 1] = x[idx];
      idx--;
    }
    x[idx + 1] = xc;
  }
}

/* End of code generation (insertionsort.c) */
