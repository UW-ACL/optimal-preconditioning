/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sparse1.c
 *
 * Code generation for function 'sparse1'
 *
 */

/* Include files */
#include "sparse1.h"
#include "eml_int_forloop_overflow_check.h"
#include "pipg_data.h"
#include "pipg_emxutil.h"
#include "pipg_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo nb_emlrtRSI = {
    1656,                  /* lineNo */
    "assertValidIndexArg", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo bc_emlrtRSI = {
    1683,            /* lineNo */
    "permuteVector", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo md_emlrtRSI = {
    302,            /* lineNo */
    "sparse/times", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo nd_emlrtRSI = {
    194,            /* lineNo */
    "sparse/binOp", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/binOp.m" /* pathName */
};

static emlrtRSInfo od_emlrtRSI = {
    204,            /* lineNo */
    "sparse/binOp", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/binOp.m" /* pathName */
};

static emlrtRSInfo pd_emlrtRSI = {
    206,            /* lineNo */
    "sparse/binOp", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/binOp.m" /* pathName */
};

static emlrtRSInfo
    qd_emlrtRSI =
        {
            18,      /* lineNo */
            "spfun", /* fcnName */
            "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/sparfun/"
            "spfun.m" /* pathName */
};

static emlrtRSInfo rd_emlrtRSI = {
    462,                /* lineNo */
    "sparse/spfunImpl", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo sd_emlrtRSI = {
    465,                /* lineNo */
    "sparse/spfunImpl", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo td_emlrtRSI = {
    468,                /* lineNo */
    "sparse/spfunImpl", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo ud_emlrtRSI = {
    437,           /* lineNo */
    "scalarBinOp", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/binOp.m" /* pathName */
};

static emlrtRSInfo vd_emlrtRSI = {
    49,              /* lineNo */
    "sparse/sparse", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo wd_emlrtRSI = {
    50,              /* lineNo */
    "sparse/sparse", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo xd_emlrtRSI = {
    65,              /* lineNo */
    "sparse/sparse", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo yd_emlrtRSI = {
    66,              /* lineNo */
    "sparse/sparse", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRTEInfo l_emlrtRTEI = {
    1660,                  /* lineNo */
    31,                    /* colNo */
    "assertValidIndexArg", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo m_emlrtRTEI = {
    1658,                  /* lineNo */
    31,                    /* colNo */
    "assertValidIndexArg", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo v_emlrtRTEI = {
    178,             /* lineNo */
    39,              /* colNo */
    "sparse/sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo w_emlrtRTEI = {
    460,                /* lineNo */
    34,                 /* colNo */
    "sparse/spfunImpl", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtDCInfo j_emlrtDCI = {
    203,            /* lineNo */
    42,             /* colNo */
    "sparse/binOp", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/binOp.m", /* pName */
    4                            /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = {
    203,            /* lineNo */
    73,             /* colNo */
    "sparse/binOp", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/binOp.m", /* pName */
    4                            /* checkKind */
};

static emlrtRTEInfo fc_emlrtRTEI = {
    1653,     /* lineNo */
    27,       /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo nc_emlrtRTEI = {
    203,     /* lineNo */
    9,       /* colNo */
    "binOp", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/binOp.m" /* pName */
};

static emlrtRTEInfo oc_emlrtRTEI = {
    459,      /* lineNo */
    12,       /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo pc_emlrtRTEI = {
    302,      /* lineNo */
    13,       /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo qc_emlrtRTEI = {
    125,     /* lineNo */
    5,       /* colNo */
    "binOp", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/binOp.m" /* pName */
};

static emlrtRTEInfo sc_emlrtRTEI = {
    1682,     /* lineNo */
    5,        /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

/* Function Definitions */
void assertValidIndexArg(const emlrtStack *sp, const emxArray_real_T *s,
                         emxArray_int32_T *sint)
{
  emlrtStack b_st;
  emlrtStack st;
  const real_T *s_data;
  int32_T k;
  int32_T ns;
  int32_T *sint_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  s_data = s->data;
  ns = s->size[1];
  k = sint->size[0];
  sint->size[0] = s->size[1];
  emxEnsureCapacity_int32_T(sp, sint, k, &fc_emlrtRTEI);
  sint_data = sint->data;
  st.site = &nb_emlrtRSI;
  if (s->size[1] > 2147483646) {
    b_st.site = &cb_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  for (k = 0; k < ns; k++) {
    real_T d;
    d = s_data[k];
    if (!(d == d)) {
      emlrtErrorWithMessageIdR2018a(sp, &m_emlrtRTEI,
                                    "MATLAB:sparsfcn:nonIntegerIndex",
                                    "MATLAB:sparsfcn:nonIntegerIndex", 0);
    }
    if (!(d < 2.147483647E+9)) {
      emlrtErrorWithMessageIdR2018a(sp, &l_emlrtRTEI,
                                    "MATLAB:sparsfcn:largeIndex",
                                    "MATLAB:sparsfcn:largeIndex", 0);
    }
    sint_data[k] = (int32_T)d;
  }
}

void permuteVector(const emlrtStack *sp, const emxArray_int32_T *idx,
                   emxArray_int32_T *y)
{
  emlrtStack b_st;
  emlrtStack st;
  emxArray_int32_T *t;
  const int32_T *idx_data;
  int32_T i;
  int32_T loop_ub;
  int32_T ny;
  int32_T *t_data;
  int32_T *y_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  y_data = y->data;
  idx_data = idx->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  ny = y->size[0];
  emxInit_int32_T(sp, &t, &sc_emlrtRTEI);
  i = t->size[0];
  t->size[0] = y->size[0];
  emxEnsureCapacity_int32_T(sp, t, i, &sc_emlrtRTEI);
  t_data = t->data;
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    t_data[i] = y_data[i];
  }
  st.site = &bc_emlrtRSI;
  if (y->size[0] > 2147483646) {
    b_st.site = &cb_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  for (loop_ub = 0; loop_ub < ny; loop_ub++) {
    y_data[loop_ub] = t_data[idx_data[loop_ub] - 1];
  }
  emxFree_int32_T(sp, &t);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

int32_T sparse_times(const emlrtStack *sp, real_T a, const emxArray_real_T *b_d,
                     const emxArray_int32_T *b_colidx,
                     const emxArray_int32_T *b_rowidx, int32_T b_m, int32_T b_n,
                     emxArray_real_T *s_d, emxArray_int32_T *s_colidx,
                     emxArray_int32_T *s_rowidx, int32_T *s_n)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  emxArray_real_T *S;
  const real_T *b_d_data;
  real_T *S_data;
  real_T *s_d_data;
  const int32_T *b_colidx_data;
  const int32_T *b_rowidx_data;
  int32_T col;
  int32_T currRowIdx;
  int32_T i;
  int32_T idx;
  int32_T s_m;
  int32_T *s_colidx_data;
  int32_T *s_rowidx_data;
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
  b_rowidx_data = b_rowidx->data;
  b_colidx_data = b_colidx->data;
  b_d_data = b_d->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &md_emlrtRSI;
  if (a * 0.0 == 0.0) {
    int32_T numalloc;
    b_st.site = &nd_emlrtRSI;
    c_st.site = &qd_emlrtRSI;
    currRowIdx = b_colidx_data[b_colidx->size[0] - 1];
    if (currRowIdx - 1 < 1) {
      numalloc = 0;
    } else {
      numalloc = currRowIdx - 1;
    }
    emxInit_real_T(&c_st, &S, 1, &oc_emlrtRTEI);
    i = S->size[0];
    S->size[0] = numalloc;
    emxEnsureCapacity_real_T(&c_st, S, i, &oc_emlrtRTEI);
    S_data = S->data;
    for (i = 0; i < numalloc; i++) {
      S_data[i] = a * b_d_data[i];
    }
    if (S->size[0] != currRowIdx - 1) {
      emlrtErrorWithMessageIdR2018a(&c_st, &w_emlrtRTEI, "MATLAB:samelen",
                                    "MATLAB:samelen", 0);
    }
    d_st.site = &rd_emlrtRSI;
    e_st.site = &w_emlrtRSI;
    f_st.site = &ib_emlrtRSI;
    if (b_m < 0) {
      emlrtErrorWithMessageIdR2018a(&f_st, &f_emlrtRTEI,
                                    "Coder:toolbox:SparseNegativeSize",
                                    "Coder:toolbox:SparseNegativeSize", 0);
    }
    if (b_m >= MAX_int32_T) {
      emlrtErrorWithMessageIdR2018a(
          &f_st, &k_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
          "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
    }
    f_st.site = &hb_emlrtRSI;
    if (b_n < 0) {
      emlrtErrorWithMessageIdR2018a(&f_st, &f_emlrtRTEI,
                                    "Coder:toolbox:SparseNegativeSize",
                                    "Coder:toolbox:SparseNegativeSize", 0);
    }
    if (b_n >= MAX_int32_T) {
      emlrtErrorWithMessageIdR2018a(
          &f_st, &k_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
          "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
    }
    s_m = b_m;
    *s_n = b_n;
    f_st.site = &y_emlrtRSI;
    if (currRowIdx - 1 < 0) {
      emlrtErrorWithMessageIdR2018a(&f_st, &f_emlrtRTEI,
                                    "Coder:toolbox:SparseNegativeSize",
                                    "Coder:toolbox:SparseNegativeSize", 0);
    }
    if (currRowIdx - 1 >= MAX_int32_T) {
      emlrtErrorWithMessageIdR2018a(
          &f_st, &k_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
          "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
    }
    if (currRowIdx - 1 < 0) {
      emlrtErrorWithMessageIdR2018a(&e_st, &v_emlrtRTEI,
                                    "Coder:toolbox:SparseNzmaxTooSmall",
                                    "Coder:toolbox:SparseNzmaxTooSmall", 0);
    }
    if (currRowIdx - 1 >= 1) {
      numalloc = currRowIdx - 2;
    } else {
      numalloc = 0;
    }
    i = s_d->size[0];
    s_d->size[0] = numalloc + 1;
    emxEnsureCapacity_real_T(&e_st, s_d, i, &pc_emlrtRTEI);
    s_d_data = s_d->data;
    i = s_rowidx->size[0];
    s_rowidx->size[0] = numalloc + 1;
    emxEnsureCapacity_int32_T(&e_st, s_rowidx, i, &pc_emlrtRTEI);
    s_rowidx_data = s_rowidx->data;
    for (i = 0; i <= numalloc; i++) {
      s_d_data[i] = 0.0;
      s_rowidx_data[i] = 0;
    }
    if (currRowIdx - 1 < 1) {
      numalloc = 1;
    } else {
      numalloc = currRowIdx;
    }
    for (i = 0; i <= numalloc - 2; i++) {
      s_rowidx_data[i] = b_rowidx_data[i];
    }
    i = s_colidx->size[0];
    s_colidx->size[0] = b_colidx->size[0];
    emxEnsureCapacity_int32_T(&c_st, s_colidx, i, &pc_emlrtRTEI);
    s_colidx_data = s_colidx->data;
    numalloc = b_colidx->size[0];
    for (i = 0; i < numalloc; i++) {
      s_colidx_data[i] = b_colidx_data[i];
    }
    d_st.site = &sd_emlrtRSI;
    if (currRowIdx - 1 > 2147483646) {
      e_st.site = &cb_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }
    for (col = 0; col <= currRowIdx - 2; col++) {
      s_d_data[col] = S_data[col];
    }
    emxFree_real_T(&c_st, &S);
    d_st.site = &td_emlrtRSI;
    idx = 1;
    i = b_colidx->size[0];
    e_st.site = &bb_emlrtRSI;
    for (col = 0; col <= i - 2; col++) {
      numalloc = s_colidx_data[col];
      s_colidx_data[col] = idx;
      while (numalloc < s_colidx_data[col + 1]) {
        real_T xrc;
        currRowIdx = s_rowidx_data[numalloc - 1];
        xrc = s_d_data[numalloc - 1];
        numalloc++;
        if (xrc != 0.0) {
          s_d_data[idx - 1] = xrc;
          s_rowidx_data[idx - 1] = currRowIdx;
          idx++;
        }
      }
    }
    s_colidx_data[s_colidx->size[0] - 1] = idx;
  } else {
    int32_T numalloc;
    emxInit_real_T(&st, &S, 2, &qc_emlrtRTEI);
    if (b_m < 0) {
      emlrtNonNegativeCheckR2012b(b_m, &j_emlrtDCI, &st);
    }
    i = S->size[0] * S->size[1];
    S->size[0] = b_m;
    emxEnsureCapacity_real_T(&st, S, i, &nc_emlrtRTEI);
    if (b_n < 0) {
      emlrtNonNegativeCheckR2012b(b_n, &k_emlrtDCI, &st);
    }
    i = S->size[0] * S->size[1];
    S->size[1] = b_n;
    emxEnsureCapacity_real_T(&st, S, i, &nc_emlrtRTEI);
    S_data = S->data;
    numalloc = b_m * b_n;
    for (i = 0; i < numalloc; i++) {
      S_data[i] = rtNaN;
    }
    b_st.site = &od_emlrtRSI;
    c_st.site = &ud_emlrtRSI;
    if (b_n > 2147483646) {
      d_st.site = &cb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
    for (col = 0; col < b_n; col++) {
      i = b_colidx_data[col];
      numalloc = b_colidx_data[col + 1] - 1;
      for (idx = i; idx <= numalloc; idx++) {
        S_data[(b_rowidx_data[idx - 1] + S->size[0] * col) - 1] = a;
      }
    }
    if (b_m < 1) {
      s_m = 0;
    } else {
      s_m = b_m;
    }
    if (b_n < 1) {
      *s_n = 0;
    } else {
      *s_n = b_n;
    }
    b_st.site = &pd_emlrtRSI;
    c_st.site = &db_emlrtRSI;
    d_st.site = &vd_emlrtRSI;
    e_st.site = &ab_emlrtRSI;
    if (s_m >= MAX_int32_T) {
      emlrtErrorWithMessageIdR2018a(
          &d_st, &k_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
          "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
    }
    d_st.site = &wd_emlrtRSI;
    e_st.site = &ab_emlrtRSI;
    numalloc = 0;
    i = s_m * *s_n;
    for (col = 0; col < i; col++) {
      if (S_data[col % s_m + S->size[0] * (int32_T)((uint32_T)col /
                                                    (uint32_T)s_m)] != 0.0) {
        numalloc++;
      }
    }
    numalloc = muIntScalarMax_sint32(numalloc, 1);
    i = s_d->size[0];
    s_d->size[0] = numalloc;
    emxEnsureCapacity_real_T(&c_st, s_d, i, &pc_emlrtRTEI);
    s_d_data = s_d->data;
    for (i = 0; i < numalloc; i++) {
      s_d_data[i] = 0.0;
    }
    i = s_colidx->size[0];
    s_colidx->size[0] = *s_n + 1;
    emxEnsureCapacity_int32_T(&c_st, s_colidx, i, &pc_emlrtRTEI);
    s_colidx_data = s_colidx->data;
    for (i = 0; i <= *s_n; i++) {
      s_colidx_data[i] = 0;
    }
    s_colidx_data[0] = 1;
    i = s_rowidx->size[0];
    s_rowidx->size[0] = numalloc;
    emxEnsureCapacity_int32_T(&c_st, s_rowidx, i, &pc_emlrtRTEI);
    s_rowidx_data = s_rowidx->data;
    for (i = 0; i < numalloc; i++) {
      s_rowidx_data[i] = 0;
    }
    s_rowidx_data[0] = 1;
    numalloc = 0;
    d_st.site = &xd_emlrtRSI;
    for (col = 0; col < *s_n; col++) {
      d_st.site = &yd_emlrtRSI;
      for (currRowIdx = 0; currRowIdx < s_m; currRowIdx++) {
        real_T xrc;
        xrc = S_data[currRowIdx + S->size[0] * col];
        if (xrc != 0.0) {
          s_rowidx_data[numalloc] = currRowIdx + 1;
          s_d_data[numalloc] = xrc;
          numalloc++;
        }
      }
      s_colidx_data[col + 1] = numalloc + 1;
    }
    emxFree_real_T(&c_st, &S);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
  return s_m;
}

/* End of code generation (sparse1.c) */
