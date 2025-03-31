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
#include "fillIn.h"
#include "hypersphere_data.h"
#include "hypersphere_emxutil.h"
#include "hypersphere_types.h"
#include "rt_nonfinite.h"
#include "spfun.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo bc_emlrtRSI = {
    391,                /* lineNo */
    "sparse/transpose", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo cc_emlrtRSI = {
    24,                    /* lineNo */
    "sparse/locTranspose", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/locTranspose.m" /* pathName */
};

static emlrtRSInfo dc_emlrtRSI = {
    17,                    /* lineNo */
    "sparse/locTranspose", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/locTranspose.m" /* pathName */
};

static emlrtRSInfo rd_emlrtRSI = {
    302,            /* lineNo */
    "sparse/times", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo sd_emlrtRSI = {
    194,            /* lineNo */
    "sparse/binOp", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/binOp.m" /* pathName */
};

static emlrtRSInfo td_emlrtRSI = {
    204,            /* lineNo */
    "sparse/binOp", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/binOp.m" /* pathName */
};

static emlrtRSInfo ud_emlrtRSI = {
    206,            /* lineNo */
    "sparse/binOp", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/binOp.m" /* pathName */
};

static emlrtRTEInfo bb_emlrtRTEI = {
    391,      /* lineNo */
    13,       /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo eb_emlrtRTEI = {
    203,     /* lineNo */
    9,       /* colNo */
    "binOp", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/binOp.m" /* pName */
};

static emlrtRTEInfo fb_emlrtRTEI = {
    302,      /* lineNo */
    13,       /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = {
    125,     /* lineNo */
    5,       /* colNo */
    "binOp", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/binOp.m" /* pName */
};

/* Function Definitions */
void b_sparse_times(const emlrtStack *sp, real_T a, const emxArray_real_T *b_d,
                    const emxArray_int32_T *b_colidx,
                    const emxArray_int32_T *b_rowidx, b_sparse *s)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *S;
  real_T *S_data;
  const int32_T *b_colidx_data;
  const int32_T *b_rowidx_data;
  int32_T col;
  int32_T i;
  int32_T idx;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_rowidx_data = b_rowidx->data;
  b_colidx_data = b_colidx->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &rd_emlrtRSI;
  if (a * 0.0 == 0.0) {
    b_st.site = &sd_emlrtRSI;
    spfun(&b_st, a, b_d, b_colidx, b_rowidx, s);
  } else {
    int32_T numalloc;
    emxInit_real_T(&st, &S, 2, &gb_emlrtRTEI);
    i = S->size[0] * S->size[1];
    S->size[0] = 298;
    S->size[1] = 298;
    emxEnsureCapacity_real_T(&st, S, i, &eb_emlrtRTEI);
    S_data = S->data;
    for (i = 0; i < 88804; i++) {
      S_data[i] = rtNaN;
    }
    b_st.site = &td_emlrtRSI;
    for (col = 0; col < 298; col++) {
      i = b_colidx_data[col];
      numalloc = b_colidx_data[col + 1] - 1;
      for (idx = i; idx <= numalloc; idx++) {
        S_data[(b_rowidx_data[idx - 1] + S->size[0] * col) - 1] = a;
      }
    }
    b_st.site = &ud_emlrtRSI;
    c_st.site = &ob_emlrtRSI;
    numalloc = 0;
    for (idx = 0; idx < 88804; idx++) {
      if (S_data[idx % 298 + S->size[0] * (idx / 298)] != 0.0) {
        numalloc++;
      }
    }
    numalloc = muIntScalarMax_sint32(numalloc, 1);
    s->maxnz = numalloc;
    i = s->d->size[0];
    s->d->size[0] = numalloc;
    emxEnsureCapacity_real_T(&c_st, s->d, i, &fb_emlrtRTEI);
    for (i = 0; i < numalloc; i++) {
      s->d->data[i] = 0.0;
    }
    i = s->colidx->size[0];
    s->colidx->size[0] = 299;
    emxEnsureCapacity_int32_T(&c_st, s->colidx, i, &fb_emlrtRTEI);
    for (i = 0; i < 299; i++) {
      s->colidx->data[i] = 0;
    }
    s->colidx->data[0] = 1;
    i = s->rowidx->size[0];
    s->rowidx->size[0] = numalloc;
    emxEnsureCapacity_int32_T(&c_st, s->rowidx, i, &fb_emlrtRTEI);
    for (i = 0; i < numalloc; i++) {
      s->rowidx->data[i] = 0;
    }
    s->rowidx->data[0] = 1;
    numalloc = 0;
    for (col = 0; col < 298; col++) {
      for (idx = 0; idx < 298; idx++) {
        real_T d;
        d = S_data[idx + S->size[0] * col];
        if (d != 0.0) {
          s->rowidx->data[numalloc] = idx + 1;
          s->d->data[numalloc] = d;
          numalloc++;
        }
      }
      s->colidx->data[col + 1] = numalloc + 1;
    }
    emxFree_real_T(&c_st, &S);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void b_sparse_transpose(const emlrtStack *sp, const emxArray_real_T *this_d,
                        const emxArray_int32_T *this_colidx,
                        const emxArray_int32_T *this_rowidx,
                        emxArray_real_T *y_d, emxArray_int32_T *y_colidx,
                        emxArray_int32_T *y_rowidx)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const real_T *this_d_data;
  real_T *y_d_data;
  int32_T counts[196];
  const int32_T *this_colidx_data;
  const int32_T *this_rowidx_data;
  int32_T b;
  int32_T c;
  int32_T numalloc;
  int32_T outridx;
  int32_T *y_colidx_data;
  int32_T *y_rowidx_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  this_rowidx_data = this_rowidx->data;
  this_colidx_data = this_colidx->data;
  this_d_data = this_d->data;
  st.site = &bc_emlrtRSI;
  b_st.site = &dc_emlrtRSI;
  c_st.site = &ab_emlrtRSI;
  b = this_colidx_data[this_colidx->size[0] - 1];
  if (b - 1 < 0) {
    emlrtErrorWithMessageIdR2018a(&c_st, &e_emlrtRTEI,
                                  "Coder:toolbox:SparseNegativeSize",
                                  "Coder:toolbox:SparseNegativeSize", 0);
  }
  if (b - 1 < 0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &f_emlrtRTEI,
                                  "Coder:toolbox:SparseNzmaxTooSmall",
                                  "Coder:toolbox:SparseNzmaxTooSmall", 0);
  }
  if (b - 1 >= 1) {
    numalloc = b - 2;
  } else {
    numalloc = 0;
  }
  outridx = y_d->size[0];
  y_d->size[0] = numalloc + 1;
  emxEnsureCapacity_real_T(&b_st, y_d, outridx, &bb_emlrtRTEI);
  y_d_data = y_d->data;
  outridx = y_rowidx->size[0];
  y_rowidx->size[0] = numalloc + 1;
  emxEnsureCapacity_int32_T(&b_st, y_rowidx, outridx, &bb_emlrtRTEI);
  y_rowidx_data = y_rowidx->data;
  for (outridx = 0; outridx <= numalloc; outridx++) {
    y_d_data[outridx] = 0.0;
    y_rowidx_data[outridx] = 0;
  }
  outridx = y_colidx->size[0];
  y_colidx->size[0] = 197;
  emxEnsureCapacity_int32_T(&st, y_colidx, outridx, &bb_emlrtRTEI);
  y_colidx_data = y_colidx->data;
  for (outridx = 0; outridx < 197; outridx++) {
    y_colidx_data[outridx] = 0;
  }
  b_st.site = &cc_emlrtRSI;
  if (b - 1 > 2147483646) {
    c_st.site = &db_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  for (numalloc = 0; numalloc <= b - 2; numalloc++) {
    y_colidx_data[this_rowidx_data[numalloc]]++;
  }
  y_colidx_data[0] = 1;
  for (numalloc = 0; numalloc < 196; numalloc++) {
    y_colidx_data[numalloc + 1] += y_colidx_data[numalloc];
    counts[numalloc] = 0;
  }
  for (c = 0; c < 298; c++) {
    for (numalloc = this_colidx_data[c] - 1;
         numalloc + 1 < this_colidx_data[c + 1]; numalloc++) {
      b = counts[this_rowidx_data[numalloc] - 1];
      outridx = (b + y_colidx_data[this_rowidx_data[numalloc] - 1]) - 1;
      y_d_data[outridx] = this_d_data[numalloc];
      y_rowidx_data[outridx] = c + 1;
      counts[this_rowidx_data[numalloc] - 1] = b + 1;
    }
  }
}

int32_T sparse_times(const emlrtStack *sp, real_T a, const emxArray_real_T *b_d,
                     const emxArray_int32_T *b_colidx,
                     const emxArray_int32_T *b_rowidx, emxArray_real_T *s_d,
                     emxArray_int32_T *s_colidx, emxArray_int32_T *s_rowidx)
{
  b_sparse expl_temp;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *S;
  const real_T *b_d_data;
  real_T *S_data;
  real_T *s_d_data;
  const int32_T *b_colidx_data;
  const int32_T *b_rowidx_data;
  int32_T col;
  int32_T i;
  int32_T idx;
  int32_T s_maxnz;
  int32_T *s_colidx_data;
  int32_T *s_rowidx_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_rowidx_data = b_rowidx->data;
  b_colidx_data = b_colidx->data;
  b_d_data = b_d->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &rd_emlrtRSI;
  if (a * 0.0 == 0.0) {
    int32_T ctr;
    emxInitStruct_sparse1(&st, &expl_temp, &fb_emlrtRTEI);
    b_st.site = &sd_emlrtRSI;
    spfun(&b_st, a, b_d, b_colidx, b_rowidx, &expl_temp);
    i = s_d->size[0];
    s_d->size[0] = expl_temp.d->size[0];
    emxEnsureCapacity_real_T(&st, s_d, i, &fb_emlrtRTEI);
    s_d_data = s_d->data;
    ctr = expl_temp.d->size[0];
    for (i = 0; i < ctr; i++) {
      s_d_data[i] = expl_temp.d->data[i];
    }
    i = s_colidx->size[0];
    s_colidx->size[0] = expl_temp.colidx->size[0];
    emxEnsureCapacity_int32_T(&st, s_colidx, i, &fb_emlrtRTEI);
    s_colidx_data = s_colidx->data;
    ctr = expl_temp.colidx->size[0];
    for (i = 0; i < ctr; i++) {
      s_colidx_data[i] = expl_temp.colidx->data[i];
    }
    i = s_rowidx->size[0];
    s_rowidx->size[0] = expl_temp.rowidx->size[0];
    emxEnsureCapacity_int32_T(&st, s_rowidx, i, &fb_emlrtRTEI);
    s_rowidx_data = s_rowidx->data;
    ctr = expl_temp.rowidx->size[0];
    for (i = 0; i < ctr; i++) {
      s_rowidx_data[i] = expl_temp.rowidx->data[i];
    }
    s_maxnz = expl_temp.maxnz;
    emxFreeStruct_sparse1(&st, &expl_temp);
  } else {
    int32_T ctr;
    emxInit_real_T(&st, &S, 2, &gb_emlrtRTEI);
    i = S->size[0] * S->size[1];
    S->size[0] = 196;
    S->size[1] = 298;
    emxEnsureCapacity_real_T(&st, S, i, &eb_emlrtRTEI);
    S_data = S->data;
    for (i = 0; i < 58408; i++) {
      S_data[i] = rtNaN;
    }
    b_st.site = &td_emlrtRSI;
    for (col = 0; col < 298; col++) {
      i = b_colidx_data[col];
      ctr = b_colidx_data[col + 1] - 1;
      for (idx = i; idx <= ctr; idx++) {
        S_data[(b_rowidx_data[idx - 1] + S->size[0] * col) - 1] =
            a * b_d_data[idx - 1];
      }
    }
    b_st.site = &ud_emlrtRSI;
    c_st.site = &ob_emlrtRSI;
    ctr = 0;
    for (idx = 0; idx < 58408; idx++) {
      if (S_data[idx % 196 + S->size[0] * (idx / 196)] != 0.0) {
        ctr++;
      }
    }
    s_maxnz = muIntScalarMax_sint32(ctr, 1);
    i = s_d->size[0];
    s_d->size[0] = s_maxnz;
    emxEnsureCapacity_real_T(&c_st, s_d, i, &fb_emlrtRTEI);
    s_d_data = s_d->data;
    for (i = 0; i < s_maxnz; i++) {
      s_d_data[i] = 0.0;
    }
    i = s_colidx->size[0];
    s_colidx->size[0] = 299;
    emxEnsureCapacity_int32_T(&c_st, s_colidx, i, &fb_emlrtRTEI);
    s_colidx_data = s_colidx->data;
    for (i = 0; i < 299; i++) {
      s_colidx_data[i] = 0;
    }
    s_colidx_data[0] = 1;
    i = s_rowidx->size[0];
    s_rowidx->size[0] = s_maxnz;
    emxEnsureCapacity_int32_T(&c_st, s_rowidx, i, &fb_emlrtRTEI);
    s_rowidx_data = s_rowidx->data;
    for (i = 0; i < s_maxnz; i++) {
      s_rowidx_data[i] = 0;
    }
    s_rowidx_data[0] = 1;
    ctr = 0;
    for (col = 0; col < 298; col++) {
      for (idx = 0; idx < 196; idx++) {
        real_T d;
        d = S_data[idx + S->size[0] * col];
        if (d != 0.0) {
          s_rowidx_data[ctr] = idx + 1;
          s_d_data[ctr] = d;
          ctr++;
        }
      }
      s_colidx_data[col + 1] = ctr + 1;
    }
    emxFree_real_T(&c_st, &S);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
  return s_maxnz;
}

void sparse_transpose(const emlrtStack *sp, const emxArray_real_T *this_d,
                      const emxArray_int32_T *this_colidx,
                      const emxArray_int32_T *this_rowidx, b_sparse *y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const real_T *this_d_data;
  int32_T counts[298];
  const int32_T *this_colidx_data;
  const int32_T *this_rowidx_data;
  int32_T b;
  int32_T c;
  int32_T numalloc;
  int32_T outridx;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  this_rowidx_data = this_rowidx->data;
  this_colidx_data = this_colidx->data;
  this_d_data = this_d->data;
  st.site = &bc_emlrtRSI;
  b_st.site = &dc_emlrtRSI;
  c_st.site = &ab_emlrtRSI;
  b = this_colidx_data[this_colidx->size[0] - 1];
  outridx = b - 1;
  if (b - 1 < 0) {
    emlrtErrorWithMessageIdR2018a(&c_st, &e_emlrtRTEI,
                                  "Coder:toolbox:SparseNegativeSize",
                                  "Coder:toolbox:SparseNegativeSize", 0);
  }
  if (b - 1 < 0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &f_emlrtRTEI,
                                  "Coder:toolbox:SparseNzmaxTooSmall",
                                  "Coder:toolbox:SparseNzmaxTooSmall", 0);
  }
  numalloc = muIntScalarMax_sint32(outridx, 1);
  outridx = y->d->size[0];
  y->d->size[0] = numalloc;
  emxEnsureCapacity_real_T(&b_st, y->d, outridx, &bb_emlrtRTEI);
  y->maxnz = numalloc;
  outridx = y->colidx->size[0];
  y->colidx->size[0] = 299;
  emxEnsureCapacity_int32_T(&b_st, y->colidx, outridx, &p_emlrtRTEI);
  y->colidx->data[0] = 1;
  outridx = y->rowidx->size[0];
  y->rowidx->size[0] = numalloc;
  emxEnsureCapacity_int32_T(&b_st, y->rowidx, outridx, &bb_emlrtRTEI);
  for (outridx = 0; outridx < numalloc; outridx++) {
    y->d->data[outridx] = 0.0;
    y->rowidx->data[outridx] = 0;
  }
  for (c = 0; c < 298; c++) {
    y->colidx->data[c + 1] = 1;
  }
  sparse_fillIn(y);
  numalloc = y->colidx->size[0];
  for (outridx = 0; outridx < numalloc; outridx++) {
    y->colidx->data[outridx] = 0;
  }
  b_st.site = &cc_emlrtRSI;
  if (b - 1 > 2147483646) {
    c_st.site = &db_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  for (numalloc = 0; numalloc <= b - 2; numalloc++) {
    y->colidx->data[this_rowidx_data[numalloc]]++;
  }
  y->colidx->data[0] = 1;
  for (numalloc = 0; numalloc < 298; numalloc++) {
    y->colidx->data[numalloc + 1] += y->colidx->data[numalloc];
    counts[numalloc] = 0;
  }
  for (c = 0; c < 298; c++) {
    for (numalloc = this_colidx_data[c] - 1;
         numalloc + 1 < this_colidx_data[c + 1]; numalloc++) {
      b = counts[this_rowidx_data[numalloc] - 1];
      outridx = (b + y->colidx->data[this_rowidx_data[numalloc] - 1]) - 1;
      y->d->data[outridx] = this_d_data[numalloc];
      y->rowidx->data[outridx] = c + 1;
      counts[this_rowidx_data[numalloc] - 1] = b + 1;
    }
  }
}

/* End of code generation (sparse.c) */
