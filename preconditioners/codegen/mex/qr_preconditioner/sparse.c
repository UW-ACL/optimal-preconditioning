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
#include "CXSparseAPI.h"
#include "eml_int_forloop_overflow_check.h"
#include "qr_preconditioner_data.h"
#include "qr_preconditioner_emxutil.h"
#include "qr_preconditioner_types.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "cs.h"
#include "makeCXSparseMatrix.h"
#include "mwmathutil.h"
#include "solve_from_lu.h"
#include <stddef.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo q_emlrtRSI = {
    1482,                 /* lineNo */
    "sparse/spallocLike", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo r_emlrtRSI = {
    176,             /* lineNo */
    "sparse/sparse", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo hb_emlrtRSI = {
    391,                /* lineNo */
    "sparse/transpose", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo ib_emlrtRSI = {
    17,                    /* lineNo */
    "sparse/locTranspose", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/locTranspose.m" /* pathName */
};

static emlrtRSInfo pb_emlrtRSI = {
    20,                               /* lineNo */
    "eml_int_forloop_overflow_check", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/eml/"
    "eml_int_forloop_overflow_check.m" /* pathName */
};

static emlrtRSInfo gc_emlrtRSI = {
    302,            /* lineNo */
    "sparse/times", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo hc_emlrtRSI = {
    194,            /* lineNo */
    "sparse/binOp", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/binOp.m" /* pathName */
};

static emlrtRSInfo ic_emlrtRSI = {
    204,            /* lineNo */
    "sparse/binOp", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/binOp.m" /* pathName */
};

static emlrtRSInfo jc_emlrtRSI = {
    206,            /* lineNo */
    "sparse/binOp", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/binOp.m" /* pathName */
};

static emlrtRSInfo
    kc_emlrtRSI =
        {
            18,      /* lineNo */
            "spfun", /* fcnName */
            "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/sparfun/"
            "spfun.m" /* pathName */
};

static emlrtRSInfo lc_emlrtRSI = {
    462,                /* lineNo */
    "sparse/spfunImpl", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo mc_emlrtRSI = {
    465,                /* lineNo */
    "sparse/spfunImpl", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo nc_emlrtRSI = {
    468,                /* lineNo */
    "sparse/spfunImpl", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo pc_emlrtRSI = {
    14,              /* lineNo */
    "sparse/fillIn", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/fillIn.m" /* pathName */
};

static emlrtRSInfo qc_emlrtRSI = {
    437,           /* lineNo */
    "scalarBinOp", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/binOp.m" /* pathName */
};

static emlrtRSInfo rc_emlrtRSI = {
    1456,              /* lineNo */
    "sparse/mldivide", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo tc_emlrtRSI = {
    160,                         /* lineNo */
    "CXSparseAPI/iteratedSolve", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "CXSparseAPI.m" /* pathName */
};

static emlrtRSInfo uc_emlrtRSI = {
    291,                      /* lineNo */
    "CXSparseAPI/iteratedLU", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "CXSparseAPI.m" /* pathName */
};

static emlrtRSInfo vc_emlrtRSI = {
    312,                      /* lineNo */
    "CXSparseAPI/iteratedLU", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "CXSparseAPI.m" /* pathName */
};

static emlrtRSInfo wc_emlrtRSI = {
    316,                      /* lineNo */
    "CXSparseAPI/iteratedLU", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "CXSparseAPI.m" /* pathName */
};

static emlrtRSInfo xc_emlrtRSI = {
    328,                      /* lineNo */
    "CXSparseAPI/iteratedLU", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "CXSparseAPI.m" /* pathName */
};

static emlrtRSInfo yc_emlrtRSI = {
    335,                      /* lineNo */
    "CXSparseAPI/iteratedLU", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "CXSparseAPI.m" /* pathName */
};

static emlrtRSInfo ad_emlrtRSI = {
    340,                      /* lineNo */
    "CXSparseAPI/iteratedLU", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "CXSparseAPI.m" /* pathName */
};

static emlrtRTEInfo c_emlrtRTEI = {
    1629,              /* lineNo */
    9,                 /* colNo */
    "assertValidSize", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo d_emlrtRTEI = {
    178,             /* lineNo */
    39,              /* colNo */
    "sparse/sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo g_emlrtRTEI = {
    1632,              /* lineNo */
    31,                /* colNo */
    "assertValidSize", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo h_emlrtRTEI = {
    460,                /* lineNo */
    34,                 /* colNo */
    "sparse/spfunImpl", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo t_emlrtRTEI = {
    1482,     /* lineNo */
    13,       /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo u_emlrtRTEI = {
    193,      /* lineNo */
    42,       /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo v_emlrtRTEI = {
    391,      /* lineNo */
    13,       /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo w_emlrtRTEI = {
    203,     /* lineNo */
    9,       /* colNo */
    "binOp", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/binOp.m" /* pName */
};

static emlrtRTEInfo x_emlrtRTEI = {
    459,      /* lineNo */
    12,       /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo y_emlrtRTEI = {
    302,      /* lineNo */
    13,       /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo ab_emlrtRTEI = {
    125,     /* lineNo */
    5,       /* colNo */
    "binOp", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/binOp.m" /* pName */
};

static emlrtRTEInfo db_emlrtRTEI = {
    1456,     /* lineNo */
    13,       /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo eb_emlrtRTEI = {
    335,           /* lineNo */
    32,            /* colNo */
    "CXSparseAPI", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "CXSparseAPI.m" /* pName */
};

/* Function Definitions */
int32_T b_sparse_spallocLike(const emlrtStack *sp, emxArray_real_T *s_d,
                             emxArray_int32_T *s_colidx,
                             emxArray_int32_T *s_rowidx)
{
  emlrtStack st;
  real_T *s_d_data;
  int32_T c;
  int32_T *s_colidx_data;
  int32_T *s_rowidx_data;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &q_emlrtRSI;
  c = s_d->size[0];
  s_d->size[0] = 1;
  emxEnsureCapacity_real_T(&st, s_d, c, &t_emlrtRTEI);
  s_d_data = s_d->data;
  s_d_data[0] = 0.0;
  c = s_colidx->size[0];
  s_colidx->size[0] = 197;
  emxEnsureCapacity_int32_T(&st, s_colidx, c, &u_emlrtRTEI);
  s_colidx_data = s_colidx->data;
  s_colidx_data[0] = 1;
  c = s_rowidx->size[0];
  s_rowidx->size[0] = 1;
  emxEnsureCapacity_int32_T(&st, s_rowidx, c, &t_emlrtRTEI);
  s_rowidx_data = s_rowidx->data;
  s_rowidx_data[0] = 0;
  for (c = 0; c < 196; c++) {
    s_colidx_data[c + 1] = 1;
    s_colidx_data[c] = 1;
  }
  s_colidx_data[196] = 1;
  return 1;
}

int32_T b_sparse_transpose(const emlrtStack *sp, const emxArray_real_T *this_d,
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
  int32_T c;
  int32_T idx;
  int32_T k;
  int32_T y_maxnz;
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
  st.site = &hb_emlrtRSI;
  b_st.site = &ib_emlrtRSI;
  c_st.site = &r_emlrtRSI;
  idx = this_colidx_data[this_colidx->size[0] - 1];
  k = idx - 1;
  if (idx - 1 < 0) {
    emlrtErrorWithMessageIdR2018a(&c_st, &c_emlrtRTEI,
                                  "Coder:toolbox:SparseNegativeSize",
                                  "Coder:toolbox:SparseNegativeSize", 0);
  }
  if (idx - 1 < 0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI,
                                  "Coder:toolbox:SparseNzmaxTooSmall",
                                  "Coder:toolbox:SparseNzmaxTooSmall", 0);
  }
  y_maxnz = muIntScalarMax_sint32(k, 1);
  k = y_d->size[0];
  y_d->size[0] = y_maxnz;
  emxEnsureCapacity_real_T(&b_st, y_d, k, &v_emlrtRTEI);
  y_d_data = y_d->data;
  k = y_rowidx->size[0];
  y_rowidx->size[0] = y_maxnz;
  emxEnsureCapacity_int32_T(&b_st, y_rowidx, k, &v_emlrtRTEI);
  y_rowidx_data = y_rowidx->data;
  for (k = 0; k < y_maxnz; k++) {
    y_d_data[k] = 0.0;
    y_rowidx_data[k] = 0;
  }
  k = y_colidx->size[0];
  y_colidx->size[0] = 197;
  emxEnsureCapacity_int32_T(&st, y_colidx, k, &v_emlrtRTEI);
  y_colidx_data = y_colidx->data;
  for (k = 0; k < 197; k++) {
    y_colidx_data[k] = 0;
  }
  for (k = 0; k <= idx - 2; k++) {
    y_colidx_data[this_rowidx_data[k]]++;
  }
  y_colidx_data[0] = 1;
  for (k = 0; k < 196; k++) {
    y_colidx_data[k + 1] += y_colidx_data[k];
    counts[k] = 0;
  }
  for (c = 0; c < 196; c++) {
    for (idx = this_colidx_data[c] - 1; idx + 1 < this_colidx_data[c + 1];
         idx++) {
      int32_T outridx;
      k = counts[this_rowidx_data[idx] - 1];
      outridx = (k + y_colidx_data[this_rowidx_data[idx] - 1]) - 1;
      y_d_data[outridx] = this_d_data[idx];
      y_rowidx_data[outridx] = c + 1;
      counts[this_rowidx_data[idx] - 1] = k + 1;
    }
  }
  return y_maxnz;
}

int32_T sparse_mldivide(const emlrtStack *sp, const emxArray_real_T *A_d,
                        const emxArray_int32_T *A_colidx,
                        const emxArray_int32_T *A_rowidx,
                        const emxArray_int32_T *b_colidx,
                        const emxArray_int32_T *b_rowidx, emxArray_real_T *y_d,
                        emxArray_int32_T *y_colidx, emxArray_int32_T *y_rowidx)
{
  cs_di *cxA;
  cs_din *N;
  cs_dis *S;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  emxArray_int32_T *rowidxt;
  emxArray_int32_T *s_rowidx;
  emxArray_real_T *dt;
  real_T tmp[196];
  const real_T *A_d_data;
  real_T *dt_data;
  real_T *y_d_data;
  const int32_T *A_colidx_data;
  const int32_T *A_rowidx_data;
  const int32_T *b_colidx_data;
  const int32_T *b_rowidx_data;
  int32_T i;
  int32_T k;
  int32_T nzRhs;
  int32_T nz_tmp;
  int32_T y_maxnz;
  int32_T *rowidxt_data;
  int32_T *s_rowidx_data;
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
  b_rowidx_data = b_rowidx->data;
  b_colidx_data = b_colidx->data;
  A_rowidx_data = A_rowidx->data;
  A_colidx_data = A_colidx->data;
  A_d_data = A_d->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &rc_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &sc_emlrtRSI;
  cxA = makeCXSparseMatrix(A_colidx_data[A_colidx->size[0] - 1] - 1, 196, 196,
                           &A_colidx_data[0], &A_rowidx_data[0], &A_d_data[0]);
  S = cs_di_sqr(2, cxA, 0);
  N = cs_di_lu(cxA, S, 1);
  cs_di_spfree(cxA);
  if (N == NULL) {
    c_st.site = &vc_emlrtRSI;
    warning(&c_st);
    cs_di_sfree(S);
    cs_di_nfree(N);
    c_st.site = &wc_emlrtRSI;
    y_maxnz = CXSparseAPI_iteratedQR(&c_st, A_d, A_colidx, A_rowidx, b_colidx,
                                     b_rowidx, y_d, y_colidx, y_rowidx);
  } else {
    c_st.site = &xc_emlrtRSI;
    y_maxnz = b_sparse_spallocLike(&c_st, y_d, y_colidx, y_rowidx);
    y_rowidx_data = y_rowidx->data;
    y_colidx_data = y_colidx->data;
    y_d_data = y_d->data;
    emxInit_int32_T(&b_st, &s_rowidx, &eb_emlrtRTEI);
    emxInit_int32_T(&b_st, &rowidxt, &bb_emlrtRTEI);
    emxInit_real_T(&b_st, &dt, 1, &cb_emlrtRTEI);
    for (i = 0; i < 196; i++) {
      int32_T cend;
      int32_T nz;
      int32_T nzColAlloc_tmp;
      c_st.site = &yc_emlrtRSI;
      d_st.site = &fd_emlrtRSI;
      e_st.site = &gd_emlrtRSI;
      cend = b_colidx_data[i + 1] - b_colidx_data[i];
      f_st.site = &hd_emlrtRSI;
      sparse_spallocLike(&f_st, cend, dt, rowidxt, s_rowidx);
      s_rowidx_data = s_rowidx->data;
      rowidxt_data = rowidxt->data;
      dt_data = dt->data;
      if (cend != 0) {
        for (k = 0; k < cend; k++) {
          dt_data[k] = 1.0;
          s_rowidx_data[k] = b_rowidx_data[(b_colidx_data[i] + k) - 1];
        }
        rowidxt_data[1] = rowidxt_data[0] + cend;
      }
      memset(&tmp[0], 0, 196U * sizeof(real_T));
      cend = rowidxt_data[1] - 1;
      nz_tmp = rowidxt_data[0];
      for (nzRhs = nz_tmp; nzRhs <= cend; nzRhs++) {
        tmp[s_rowidx_data[nzRhs - 1] - 1] = dt_data[nzRhs - 1];
      }
      solve_from_lu_di(N, S, (double *)&tmp[0], 196);
      c_st.site = &ad_emlrtRSI;
      d_st.site = &jd_emlrtRSI;
      e_st.site = &kd_emlrtRSI;
      nz_tmp = y_colidx_data[y_colidx->size[0] - 1];
      nz = nz_tmp - 1;
      nzColAlloc_tmp = y_colidx_data[i + 1];
      cend = nzColAlloc_tmp - y_colidx_data[i];
      nzRhs = 0;
      for (k = 0; k < 196; k++) {
        if (!(tmp[k] == 0.0)) {
          nzRhs++;
        }
      }
      if (cend < nzRhs) {
        int32_T extraCol;
        extraCol = nzRhs - cend;
        cend = (y_maxnz - nz_tmp) + 1;
        if (cend < extraCol) {
          int32_T outIdx;
          cend = (y_maxnz + extraCol) - cend;
          outIdx = y_colidx_data[i];
          nz_tmp = rowidxt->size[0];
          rowidxt->size[0] = y_rowidx->size[0];
          emxEnsureCapacity_int32_T(&e_st, rowidxt, nz_tmp, &bb_emlrtRTEI);
          rowidxt_data = rowidxt->data;
          nzRhs = y_rowidx->size[0];
          for (nz_tmp = 0; nz_tmp < nzRhs; nz_tmp++) {
            rowidxt_data[nz_tmp] = y_rowidx_data[nz_tmp];
          }
          nz_tmp = dt->size[0];
          dt->size[0] = y_d->size[0];
          emxEnsureCapacity_real_T(&e_st, dt, nz_tmp, &cb_emlrtRTEI);
          dt_data = dt->data;
          nzRhs = y_d->size[0];
          for (nz_tmp = 0; nz_tmp < nzRhs; nz_tmp++) {
            dt_data[nz_tmp] = y_d_data[nz_tmp];
          }
          cend = muIntScalarMin_sint32(cend, 38416);
          if (cend <= 1) {
            y_maxnz = 1;
          } else {
            y_maxnz = cend;
          }
          nz_tmp = y_rowidx->size[0];
          y_rowidx->size[0] = y_maxnz;
          emxEnsureCapacity_int32_T(&e_st, y_rowidx, nz_tmp, &db_emlrtRTEI);
          y_rowidx_data = y_rowidx->data;
          nz_tmp = y_d->size[0];
          y_d->size[0] = y_maxnz;
          emxEnsureCapacity_real_T(&e_st, y_d, nz_tmp, &db_emlrtRTEI);
          y_d_data = y_d->data;
          for (nz_tmp = 0; nz_tmp < y_maxnz; nz_tmp++) {
            y_rowidx_data[nz_tmp] = 0;
            y_d_data[nz_tmp] = 0.0;
          }
          for (k = 0; k <= outIdx - 2; k++) {
            y_rowidx_data[k] = rowidxt_data[k];
            y_d_data[k] = dt_data[k];
          }
          for (k = nzColAlloc_tmp; k <= nz; k++) {
            cend = (k + extraCol) - 1;
            y_rowidx_data[cend] = rowidxt_data[k - 1];
            y_d_data[cend] = dt_data[k - 1];
          }
        } else {
          cend = (nzColAlloc_tmp + extraCol) - 1;
          nzRhs = nz_tmp - nzColAlloc_tmp;
          if (nzRhs > 0) {
            memmove((void *)&y_rowidx_data[cend],
                    (void *)&y_rowidx_data[nzColAlloc_tmp - 1],
                    (uint32_T)((size_t)nzRhs * sizeof(int32_T)));
            memmove((void *)&y_d_data[cend],
                    (void *)&y_d_data[nzColAlloc_tmp - 1],
                    (uint32_T)((size_t)nzRhs * sizeof(real_T)));
          }
        }
        cend = y_colidx_data[i] - 1;
        for (k = 0; k < 196; k++) {
          real_T d;
          d = tmp[k];
          if (d != 0.0) {
            y_rowidx_data[cend] = k + 1;
            y_d_data[cend] = d;
            cend++;
          }
        }
        nz_tmp = i + 2;
        for (k = nz_tmp; k < 198; k++) {
          y_colidx_data[k - 1] += extraCol;
        }
      } else {
        int32_T outIdx;
        outIdx = y_colidx_data[i] - 1;
        for (k = 0; k < 196; k++) {
          real_T d;
          d = tmp[k];
          if (d != 0.0) {
            y_rowidx_data[outIdx] = k + 1;
            y_d_data[outIdx] = d;
            outIdx++;
          }
        }
        cend -= nzRhs;
        if (cend > 0) {
          nzRhs = nz_tmp - nzColAlloc_tmp;
          if (nzRhs > 0) {
            memmove((void *)&y_rowidx_data[outIdx],
                    (void *)&y_rowidx_data[nzColAlloc_tmp - 1],
                    (uint32_T)((size_t)nzRhs * sizeof(int32_T)));
            memmove((void *)&y_d_data[outIdx],
                    (void *)&y_d_data[nzColAlloc_tmp - 1],
                    (uint32_T)((size_t)nzRhs * sizeof(real_T)));
          }
          nz_tmp = i + 2;
          for (k = nz_tmp; k < 198; k++) {
            y_colidx_data[k - 1] -= cend;
          }
        }
      }
    }
    emxFree_real_T(&b_st, &dt);
    emxFree_int32_T(&b_st, &rowidxt);
    emxFree_int32_T(&b_st, &s_rowidx);
    cs_di_sfree(S);
    cs_di_nfree(N);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
  return y_maxnz;
}

void sparse_spallocLike(const emlrtStack *sp, int32_T nzmax,
                        emxArray_real_T *s_d, emxArray_int32_T *s_colidx,
                        emxArray_int32_T *s_rowidx)
{
  emlrtStack b_st;
  emlrtStack st;
  real_T *s_d_data;
  int32_T i;
  int32_T numalloc;
  int32_T *s_colidx_data;
  int32_T *s_rowidx_data;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &q_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &r_emlrtRSI;
  if (nzmax < 0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &c_emlrtRTEI,
                                  "Coder:toolbox:SparseNegativeSize",
                                  "Coder:toolbox:SparseNegativeSize", 0);
  }
  numalloc = muIntScalarMax_sint32(nzmax, 1);
  i = s_d->size[0];
  s_d->size[0] = numalloc;
  emxEnsureCapacity_real_T(&st, s_d, i, &t_emlrtRTEI);
  s_d_data = s_d->data;
  i = s_colidx->size[0];
  s_colidx->size[0] = 2;
  emxEnsureCapacity_int32_T(&st, s_colidx, i, &u_emlrtRTEI);
  s_colidx_data = s_colidx->data;
  i = s_rowidx->size[0];
  s_rowidx->size[0] = numalloc;
  emxEnsureCapacity_int32_T(&st, s_rowidx, i, &t_emlrtRTEI);
  s_rowidx_data = s_rowidx->data;
  for (i = 0; i < numalloc; i++) {
    s_d_data[i] = 0.0;
    s_rowidx_data[i] = 0;
  }
  s_colidx_data[0] = 1;
  s_colidx_data[1] = 1;
}

int32_T sparse_times(const emlrtStack *sp, real_T a, const emxArray_real_T *b_d,
                     const emxArray_int32_T *b_colidx,
                     const emxArray_int32_T *b_rowidx, emxArray_real_T *s_d,
                     emxArray_int32_T *s_colidx, emxArray_int32_T *s_rowidx)
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
  int32_T currRowIdx;
  int32_T i;
  int32_T idx;
  int32_T row;
  int32_T s_maxnz;
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
  st.site = &gc_emlrtRSI;
  if (a * 0.0 == 0.0) {
    int32_T ctr;
    b_st.site = &hc_emlrtRSI;
    c_st.site = &kc_emlrtRSI;
    row = b_colidx_data[b_colidx->size[0] - 1];
    ctr = row - 1;
    if (row - 1 < 1) {
      currRowIdx = 0;
    } else {
      currRowIdx = row - 1;
    }
    emxInit_real_T(&c_st, &S, 1, &x_emlrtRTEI);
    i = S->size[0];
    S->size[0] = currRowIdx;
    emxEnsureCapacity_real_T(&c_st, S, i, &x_emlrtRTEI);
    S_data = S->data;
    for (i = 0; i < currRowIdx; i++) {
      S_data[i] = a * b_d_data[i];
    }
    if (S->size[0] != row - 1) {
      emlrtErrorWithMessageIdR2018a(&c_st, &h_emlrtRTEI, "MATLAB:samelen",
                                    "MATLAB:samelen", 0);
    }
    d_st.site = &lc_emlrtRSI;
    e_st.site = &q_emlrtRSI;
    f_st.site = &r_emlrtRSI;
    if (row - 1 < 0) {
      emlrtErrorWithMessageIdR2018a(&f_st, &c_emlrtRTEI,
                                    "Coder:toolbox:SparseNegativeSize",
                                    "Coder:toolbox:SparseNegativeSize", 0);
    }
    if (row - 1 >= MAX_int32_T) {
      emlrtErrorWithMessageIdR2018a(
          &f_st, &g_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
          "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
    }
    if (row - 1 < 0) {
      emlrtErrorWithMessageIdR2018a(&e_st, &d_emlrtRTEI,
                                    "Coder:toolbox:SparseNzmaxTooSmall",
                                    "Coder:toolbox:SparseNzmaxTooSmall", 0);
    }
    s_maxnz = muIntScalarMax_sint32(ctr, 1);
    i = s_d->size[0];
    s_d->size[0] = s_maxnz;
    emxEnsureCapacity_real_T(&e_st, s_d, i, &y_emlrtRTEI);
    s_d_data = s_d->data;
    i = s_rowidx->size[0];
    s_rowidx->size[0] = s_maxnz;
    emxEnsureCapacity_int32_T(&e_st, s_rowidx, i, &y_emlrtRTEI);
    s_rowidx_data = s_rowidx->data;
    for (i = 0; i < s_maxnz; i++) {
      s_d_data[i] = 0.0;
      s_rowidx_data[i] = 0;
    }
    if (row - 1 < 1) {
      currRowIdx = 1;
    } else {
      currRowIdx = row;
    }
    for (i = 0; i <= currRowIdx - 2; i++) {
      s_rowidx_data[i] = b_rowidx_data[i];
    }
    i = s_colidx->size[0];
    s_colidx->size[0] = b_colidx->size[0];
    emxEnsureCapacity_int32_T(&c_st, s_colidx, i, &y_emlrtRTEI);
    s_colidx_data = s_colidx->data;
    currRowIdx = b_colidx->size[0];
    for (i = 0; i < currRowIdx; i++) {
      s_colidx_data[i] = b_colidx_data[i];
    }
    d_st.site = &mc_emlrtRSI;
    if (row - 1 > 2147483646) {
      e_st.site = &pb_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }
    for (currRowIdx = 0; currRowIdx <= row - 2; currRowIdx++) {
      s_d_data[currRowIdx] = S_data[currRowIdx];
    }
    emxFree_real_T(&c_st, &S);
    d_st.site = &nc_emlrtRSI;
    idx = 1;
    i = b_colidx->size[0];
    e_st.site = &pc_emlrtRSI;
    for (row = 0; row <= i - 2; row++) {
      ctr = s_colidx_data[row];
      s_colidx_data[row] = idx;
      while (ctr < s_colidx_data[row + 1]) {
        real_T val;
        currRowIdx = s_rowidx_data[ctr - 1];
        val = s_d_data[ctr - 1];
        ctr++;
        if (val != 0.0) {
          s_d_data[idx - 1] = val;
          s_rowidx_data[idx - 1] = currRowIdx;
          idx++;
        }
      }
    }
    s_colidx_data[s_colidx->size[0] - 1] = idx;
  } else {
    int32_T ctr;
    emxInit_real_T(&st, &S, 2, &ab_emlrtRTEI);
    i = S->size[0] * S->size[1];
    S->size[0] = 196;
    S->size[1] = 196;
    emxEnsureCapacity_real_T(&st, S, i, &w_emlrtRTEI);
    S_data = S->data;
    for (i = 0; i < 38416; i++) {
      S_data[i] = rtNaN;
    }
    b_st.site = &ic_emlrtRSI;
    c_st.site = &qc_emlrtRSI;
    for (currRowIdx = 0; currRowIdx < 196; currRowIdx++) {
      i = b_colidx_data[currRowIdx];
      ctr = b_colidx_data[currRowIdx + 1] - 1;
      for (idx = i; idx <= ctr; idx++) {
        S_data[(b_rowidx_data[idx - 1] + S->size[0] * currRowIdx) - 1] =
            a * b_d_data[idx - 1];
      }
    }
    b_st.site = &jc_emlrtRSI;
    c_st.site = &bb_emlrtRSI;
    ctr = 0;
    for (currRowIdx = 0; currRowIdx < 38416; currRowIdx++) {
      if (S_data[currRowIdx % 196 + S->size[0] * (currRowIdx / 196)] != 0.0) {
        ctr++;
      }
    }
    s_maxnz = muIntScalarMax_sint32(ctr, 1);
    i = s_d->size[0];
    s_d->size[0] = s_maxnz;
    emxEnsureCapacity_real_T(&c_st, s_d, i, &y_emlrtRTEI);
    s_d_data = s_d->data;
    for (i = 0; i < s_maxnz; i++) {
      s_d_data[i] = 0.0;
    }
    i = s_colidx->size[0];
    s_colidx->size[0] = 197;
    emxEnsureCapacity_int32_T(&c_st, s_colidx, i, &y_emlrtRTEI);
    s_colidx_data = s_colidx->data;
    for (i = 0; i < 197; i++) {
      s_colidx_data[i] = 0;
    }
    s_colidx_data[0] = 1;
    i = s_rowidx->size[0];
    s_rowidx->size[0] = s_maxnz;
    emxEnsureCapacity_int32_T(&c_st, s_rowidx, i, &y_emlrtRTEI);
    s_rowidx_data = s_rowidx->data;
    for (i = 0; i < s_maxnz; i++) {
      s_rowidx_data[i] = 0;
    }
    s_rowidx_data[0] = 1;
    ctr = 0;
    for (currRowIdx = 0; currRowIdx < 196; currRowIdx++) {
      for (row = 0; row < 196; row++) {
        real_T val;
        val = S_data[row + S->size[0] * currRowIdx];
        if (val != 0.0) {
          s_rowidx_data[ctr] = row + 1;
          s_d_data[ctr] = val;
          ctr++;
        }
      }
      s_colidx_data[currRowIdx + 1] = ctr + 1;
    }
    emxFree_real_T(&c_st, &S);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
  return s_maxnz;
}

void sparse_transpose(const emlrtStack *sp, const emxArray_real_T *this_d,
                      const emxArray_int32_T *this_colidx,
                      const emxArray_int32_T *this_rowidx, emxArray_real_T *y_d,
                      emxArray_int32_T *y_colidx, emxArray_int32_T *y_rowidx)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const real_T *this_d_data;
  real_T *y_d_data;
  int32_T counts[196];
  const int32_T *this_colidx_data;
  const int32_T *this_rowidx_data;
  int32_T c;
  int32_T numalloc;
  int32_T outridx;
  int32_T outridx_tmp;
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
  st.site = &hb_emlrtRSI;
  b_st.site = &ib_emlrtRSI;
  c_st.site = &r_emlrtRSI;
  outridx_tmp = this_colidx_data[this_colidx->size[0] - 1];
  if (outridx_tmp - 1 < 0) {
    emlrtErrorWithMessageIdR2018a(&c_st, &c_emlrtRTEI,
                                  "Coder:toolbox:SparseNegativeSize",
                                  "Coder:toolbox:SparseNegativeSize", 0);
  }
  if (outridx_tmp - 1 < 0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI,
                                  "Coder:toolbox:SparseNzmaxTooSmall",
                                  "Coder:toolbox:SparseNzmaxTooSmall", 0);
  }
  if (outridx_tmp - 1 >= 1) {
    numalloc = outridx_tmp - 2;
  } else {
    numalloc = 0;
  }
  outridx = y_d->size[0];
  y_d->size[0] = numalloc + 1;
  emxEnsureCapacity_real_T(&b_st, y_d, outridx, &v_emlrtRTEI);
  y_d_data = y_d->data;
  outridx = y_rowidx->size[0];
  y_rowidx->size[0] = numalloc + 1;
  emxEnsureCapacity_int32_T(&b_st, y_rowidx, outridx, &v_emlrtRTEI);
  y_rowidx_data = y_rowidx->data;
  for (outridx = 0; outridx <= numalloc; outridx++) {
    y_d_data[outridx] = 0.0;
    y_rowidx_data[outridx] = 0;
  }
  outridx = y_colidx->size[0];
  y_colidx->size[0] = 197;
  emxEnsureCapacity_int32_T(&st, y_colidx, outridx, &v_emlrtRTEI);
  y_colidx_data = y_colidx->data;
  for (outridx = 0; outridx < 197; outridx++) {
    y_colidx_data[outridx] = 0;
  }
  for (numalloc = 0; numalloc <= outridx_tmp - 2; numalloc++) {
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
      outridx_tmp = counts[this_rowidx_data[numalloc] - 1];
      outridx =
          (outridx_tmp + y_colidx_data[this_rowidx_data[numalloc] - 1]) - 1;
      y_d_data[outridx] = this_d_data[numalloc];
      y_rowidx_data[outridx] = c + 1;
      counts[this_rowidx_data[numalloc] - 1] = outridx_tmp + 1;
    }
  }
}

/* End of code generation (sparse.c) */
