/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * heapsort.c
 *
 * Code generation for function 'heapsort'
 *
 */

/* Include files */
#include "heapsort.h"
#include "eml_int_forloop_overflow_check.h"
#include "pipg_data.h"
#include "pipg_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo ac_emlrtRSI = {
    20,         /* lineNo */
    "heapsort", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/heapsort.m" /* pathName */
};

/* Function Declarations */
static void heapify(emxArray_int32_T *x, int32_T idx, int32_T xstart,
                    int32_T xend, const emxArray_int32_T *cmp_workspace_a,
                    const emxArray_int32_T *cmp_workspace_b);

/* Function Definitions */
static void heapify(emxArray_int32_T *x, int32_T idx, int32_T xstart,
                    int32_T xend, const emxArray_int32_T *cmp_workspace_a,
                    const emxArray_int32_T *cmp_workspace_b)
{
  const int32_T *cmp_workspace_a_data;
  const int32_T *cmp_workspace_b_data;
  int32_T extremum;
  int32_T extremumIdx;
  int32_T i;
  int32_T i1;
  int32_T leftIdx;
  int32_T *x_data;
  boolean_T changed;
  boolean_T exitg1;
  boolean_T varargout_1;
  cmp_workspace_b_data = cmp_workspace_b->data;
  cmp_workspace_a_data = cmp_workspace_a->data;
  x_data = x->data;
  changed = true;
  extremumIdx = (idx + xstart) - 2;
  leftIdx = ((idx << 1) + xstart) - 2;
  exitg1 = false;
  while ((!exitg1) && (leftIdx + 1 < xend)) {
    int32_T cmpIdx;
    int32_T i2;
    int32_T xcmp;
    changed = false;
    extremum = x_data[extremumIdx];
    cmpIdx = leftIdx;
    xcmp = x_data[leftIdx];
    i = cmp_workspace_a_data[x_data[leftIdx] - 1];
    i1 = x_data[leftIdx + 1] - 1;
    i2 = cmp_workspace_a_data[i1];
    if (i < i2) {
      varargout_1 = true;
    } else if (i == i2) {
      varargout_1 = (cmp_workspace_b_data[x_data[leftIdx] - 1] <
                     cmp_workspace_b_data[i1]);
    } else {
      varargout_1 = false;
    }
    if (varargout_1) {
      cmpIdx = leftIdx + 1;
      xcmp = x_data[leftIdx + 1];
    }
    i = cmp_workspace_a_data[x_data[extremumIdx] - 1];
    i1 = cmp_workspace_a_data[xcmp - 1];
    if (i < i1) {
      varargout_1 = true;
    } else if (i == i1) {
      varargout_1 = (cmp_workspace_b_data[x_data[extremumIdx] - 1] <
                     cmp_workspace_b_data[xcmp - 1]);
    } else {
      varargout_1 = false;
    }
    if (varargout_1) {
      x_data[extremumIdx] = xcmp;
      x_data[cmpIdx] = extremum;
      extremumIdx = cmpIdx;
      leftIdx = ((((cmpIdx - xstart) + 2) << 1) + xstart) - 2;
      changed = true;
    } else {
      exitg1 = true;
    }
  }
  if (changed && (leftIdx + 1 <= xend)) {
    extremum = x_data[extremumIdx];
    i = cmp_workspace_a_data[x_data[extremumIdx] - 1];
    i1 = cmp_workspace_a_data[x_data[leftIdx] - 1];
    if (i < i1) {
      varargout_1 = true;
    } else if (i == i1) {
      varargout_1 = (cmp_workspace_b_data[x_data[extremumIdx] - 1] <
                     cmp_workspace_b_data[x_data[leftIdx] - 1]);
    } else {
      varargout_1 = false;
    }
    if (varargout_1) {
      x_data[extremumIdx] = x_data[leftIdx];
      x_data[leftIdx] = extremum;
    }
  }
}

void b_heapsort(const emlrtStack *sp, emxArray_int32_T *x, int32_T xstart,
                int32_T xend, const emxArray_int32_T *cmp_workspace_a,
                const emxArray_int32_T *cmp_workspace_b)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T idx;
  int32_T k;
  int32_T n;
  int32_T *x_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  x_data = x->data;
  n = xend - xstart;
  for (idx = n + 1; idx >= 1; idx--) {
    heapify(x, idx, xstart, xend, cmp_workspace_a, cmp_workspace_b);
    x_data = x->data;
  }
  st.site = &ac_emlrtRSI;
  if (n > 2147483646) {
    b_st.site = &cb_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  for (k = 0; k < n; k++) {
    int32_T t;
    idx = (xend - k) - 1;
    t = x_data[idx];
    x_data[idx] = x_data[xstart - 1];
    x_data[xstart - 1] = t;
    heapify(x, 1, xstart, idx, cmp_workspace_a, cmp_workspace_b);
    x_data = x->data;
  }
}

/* End of code generation (heapsort.c) */
