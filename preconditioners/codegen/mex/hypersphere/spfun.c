/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * spfun.c
 *
 * Code generation for function 'spfun'
 *
 */

/* Include files */
#include "spfun.h"
#include "eml_int_forloop_overflow_check.h"
#include "fillIn.h"
#include "hypersphere_data.h"
#include "hypersphere_emxutil.h"
#include "hypersphere_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo
    vd_emlrtRSI =
        {
            18,      /* lineNo */
            "spfun", /* fcnName */
            "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/sparfun/"
            "spfun.m" /* pathName */
};

static emlrtRSInfo wd_emlrtRSI = {
    462,                /* lineNo */
    "sparse/spfunImpl", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo xd_emlrtRSI = {
    465,                /* lineNo */
    "sparse/spfunImpl", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo yd_emlrtRSI = {
    468,                /* lineNo */
    "sparse/spfunImpl", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRTEInfo j_emlrtRTEI = {
    1632,              /* lineNo */
    31,                /* colNo */
    "assertValidSize", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo k_emlrtRTEI = {
    460,                /* lineNo */
    34,                 /* colNo */
    "sparse/spfunImpl", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo hb_emlrtRTEI = {
    459,      /* lineNo */
    12,       /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo
    ib_emlrtRTEI =
        {
            18,      /* lineNo */
            5,       /* colNo */
            "spfun", /* fName */
            "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/sparfun/"
            "spfun.m" /* pName */
};

/* Function Definitions */
void spfun(const emlrtStack *sp, real_T fun_workspace_sa,
           const emxArray_real_T *s_d, const emxArray_int32_T *s_colidx,
           const emxArray_int32_T *s_rowidx, b_sparse *y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_real_T *tmpd;
  const real_T *s_d_data;
  real_T *tmpd_data;
  const int32_T *s_colidx_data;
  const int32_T *s_rowidx_data;
  int32_T i;
  int32_T loop_ub;
  int32_T numalloc;
  int32_T nzs_tmp_tmp;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  s_rowidx_data = s_rowidx->data;
  s_colidx_data = s_colidx->data;
  s_d_data = s_d->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &vd_emlrtRSI;
  nzs_tmp_tmp = s_colidx_data[s_colidx->size[0] - 1];
  numalloc = nzs_tmp_tmp - 1;
  if (nzs_tmp_tmp - 1 < 1) {
    loop_ub = 0;
  } else {
    loop_ub = nzs_tmp_tmp - 1;
  }
  emxInit_real_T(&st, &tmpd, 1, &hb_emlrtRTEI);
  i = tmpd->size[0];
  tmpd->size[0] = loop_ub;
  emxEnsureCapacity_real_T(&st, tmpd, i, &hb_emlrtRTEI);
  tmpd_data = tmpd->data;
  for (i = 0; i < loop_ub; i++) {
    tmpd_data[i] = fun_workspace_sa * s_d_data[i];
  }
  if (tmpd->size[0] != nzs_tmp_tmp - 1) {
    emlrtErrorWithMessageIdR2018a(&st, &k_emlrtRTEI, "MATLAB:samelen",
                                  "MATLAB:samelen", 0);
  }
  b_st.site = &wd_emlrtRSI;
  c_st.site = &x_emlrtRSI;
  d_st.site = &ab_emlrtRSI;
  if (nzs_tmp_tmp - 1 < 0) {
    emlrtErrorWithMessageIdR2018a(&d_st, &e_emlrtRTEI,
                                  "Coder:toolbox:SparseNegativeSize",
                                  "Coder:toolbox:SparseNegativeSize", 0);
  }
  if (nzs_tmp_tmp - 1 >= MAX_int32_T) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &j_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
        "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
  }
  if (nzs_tmp_tmp - 1 < 0) {
    emlrtErrorWithMessageIdR2018a(&c_st, &f_emlrtRTEI,
                                  "Coder:toolbox:SparseNzmaxTooSmall",
                                  "Coder:toolbox:SparseNzmaxTooSmall", 0);
  }
  numalloc = muIntScalarMax_sint32(numalloc, 1);
  i = y->d->size[0];
  y->d->size[0] = numalloc;
  emxEnsureCapacity_real_T(&c_st, y->d, i, &ib_emlrtRTEI);
  y->maxnz = numalloc;
  i = y->colidx->size[0];
  y->colidx->size[0] = 299;
  emxEnsureCapacity_int32_T(&c_st, y->colidx, i, &p_emlrtRTEI);
  i = y->rowidx->size[0];
  y->rowidx->size[0] = numalloc;
  emxEnsureCapacity_int32_T(&c_st, y->rowidx, i, &ib_emlrtRTEI);
  for (i = 0; i < numalloc; i++) {
    y->d->data[i] = 0.0;
    y->rowidx->data[i] = 0;
  }
  for (numalloc = 0; numalloc < 298; numalloc++) {
    y->colidx->data[numalloc + 1] = 1;
  }
  for (numalloc = 0; numalloc < 298; numalloc++) {
    y->colidx->data[numalloc] = 1;
  }
  if (nzs_tmp_tmp - 1 < 1) {
    loop_ub = 1;
  } else {
    loop_ub = nzs_tmp_tmp;
  }
  for (i = 0; i <= loop_ub - 2; i++) {
    y->rowidx->data[i] = s_rowidx_data[i];
  }
  i = y->colidx->size[0];
  y->colidx->size[0] = s_colidx->size[0];
  emxEnsureCapacity_int32_T(&st, y->colidx, i, &ib_emlrtRTEI);
  loop_ub = s_colidx->size[0];
  for (i = 0; i < loop_ub; i++) {
    y->colidx->data[i] = s_colidx_data[i];
  }
  b_st.site = &xd_emlrtRSI;
  if (nzs_tmp_tmp - 1 > 2147483646) {
    c_st.site = &db_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  for (numalloc = 0; numalloc <= nzs_tmp_tmp - 2; numalloc++) {
    y->d->data[numalloc] = tmpd_data[numalloc];
  }
  emxFree_real_T(&st, &tmpd);
  b_st.site = &yd_emlrtRSI;
  b_sparse_fillIn(y);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (spfun.c) */
