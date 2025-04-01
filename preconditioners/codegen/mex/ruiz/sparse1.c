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
#include "fillIn.h"
#include "introsort.h"
#include "rt_nonfinite.h"
#include "ruiz_data.h"
#include "ruiz_emxutil.h"
#include "ruiz_types.h"

/* Variable Definitions */
static emlrtRSInfo gb_emlrtRSI = {
    219,             /* lineNo */
    "sparse/sparse", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo cd_emlrtRSI = {
    138,             /* lineNo */
    "sparse/sparse", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo dd_emlrtRSI = {
    1672,          /* lineNo */
    "locSortrows", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRTEInfo kb_emlrtRTEI =
    {
        13,       /* lineNo */
        1,        /* colNo */
        "sparse", /* fName */
        "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/sparfun/"
        "sparse.m" /* pName */
};

/* Function Definitions */
void sparse(const emlrtStack *sp, const real_T varargin_3[494], c_sparse *y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T sortedIndices[494];
  int32_T c;
  int32_T cptr;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ab_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  for (cptr = 0; cptr < 494; cptr++) {
    sortedIndices[cptr] = cptr + 1;
  }
  b_st.site = &cd_emlrtRSI;
  c_st.site = &dd_emlrtRSI;
  introsort(&c_st, sortedIndices);
  cptr = y->d->size[0];
  y->d->size[0] = 494;
  emxEnsureCapacity_real_T(&st, y->d, cptr, &kb_emlrtRTEI);
  cptr = y->colidx->size[0];
  y->colidx->size[0] = 495;
  emxEnsureCapacity_int32_T(&st, y->colidx, cptr, &ib_emlrtRTEI);
  y->colidx->data[0] = 1;
  cptr = y->rowidx->size[0];
  y->rowidx->size[0] = 494;
  emxEnsureCapacity_int32_T(&st, y->rowidx, cptr, &kb_emlrtRTEI);
  for (cptr = 0; cptr < 494; cptr++) {
    y->d->data[cptr] = 0.0;
    y->rowidx->data[cptr] = 0;
  }
  cptr = 0;
  for (c = 0; c < 494; c++) {
    while ((cptr + 1 <= 494) && (sortedIndices[cptr] == c + 1)) {
      y->rowidx->data[cptr] = sortedIndices[cptr];
      cptr++;
    }
    y->colidx->data[c + 1] = cptr + 1;
    y->d->data[c] = varargin_3[sortedIndices[c] - 1];
  }
  b_st.site = &gb_emlrtRSI;
  sparse_fillIn(y);
}

/* End of code generation (sparse1.c) */
