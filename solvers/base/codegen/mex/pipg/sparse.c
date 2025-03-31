/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sparse.c
 *
 * Code generation for function 'sparse'
 *
 */

/* Include files */
#include "sparse.h"
#include "eml_int_forloop_overflow_check.h"
#include "introsort.h"
#include "pipg_data.h"
#include "pipg_emxutil.h"
#include "pipg_types.h"
#include "rt_nonfinite.h"
#include "sparse1.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo x_emlrtRSI = {
    219,             /* lineNo */
    "sparse/sparse", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo eb_emlrtRSI = {
    209,             /* lineNo */
    "sparse/sparse", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo fb_emlrtRSI = {
    197,             /* lineNo */
    "sparse/sparse", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo gb_emlrtRSI = {
    147,             /* lineNo */
    "sparse/sparse", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo jb_emlrtRSI = {
    138,             /* lineNo */
    "sparse/sparse", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo kb_emlrtRSI = {
    126,             /* lineNo */
    "sparse/sparse", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo lb_emlrtRSI = {
    120,             /* lineNo */
    "sparse/sparse", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo mb_emlrtRSI = {
    119,             /* lineNo */
    "sparse/sparse", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo ob_emlrtRSI = {
    1672,          /* lineNo */
    "locSortrows", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo pb_emlrtRSI = {
    1674,          /* lineNo */
    "locSortrows", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo qb_emlrtRSI = {
    1675,          /* lineNo */
    "locSortrows", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo gc_emlrtRSI = {
    312,                     /* lineNo */
    "unaryMinOrMaxDispatch", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo hc_emlrtRSI = {
    353,          /* lineNo */
    "minOrMax1D", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtRTEInfo g_emlrtRTEI = {
    153,             /* lineNo */
    43,              /* colNo */
    "sparse/sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo h_emlrtRTEI = {
    148,             /* lineNo */
    43,              /* colNo */
    "sparse/sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo i_emlrtRTEI = {
    116,             /* lineNo */
    35,              /* colNo */
    "sparse/sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo j_emlrtRTEI = {
    111,             /* lineNo */
    35,              /* colNo */
    "sparse/sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtDCInfo f_emlrtDCI = {
    193,             /* lineNo */
    48,              /* colNo */
    "sparse/sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m", /* pName */
    4                             /* checkKind */
};

static emlrtRTEInfo yb_emlrtRTEI = {
    125,      /* lineNo */
    44,       /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo ac_emlrtRTEI =
    {
        13,       /* lineNo */
        1,        /* colNo */
        "sparse", /* fName */
        "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/sparfun/"
        "sparse.m" /* pName */
};

static emlrtRTEInfo bc_emlrtRTEI = {
    193,      /* lineNo */
    42,       /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo cc_emlrtRTEI = {
    119,      /* lineNo */
    13,       /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo dc_emlrtRTEI = {
    120,      /* lineNo */
    13,       /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo ec_emlrtRTEI = {
    125,      /* lineNo */
    13,       /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

/* Function Definitions */
int32_T sparse(const emlrtStack *sp, const emxArray_real_T *varargin_1,
               const emxArray_real_T *varargin_2, const real_T varargin_3[298],
               real_T varargin_4, real_T varargin_5, emxArray_real_T *y_d,
               emxArray_int32_T *y_colidx, emxArray_int32_T *y_rowidx,
               int32_T *y_n)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  emxArray_int32_T *cidxInt;
  emxArray_int32_T *ridxInt;
  emxArray_int32_T *sortedIndices;
  real_T val;
  real_T *y_d_data;
  int32_T currRowIdx;
  int32_T i;
  int32_T k;
  int32_T maxr;
  int32_T nc;
  int32_T numalloc;
  int32_T y_m;
  int32_T *cidxInt_data;
  int32_T *ridxInt_data;
  int32_T *sortedIndices_data;
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
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &db_emlrtRSI;
  nc = varargin_2->size[1];
  if ((varargin_1->size[1] != varargin_2->size[1]) ||
      (varargin_2->size[1] != 298)) {
    emlrtErrorWithMessageIdR2018a(&st, &j_emlrtRTEI, "MATLAB:samelen",
                                  "MATLAB:samelen", 0);
  }
  if ((varargin_2->size[1] != 298) && (varargin_1->size[1] != 298)) {
    emlrtErrorWithMessageIdR2018a(&st, &i_emlrtRTEI, "MATLAB:samelen",
                                  "MATLAB:samelen", 0);
  }
  emxInit_int32_T(&st, &ridxInt, &cc_emlrtRTEI);
  b_st.site = &mb_emlrtRSI;
  assertValidIndexArg(&b_st, varargin_1, ridxInt);
  emxInit_int32_T(&st, &cidxInt, &dc_emlrtRTEI);
  b_st.site = &lb_emlrtRSI;
  assertValidIndexArg(&b_st, varargin_2, cidxInt);
  emxInit_int32_T(&st, &sortedIndices, &ec_emlrtRTEI);
  i = sortedIndices->size[0];
  sortedIndices->size[0] = varargin_2->size[1];
  emxEnsureCapacity_int32_T(&st, sortedIndices, i, &yb_emlrtRTEI);
  sortedIndices_data = sortedIndices->data;
  b_st.site = &kb_emlrtRSI;
  if (varargin_2->size[1] > 2147483646) {
    c_st.site = &cb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  for (k = 0; k < nc; k++) {
    sortedIndices_data[k] = k + 1;
  }
  b_st.site = &jb_emlrtRSI;
  c_st.site = &ob_emlrtRSI;
  introsort(&c_st, sortedIndices, cidxInt->size[0], cidxInt, ridxInt);
  sortedIndices_data = sortedIndices->data;
  c_st.site = &pb_emlrtRSI;
  permuteVector(&c_st, sortedIndices, cidxInt);
  cidxInt_data = cidxInt->data;
  c_st.site = &qb_emlrtRSI;
  permuteVector(&c_st, sortedIndices, ridxInt);
  ridxInt_data = ridxInt->data;
  b_st.site = &ib_emlrtRSI;
  c_st.site = &ab_emlrtRSI;
  if ((varargin_4 != muDoubleScalarFloor(varargin_4)) ||
      muDoubleScalarIsInf(varargin_4) || (varargin_4 < -2.147483648E+9) ||
      (varargin_4 > 2.147483647E+9)) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &n_emlrtRTEI, "Coder:MATLAB:NonIntegerInput",
        "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }
  if (varargin_4 <= 0.0) {
    val = 0.0;
  } else {
    val = varargin_4;
  }
  if (!(val <= 2.147483647E+9)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &o_emlrtRTEI, "Coder:MATLAB:pmaxsize",
                                  "Coder:MATLAB:pmaxsize", 0);
  }
  if (!(varargin_4 < 2.147483647E+9)) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &k_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
        "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
  }
  b_st.site = &hb_emlrtRSI;
  c_st.site = &ab_emlrtRSI;
  if ((varargin_5 != muDoubleScalarFloor(varargin_5)) ||
      muDoubleScalarIsInf(varargin_5) || (varargin_5 < -2.147483648E+9) ||
      (varargin_5 > 2.147483647E+9)) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &n_emlrtRTEI, "Coder:MATLAB:NonIntegerInput",
        "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }
  if (varargin_5 <= 0.0) {
    val = 0.0;
  } else {
    val = varargin_5;
  }
  if (!(val <= 2.147483647E+9)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &o_emlrtRTEI, "Coder:MATLAB:pmaxsize",
                                  "Coder:MATLAB:pmaxsize", 0);
  }
  if (!(varargin_5 < 2.147483647E+9)) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &k_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
        "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
  }
  currRowIdx = (int32_T)varargin_5;
  b_st.site = &gb_emlrtRSI;
  c_st.site = &cc_emlrtRSI;
  d_st.site = &dc_emlrtRSI;
  e_st.site = &ec_emlrtRSI;
  f_st.site = &fc_emlrtRSI;
  numalloc = ridxInt->size[0];
  g_st.site = &gc_emlrtRSI;
  maxr = ridxInt_data[0];
  h_st.site = &hc_emlrtRSI;
  if (ridxInt->size[0] > 2147483646) {
    i_st.site = &cb_emlrtRSI;
    check_forloop_overflow_error(&i_st);
  }
  for (k = 2; k <= numalloc; k++) {
    i = ridxInt_data[k - 1];
    if (maxr < i) {
      maxr = i;
    }
  }
  if (maxr > (int32_T)varargin_4) {
    emlrtErrorWithMessageIdR2018a(&st, &h_emlrtRTEI,
                                  "Coder:builtins:IndexOutOfBounds",
                                  "Coder:builtins:IndexOutOfBounds", 6, 12,
                                  maxr, 12, 1, 12, (int32_T)varargin_4);
  }
  i = cidxInt_data[cidxInt->size[0] - 1];
  if (i > (int32_T)varargin_5) {
    emlrtErrorWithMessageIdR2018a(&st, &g_emlrtRTEI,
                                  "Coder:builtins:IndexOutOfBounds",
                                  "Coder:builtins:IndexOutOfBounds", 6, 12, i,
                                  12, 1, 12, (int32_T)varargin_5);
  }
  numalloc = muIntScalarMax_sint32(varargin_2->size[1], 1);
  i = y_d->size[0];
  y_d->size[0] = numalloc;
  emxEnsureCapacity_real_T(&st, y_d, i, &ac_emlrtRTEI);
  y_d_data = y_d->data;
  for (i = 0; i < numalloc; i++) {
    y_d_data[i] = 0.0;
  }
  if ((int32_T)varargin_5 + 1 < 0) {
    emlrtNonNegativeCheckR2012b((int32_T)varargin_5 + 1, &f_emlrtDCI, &st);
  }
  i = y_colidx->size[0];
  y_colidx->size[0] = (int32_T)varargin_5 + 1;
  emxEnsureCapacity_int32_T(&st, y_colidx, i, &bc_emlrtRTEI);
  y_colidx_data = y_colidx->data;
  y_colidx_data[0] = 1;
  i = y_rowidx->size[0];
  y_rowidx->size[0] = numalloc;
  emxEnsureCapacity_int32_T(&st, y_rowidx, i, &ac_emlrtRTEI);
  y_rowidx_data = y_rowidx->data;
  for (i = 0; i < numalloc; i++) {
    y_rowidx_data[i] = 0;
  }
  numalloc = 0;
  b_st.site = &fb_emlrtRSI;
  if ((int32_T)varargin_5 > 2147483646) {
    c_st.site = &cb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  for (k = 0; k < currRowIdx; k++) {
    while ((numalloc + 1 <= nc) && (cidxInt_data[numalloc] == k + 1)) {
      y_rowidx_data[numalloc] = ridxInt_data[numalloc];
      numalloc++;
    }
    y_colidx_data[k + 1] = numalloc + 1;
  }
  emxFree_int32_T(&st, &cidxInt);
  emxFree_int32_T(&st, &ridxInt);
  b_st.site = &eb_emlrtRSI;
  for (k = 0; k < nc; k++) {
    y_d_data[k] = varargin_3[sortedIndices_data[k] - 1];
  }
  emxFree_int32_T(&st, &sortedIndices);
  b_st.site = &x_emlrtRSI;
  numalloc = 1;
  i = y_colidx->size[0];
  c_st.site = &bb_emlrtRSI;
  for (k = 0; k <= i - 2; k++) {
    maxr = y_colidx_data[k];
    y_colidx_data[k] = numalloc;
    int32_T exitg1;
    do {
      exitg1 = 0;
      nc = y_colidx_data[k + 1];
      if (maxr < nc) {
        val = 0.0;
        currRowIdx = y_rowidx_data[maxr - 1];
        while ((maxr < nc) && (y_rowidx_data[maxr - 1] == currRowIdx)) {
          val += y_d_data[maxr - 1];
          maxr++;
        }
        if (val != 0.0) {
          y_d_data[numalloc - 1] = val;
          y_rowidx_data[numalloc - 1] = currRowIdx;
          numalloc++;
        }
      } else {
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }
  y_colidx_data[y_colidx->size[0] - 1] = numalloc;
  y_m = (int32_T)varargin_4;
  *y_n = (int32_T)varargin_5;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
  return y_m;
}

/* End of code generation (sparse.c) */
