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
#include "hypersphere_data.h"
#include "hypersphere_emxutil.h"
#include "hypersphere_types.h"
#include "introsort.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo db_emlrtRTEI =
    {
        13,       /* lineNo */
        1,        /* colNo */
        "sparse", /* fName */
        "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/sparfun/"
        "sparse.m" /* pName */
};

/* Function Definitions */
void sparse(const emlrtStack *sp, const real_T varargin_3[196], b_sparse *y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T sortedIndices[196];
  int32_T c;
  int32_T cptr;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ob_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  for (cptr = 0; cptr < 196; cptr++) {
    sortedIndices[cptr] = cptr + 1;
  }
  b_st.site = &pb_emlrtRSI;
  c_st.site = &qb_emlrtRSI;
  c_introsort(&c_st, sortedIndices);
  cptr = y->d->size[0];
  y->d->size[0] = 196;
  emxEnsureCapacity_real_T(&st, y->d, cptr, &db_emlrtRTEI);
  y->maxnz = 196;
  cptr = y->colidx->size[0];
  y->colidx->size[0] = 197;
  emxEnsureCapacity_int32_T(&st, y->colidx, cptr, &p_emlrtRTEI);
  y->colidx->data[0] = 1;
  cptr = y->rowidx->size[0];
  y->rowidx->size[0] = 196;
  emxEnsureCapacity_int32_T(&st, y->rowidx, cptr, &db_emlrtRTEI);
  for (cptr = 0; cptr < 196; cptr++) {
    y->d->data[cptr] = 0.0;
    y->rowidx->data[cptr] = 0;
  }
  cptr = 0;
  for (c = 0; c < 196; c++) {
    while ((cptr + 1 <= 196) && (sortedIndices[cptr] == c + 1)) {
      y->rowidx->data[cptr] = sortedIndices[cptr];
      cptr++;
    }
    y->colidx->data[c + 1] = cptr + 1;
    y->d->data[c] = varargin_3[sortedIndices[c] - 1];
  }
  b_st.site = &y_emlrtRSI;
  sparse_fillIn(y);
}

/* End of code generation (sparse1.c) */
