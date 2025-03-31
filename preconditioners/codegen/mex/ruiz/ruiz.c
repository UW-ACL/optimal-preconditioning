/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ruiz.c
 *
 * Code generation for function 'ruiz'
 *
 */

/* Include files */
#include "ruiz.h"
#include "eml_int_forloop_overflow_check.h"
#include "fillIn.h"
#include "horzcat.h"
#include "introsort.h"
#include "locBsearch.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "ruiz_data.h"
#include "ruiz_emxutil.h"
#include "ruiz_types.h"
#include "sparse.h"
#include "sumMatrixIncludeNaN.h"
#include "tic.h"
#include "toc.h"
#include "vertcat.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    7,      /* lineNo */
    "ruiz", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pathName
                                                                         */
};

static emlrtRSInfo b_emlrtRSI = {
    14,     /* lineNo */
    "ruiz", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pathName
                                                                         */
};

static emlrtRSInfo c_emlrtRSI = {
    18,     /* lineNo */
    "ruiz", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pathName
                                                                         */
};

static emlrtRSInfo d_emlrtRSI = {
    30,     /* lineNo */
    "ruiz", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pathName
                                                                         */
};

static emlrtRSInfo e_emlrtRSI = {
    33,     /* lineNo */
    "ruiz", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pathName
                                                                         */
};

static emlrtRSInfo f_emlrtRSI = {
    36,     /* lineNo */
    "ruiz", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pathName
                                                                         */
};

static emlrtRSInfo g_emlrtRSI = {
    38,     /* lineNo */
    "ruiz", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pathName
                                                                         */
};

static emlrtRSInfo h_emlrtRSI = {
    39,     /* lineNo */
    "ruiz", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pathName
                                                                         */
};

static emlrtRSInfo i_emlrtRSI = {
    41,     /* lineNo */
    "ruiz", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pathName
                                                                         */
};

static emlrtRSInfo j_emlrtRSI = {
    42,     /* lineNo */
    "ruiz", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pathName
                                                                         */
};

static emlrtRSInfo k_emlrtRSI = {
    43,     /* lineNo */
    "ruiz", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pathName
                                                                         */
};

static emlrtRSInfo l_emlrtRSI = {
    44,     /* lineNo */
    "ruiz", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pathName
                                                                         */
};

static emlrtRSInfo m_emlrtRSI = {
    46,     /* lineNo */
    "ruiz", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pathName
                                                                         */
};

static emlrtRSInfo n_emlrtRSI = {
    48,     /* lineNo */
    "ruiz", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pathName
                                                                         */
};

static emlrtRSInfo o_emlrtRSI = {
    51,     /* lineNo */
    "ruiz", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pathName
                                                                         */
};

static emlrtRSInfo p_emlrtRSI = {
    60,     /* lineNo */
    "ruiz", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pathName
                                                                         */
};

static emlrtRSInfo q_emlrtRSI = {
    61,     /* lineNo */
    "ruiz", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pathName
                                                                         */
};

static emlrtRSInfo r_emlrtRSI = {
    63,     /* lineNo */
    "ruiz", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pathName
                                                                         */
};

static emlrtRSInfo
    y_emlrtRSI =
        {
            33,      /* lineNo */
            "speye", /* fcnName */
            "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/sparfun/"
            "speye.m" /* pathName */
};

static emlrtRSInfo ab_emlrtRSI = {
    8,                /* lineNo */
    "sparse/eyeLike", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/eyeLike.m" /* pathName */
};

static emlrtRSInfo eb_emlrtRSI = {
    219,             /* lineNo */
    "sparse/sparse", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo wb_emlrtRSI = {
    20,                        /* lineNo */
    "sparse/parenReference2D", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/parenReference2D.m" /* pathName */
};

static emlrtRSInfo yb_emlrtRSI = {
    93,                        /* lineNo */
    "parenReference2DColumns", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/parenReference2D.m" /* pathName */
};

static emlrtRSInfo bc_emlrtRSI = {
    275,           /* lineNo */
    "sparse/full", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo cc_emlrtRSI = {
    138,             /* lineNo */
    "sparse/sparse", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo dc_emlrtRSI = {
    1672,          /* lineNo */
    "locSortrows", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo id_emlrtRSI = {
    53,            /* lineNo */
    "sparse/diag", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/diag.m" /* pathName */
};

static emlrtRSInfo jd_emlrtRSI = {
    136,          /* lineNo */
    "matrixDiag", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/diag.m" /* pathName */
};

static emlrtRSInfo
    kd_emlrtRSI =
        {
            49,     /* lineNo */
            "mean", /* fcnName */
            "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/datafun/"
            "mean.m" /* pathName */
};

static emlrtRSInfo ld_emlrtRSI = {
    74,                      /* lineNo */
    "combineVectorElements", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/datafun/private/"
    "combineVectorElements.m" /* pathName */
};

static emlrtRSInfo rd_emlrtRSI = {
    18,              /* lineNo */
    "sparse/mtimes", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/mtimes.m" /* pathName */
};

static emlrtRTEInfo emlrtRTEI = {
    28,     /* lineNo */
    18,     /* colNo */
    "ruiz", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pName
                                                                         */
};

static emlrtRTEInfo b_emlrtRTEI = {
    92,                        /* lineNo */
    1,                         /* colNo */
    "parenReference2DColumns", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/parenReference2D.m" /* pName */
};

static emlrtRTEInfo o_emlrtRTEI = {
    1501,     /* lineNo */
    39,       /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo p_emlrtRTEI = {
    19,     /* lineNo */
    1,      /* colNo */
    "ruiz", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pName
                                                                         */
};

static emlrtRTEInfo q_emlrtRTEI = {
    21,     /* lineNo */
    1,      /* colNo */
    "ruiz", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pName
                                                                         */
};

static emlrtRTEInfo r_emlrtRTEI = {
    36,     /* lineNo */
    5,      /* colNo */
    "ruiz", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pName
                                                                         */
};

static emlrtRTEInfo t_emlrtRTEI = {
    53,     /* lineNo */
    5,      /* colNo */
    "diag", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/diag.m" /* pName */
};

static emlrtRTEInfo u_emlrtRTEI = {
    51,     /* lineNo */
    9,      /* colNo */
    "ruiz", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pName
                                                                         */
};

static emlrtRTEInfo v_emlrtRTEI = {
    18,     /* lineNo */
    1,      /* colNo */
    "ruiz", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pName
                                                                         */
};

static emlrtRTEInfo w_emlrtRTEI = {
    39,     /* lineNo */
    5,      /* colNo */
    "ruiz", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pName
                                                                         */
};

static emlrtRTEInfo x_emlrtRTEI = {
    46,     /* lineNo */
    29,     /* colNo */
    "ruiz", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pName
                                                                         */
};

static emlrtRTEInfo y_emlrtRTEI = {
    30,     /* lineNo */
    5,      /* colNo */
    "ruiz", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pName
                                                                         */
};

static emlrtRTEInfo ab_emlrtRTEI = {
    41,     /* lineNo */
    5,      /* colNo */
    "ruiz", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pName
                                                                         */
};

static emlrtRTEInfo bb_emlrtRTEI = {
    41,     /* lineNo */
    14,     /* colNo */
    "ruiz", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pName
                                                                         */
};

/* Function Definitions */
void ruiz(const emlrtStack *sp, const sparse P, const real_T q[298],
          const sparse H, const real_T h[196], const struct0_T *ps,
          sparse *P_ruiz, real_T q_ruiz[298], sparse *H_ruiz,
          real_T h_ruiz[196], real_T *c, sparse *D, sparse *E,
          real_T *ruiz_iters, real_T *ruiz_time)
{
  b_sparse diag_del;
  b_sparse expl_temp;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_int32_T *E_temp_colidx;
  emxArray_int32_T *E_temp_rowidx;
  emxArray_int32_T *S_colidx;
  emxArray_int32_T *S_rowidx;
  emxArray_int32_T *y_colidx;
  emxArray_int32_T *y_rowidx;
  emxArray_real_T *E_temp_d;
  emxArray_real_T *S_d;
  emxArray_real_T *y_d;
  sparse b_expl_temp;
  sparse c_expl_temp;
  real_T y[494];
  real_T b_q_ruiz[298];
  real_T b_h_ruiz[196];
  real_T *S_d_data;
  real_T *y_d_data;
  int32_T b_k;
  int32_T b_ruiz_iters;
  int32_T cend;
  int32_T cptr;
  int32_T i;
  int32_T k;
  int32_T *S_colidx_data;
  int32_T *S_rowidx_data;
  int32_T *y_colidx_data;
  int32_T *y_rowidx_data;
  boolean_T exitg1;
  boolean_T found;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  /* RUIZ */
  /*    [P_RUIZ, q_RUIZ, H_RUIZ, h_RUIZ, c, D, E, RUIZ_ITERS, RUIZ_TIME] =
   * RUIZ(P, q, H, h, PS) */
  /*  */
  /*  Modified Ruiz equilibration [Algorithm 2, Stellato et al. (OSQP)] */
  st.site = &emlrtRSI;
  tic(&st);
  st.site = &b_emlrtRSI;
  b_st.site = &x_emlrtRSI;
  *c = 1.0;
  st.site = &c_emlrtRSI;
  b_st.site = &y_emlrtRSI;
  c_st.site = &ab_emlrtRSI;
  emxInit_real_T(&c_st, &S_d, 1, &v_emlrtRTEI);
  emxInit_int32_T(&c_st, &S_colidx, &v_emlrtRTEI);
  emxInit_int32_T(&c_st, &S_rowidx, &v_emlrtRTEI);
  i = S_d->size[0];
  S_d->size[0] = 494;
  emxEnsureCapacity_real_T(&c_st, S_d, i, &m_emlrtRTEI);
  S_d_data = S_d->data;
  i = S_rowidx->size[0];
  S_rowidx->size[0] = 494;
  emxEnsureCapacity_int32_T(&c_st, S_rowidx, i, &n_emlrtRTEI);
  S_rowidx_data = S_rowidx->data;
  i = S_colidx->size[0];
  S_colidx->size[0] = 495;
  emxEnsureCapacity_int32_T(&c_st, S_colidx, i, &o_emlrtRTEI);
  S_colidx_data = S_colidx->data;
  for (cptr = 0; cptr < 494; cptr++) {
    S_d_data[cptr] = 1.0;
    S_rowidx_data[cptr] = cptr + 1;
  }
  S_colidx_data[0] = 1;
  for (cend = 0; cend < 493; cend++) {
    S_colidx_data[cend + 1] = cend + 2;
  }
  S_colidx_data[494] = 495;
  emxCopyStruct_sparse(sp, P_ruiz, &P, &p_emlrtRTEI);
  memcpy(&q_ruiz[0], &q[0], 298U * sizeof(real_T));
  emxCopyStruct_sparse(sp, H_ruiz, &H, &q_emlrtRTEI);
  memcpy(&h_ruiz[0], &h[0], 196U * sizeof(real_T));
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, ps->max_iters_ruiz, mxDOUBLE_CLASS,
                                (int32_T)ps->max_iters_ruiz, &emlrtRTEI,
                                (emlrtConstCTX)sp);
  *ruiz_iters = 1.0;
  b_ruiz_iters = 0;
  emxInitStruct_sparse(sp, &diag_del, &r_emlrtRTEI);
  emxInit_real_T(sp, &E_temp_d, 1, &w_emlrtRTEI);
  emxInit_int32_T(sp, &E_temp_colidx, &w_emlrtRTEI);
  emxInit_int32_T(sp, &E_temp_rowidx, &w_emlrtRTEI);
  emxInit_real_T(sp, &y_d, 1, &x_emlrtRTEI);
  emxInit_int32_T(sp, &y_colidx, &x_emlrtRTEI);
  emxInit_int32_T(sp, &y_rowidx, &x_emlrtRTEI);
  emxInitStruct_sparse(sp, &expl_temp, &y_emlrtRTEI);
  emxInitStruct_sparse1(sp, &b_expl_temp, &ab_emlrtRTEI);
  emxInitStruct_sparse1(sp, &c_expl_temp, &bb_emlrtRTEI);
  exitg1 = false;
  while ((!exitg1) && (b_ruiz_iters <= (int32_T)ps->max_iters_ruiz - 1)) {
    real_T del_vals[494];
    real_T absx;
    real_T b_y;
    real_T varargin_2;
    int32_T sortedIndices[494];
    *ruiz_iters = (real_T)b_ruiz_iters + 1.0;
    st.site = &d_emlrtRSI;
    sparse_transpose(&st, H_ruiz->d, H_ruiz->colidx, H_ruiz->rowidx, diag_del.d,
                     diag_del.colidx, diag_del.rowidx);
    st.site = &d_emlrtRSI;
    sparse_horzcat(&st, P_ruiz->d, P_ruiz->colidx, P_ruiz->rowidx, diag_del.d,
                   diag_del.colidx, diag_del.rowidx, y_d, y_colidx, y_rowidx);
    st.site = &d_emlrtRSI;
    b_sparse_horzcat(&st, H_ruiz->d, H_ruiz->colidx, H_ruiz->rowidx, diag_del.d,
                     diag_del.colidx, diag_del.rowidx);
    st.site = &d_emlrtRSI;
    sparse_vertcat(&st, y_d, y_colidx, y_rowidx, diag_del.d, diag_del.colidx,
                   diag_del.rowidx, &expl_temp);
    for (k = 0; k < 494; k++) {
      st.site = &e_emlrtRSI;
      b_st.site = &vb_emlrtRSI;
      c_st.site = &wb_emlrtRSI;
      i = expl_temp.colidx->data[k];
      cptr = expl_temp.colidx->data[k + 1] - expl_temp.colidx->data[k];
      if (cptr > 494) {
        emlrtErrorWithMessageIdR2018a(&c_st, &b_emlrtRTEI,
                                      "Coder:builtins:AssertionFailed",
                                      "Coder:builtins:AssertionFailed", 0);
      }
      d_st.site = &yb_emlrtRSI;
      b_sparse_spallocLike(&d_st, cptr, diag_del.d, diag_del.colidx,
                           diag_del.rowidx);
      if (cptr != 0) {
        for (b_k = 0; b_k < cptr; b_k++) {
          cend = (i + b_k) - 1;
          diag_del.d->data[b_k] = expl_temp.d->data[cend];
          diag_del.rowidx->data[b_k] = expl_temp.rowidx->data[cend];
        }
        diag_del.colidx->data[1] = diag_del.colidx->data[0] + cptr;
      }
      st.site = &e_emlrtRSI;
      memset(&y[0], 0, 494U * sizeof(real_T));
      cend = diag_del.colidx->data[1] - 1;
      cptr = diag_del.colidx->data[0];
      b_st.site = &bc_emlrtRSI;
      if ((diag_del.colidx->data[0] <= diag_del.colidx->data[1] - 1) &&
          (diag_del.colidx->data[1] - 1 > 2147483646)) {
        c_st.site = &ib_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }
      for (b_k = cptr; b_k <= cend; b_k++) {
        y[diag_del.rowidx->data[b_k - 1] - 1] = diag_del.d->data[b_k - 1];
      }
      b_y = 0.0;
      for (b_k = 0; b_k < 494; b_k++) {
        absx = muDoubleScalarAbs(y[b_k]);
        if (muDoubleScalarIsNaN(absx) || (absx > b_y)) {
          b_y = absx;
        }
      }
      st.site = &e_emlrtRSI;
      del_vals[k] = 1.0 / muDoubleScalarSqrt(b_y);
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    st.site = &f_emlrtRSI;
    b_st.site = &x_emlrtRSI;
    for (k = 0; k < 494; k++) {
      sortedIndices[k] = k + 1;
    }
    c_st.site = &cc_emlrtRSI;
    d_st.site = &dc_emlrtRSI;
    introsort(&d_st, sortedIndices);
    i = diag_del.d->size[0];
    diag_del.d->size[0] = 494;
    emxEnsureCapacity_real_T(&b_st, diag_del.d, i, &r_emlrtRTEI);
    i = diag_del.colidx->size[0];
    diag_del.colidx->size[0] = 495;
    emxEnsureCapacity_int32_T(&b_st, diag_del.colidx, i, &s_emlrtRTEI);
    diag_del.colidx->data[0] = 1;
    i = diag_del.rowidx->size[0];
    diag_del.rowidx->size[0] = 494;
    emxEnsureCapacity_int32_T(&b_st, diag_del.rowidx, i, &r_emlrtRTEI);
    for (i = 0; i < 494; i++) {
      diag_del.d->data[i] = 0.0;
      diag_del.rowidx->data[i] = 0;
    }
    cptr = 0;
    for (cend = 0; cend < 494; cend++) {
      while ((cptr + 1 <= 494) && (sortedIndices[cptr] == cend + 1)) {
        diag_del.rowidx->data[cptr] = sortedIndices[cptr];
        cptr++;
      }
      diag_del.colidx->data[cend + 1] = cptr + 1;
      diag_del.d->data[cend] = del_vals[sortedIndices[cend] - 1];
    }
    c_st.site = &eb_emlrtRSI;
    sparse_fillIn(&diag_del);
    st.site = &g_emlrtRSI;
    sparse_parenReference(&st, diag_del.d, diag_del.colidx, diag_del.rowidx,
                          y_d, y_colidx, y_rowidx);
    st.site = &h_emlrtRSI;
    b_sparse_parenReference(&st, diag_del.d, diag_del.colidx, diag_del.rowidx,
                            E_temp_d, E_temp_colidx, E_temp_rowidx);
    st.site = &i_emlrtRSI;
    sparse_mtimes(&st, y_d, y_colidx, y_rowidx, P_ruiz->d, P_ruiz->colidx,
                  P_ruiz->rowidx, &c_expl_temp);
    st.site = &i_emlrtRSI;
    sparse_mtimes(&st, c_expl_temp.d, c_expl_temp.colidx, c_expl_temp.rowidx,
                  y_d, y_colidx, y_rowidx, &b_expl_temp);
    memcpy(&b_q_ruiz[0], &q_ruiz[0], 298U * sizeof(real_T));
    st.site = &j_emlrtRSI;
    b_sparse_mtimes(&st, y_d, y_colidx, y_rowidx, b_q_ruiz, q_ruiz);
    st.site = &k_emlrtRSI;
    c_sparse_mtimes(&st, E_temp_d, E_temp_colidx, E_temp_rowidx, H_ruiz->d,
                    H_ruiz->colidx, H_ruiz->rowidx, &c_expl_temp);
    st.site = &k_emlrtRSI;
    c_sparse_mtimes(&st, c_expl_temp.d, c_expl_temp.colidx, c_expl_temp.rowidx,
                    y_d, y_colidx, y_rowidx, H_ruiz);
    memcpy(&b_h_ruiz[0], &h_ruiz[0], 196U * sizeof(real_T));
    st.site = &l_emlrtRSI;
    d_sparse_mtimes(&st, E_temp_d, E_temp_colidx, E_temp_rowidx, b_h_ruiz,
                    h_ruiz);
    st.site = &m_emlrtRSI;
    b_st.site = &id_emlrtRSI;
    cptr = b_expl_temp.colidx->data[b_expl_temp.colidx->size[0] - 1] - 1;
    c_st.site = &jd_emlrtRSI;
    b_sparse_spallocLike(&c_st, muIntScalarMin_sint32(298, cptr), y_d, y_colidx,
                         y_rowidx);
    y_rowidx_data = y_rowidx->data;
    y_d_data = y_d->data;
    cend = 0;
    for (b_k = 0; b_k < 298; b_k++) {
      cptr = sparse_locBsearch(b_expl_temp.rowidx, b_k + 1,
                               b_expl_temp.colidx->data[b_k],
                               b_expl_temp.colidx->data[b_k + 1], &found);
      if (found) {
        y_rowidx_data[cend] = b_k + 1;
        y_d_data[cend] = b_expl_temp.d->data[cptr - 1];
        cend++;
      }
    }
    i = y_colidx->size[0];
    y_colidx->size[0] = 2;
    emxEnsureCapacity_int32_T(&b_st, y_colidx, i, &t_emlrtRTEI);
    y_colidx_data = y_colidx->data;
    y_colidx_data[0] = 1;
    y_colidx_data[1] = cend + 1;
    st.site = &m_emlrtRSI;
    memset(&b_q_ruiz[0], 0, 298U * sizeof(real_T));
    cend = y_colidx_data[1] - 1;
    i = y_colidx_data[0];
    b_st.site = &bc_emlrtRSI;
    for (b_k = i; b_k <= cend; b_k++) {
      b_q_ruiz[y_rowidx_data[b_k - 1] - 1] = y_d_data[b_k - 1];
    }
    st.site = &m_emlrtRSI;
    b_st.site = &kd_emlrtRSI;
    c_st.site = &ld_emlrtRSI;
    b_y = sumColumnB(b_q_ruiz);
    varargin_2 = 0.0;
    for (k = 0; k < 298; k++) {
      absx = muDoubleScalarAbs(q_ruiz[k]);
      if (muDoubleScalarIsNaN(absx) || (absx > varargin_2)) {
        varargin_2 = absx;
      }
    }
    absx = 1.0 / muDoubleScalarMax(b_y / 298.0, varargin_2);
    st.site = &n_emlrtRSI;
    b_st.site = &rd_emlrtRSI;
    sparse_times(&b_st, absx, b_expl_temp.d, b_expl_temp.colidx,
                 b_expl_temp.rowidx, P_ruiz);
    for (i = 0; i < 298; i++) {
      q_ruiz[i] *= absx;
    }
    i = y_d->size[0];
    y_d->size[0] = S_d->size[0];
    emxEnsureCapacity_real_T(sp, y_d, i, &u_emlrtRTEI);
    y_d_data = y_d->data;
    cptr = S_d->size[0] - 1;
    for (i = 0; i <= cptr; i++) {
      y_d_data[i] = S_d_data[i];
    }
    i = y_colidx->size[0];
    y_colidx->size[0] = S_colidx->size[0];
    emxEnsureCapacity_int32_T(sp, y_colidx, i, &u_emlrtRTEI);
    y_colidx_data = y_colidx->data;
    cptr = S_colidx->size[0] - 1;
    for (i = 0; i <= cptr; i++) {
      y_colidx_data[i] = S_colidx_data[i];
    }
    i = y_rowidx->size[0];
    y_rowidx->size[0] = S_rowidx->size[0];
    emxEnsureCapacity_int32_T(sp, y_rowidx, i, &u_emlrtRTEI);
    y_rowidx_data = y_rowidx->data;
    cptr = S_rowidx->size[0] - 1;
    for (i = 0; i <= cptr; i++) {
      y_rowidx_data[i] = S_rowidx_data[i];
    }
    st.site = &o_emlrtRSI;
    e_sparse_mtimes(&st, diag_del.d, diag_del.colidx, diag_del.rowidx, y_d,
                    y_colidx, y_rowidx, S_d, S_colidx, S_rowidx);
    S_rowidx_data = S_rowidx->data;
    S_colidx_data = S_colidx->data;
    S_d_data = S_d->data;
    *c *= absx;
    b_y = 0.0;
    for (k = 0; k < 494; k++) {
      absx = 1.0 - del_vals[k];
      del_vals[k] = absx;
      absx = muDoubleScalarAbs(absx);
      if (muDoubleScalarIsNaN(absx) || (absx > b_y)) {
        b_y = absx;
      }
    }
    if (b_y <= ps->eps_ruiz) {
      exitg1 = true;
    } else {
      b_ruiz_iters++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
  }
  emxFreeStruct_sparse1(sp, &c_expl_temp);
  emxFreeStruct_sparse1(sp, &b_expl_temp);
  emxFreeStruct_sparse(sp, &expl_temp);
  emxFree_int32_T(sp, &y_rowidx);
  emxFree_int32_T(sp, &y_colidx);
  emxFree_real_T(sp, &y_d);
  emxFree_int32_T(sp, &E_temp_rowidx);
  emxFree_int32_T(sp, &E_temp_colidx);
  emxFree_real_T(sp, &E_temp_d);
  emxFreeStruct_sparse(sp, &diag_del);
  st.site = &p_emlrtRSI;
  D->maxnz = sparse_parenReference(&st, S_d, S_colidx, S_rowidx, D->d,
                                   D->colidx, D->rowidx);
  st.site = &q_emlrtRSI;
  E->maxnz = b_sparse_parenReference(&st, S_d, S_colidx, S_rowidx, E->d,
                                     E->colidx, E->rowidx);
  emxFree_int32_T(sp, &S_rowidx);
  emxFree_int32_T(sp, &S_colidx);
  emxFree_real_T(sp, &S_d);
  st.site = &r_emlrtRSI;
  *ruiz_time = 1000.0 * toc(&st);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (ruiz.c) */
