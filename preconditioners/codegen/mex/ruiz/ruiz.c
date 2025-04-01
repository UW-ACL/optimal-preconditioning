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
#include "locBsearch.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "ruiz_data.h"
#include "ruiz_emxutil.h"
#include "ruiz_types.h"
#include "sparse.h"
#include "sparse1.h"
#include "speye.h"
#include "sqrt.h"
#include "sum.h"
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
    37,     /* lineNo */
    "ruiz", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pathName
                                                                         */
};

static emlrtRSInfo g_emlrtRSI = {
    39,     /* lineNo */
    "ruiz", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pathName
                                                                         */
};

static emlrtRSInfo h_emlrtRSI = {
    40,     /* lineNo */
    "ruiz", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pathName
                                                                         */
};

static emlrtRSInfo i_emlrtRSI = {
    42,     /* lineNo */
    "ruiz", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pathName
                                                                         */
};

static emlrtRSInfo j_emlrtRSI = {
    43,     /* lineNo */
    "ruiz", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pathName
                                                                         */
};

static emlrtRSInfo k_emlrtRSI = {
    44,     /* lineNo */
    "ruiz", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pathName
                                                                         */
};

static emlrtRSInfo l_emlrtRSI = {
    45,     /* lineNo */
    "ruiz", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pathName
                                                                         */
};

static emlrtRSInfo m_emlrtRSI = {
    47,     /* lineNo */
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
    49,     /* lineNo */
    "ruiz", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pathName
                                                                         */
};

static emlrtRSInfo p_emlrtRSI = {
    53,     /* lineNo */
    "ruiz", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pathName
                                                                         */
};

static emlrtRSInfo q_emlrtRSI = {
    56,     /* lineNo */
    "ruiz", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pathName
                                                                         */
};

static emlrtRSInfo r_emlrtRSI = {
    65,     /* lineNo */
    "ruiz", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pathName
                                                                         */
};

static emlrtRSInfo s_emlrtRSI = {
    66,     /* lineNo */
    "ruiz", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pathName
                                                                         */
};

static emlrtRSInfo t_emlrtRSI = {
    68,     /* lineNo */
    "ruiz", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pathName
                                                                         */
};

static emlrtRSInfo yb_emlrtRSI = {
    20,                        /* lineNo */
    "sparse/parenReference2D", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/parenReference2D.m" /* pathName */
};

static emlrtRSInfo ac_emlrtRSI = {
    81,                        /* lineNo */
    "parenReference2DColumns", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/parenReference2D.m" /* pathName */
};

static emlrtRSInfo bc_emlrtRSI = {
    93,                        /* lineNo */
    "parenReference2DColumns", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/parenReference2D.m" /* pathName */
};

static emlrtRSInfo cc_emlrtRSI = {
    104,                       /* lineNo */
    "parenReference2DColumns", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/parenReference2D.m" /* pathName */
};

static emlrtRSInfo dc_emlrtRSI = {
    360,          /* lineNo */
    "sparse/abs", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo ec_emlrtRSI = {
    459,                /* lineNo */
    "sparse/spfunImpl", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo ic_emlrtRSI = {
    18,    /* lineNo */
    "abs", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/elfun/abs.m" /* pathName
                                                                          */
};

static emlrtRSInfo jc_emlrtRSI = {
    74,                    /* lineNo */
    "applyScalarFunction", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "applyScalarFunction.m" /* pathName */
};

static emlrtRSInfo kc_emlrtRSI = {
    15,    /* lineNo */
    "max", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/datafun/max.m" /* pathName
                                                                            */
};

static emlrtRSInfo lc_emlrtRSI = {
    44,         /* lineNo */
    "minOrMax", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" /* pathName */
};

static emlrtRSInfo mc_emlrtRSI = {
    79,        /* lineNo */
    "maximum", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" /* pathName */
};

static emlrtRSInfo nc_emlrtRSI = {
    225,             /* lineNo */
    "unaryMinOrMax", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo oc_emlrtRSI = {
    289,                     /* lineNo */
    "unaryMinOrMaxDispatch", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo pc_emlrtRSI = {
    693,              /* lineNo */
    "minOrMaxSparse", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo qc_emlrtRSI = {
    756,                          /* lineNo */
    "minOrMaxSparseColumnReduce", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo ie_emlrtRSI = {
    53,            /* lineNo */
    "sparse/diag", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/diag.m" /* pathName */
};

static emlrtRSInfo je_emlrtRSI = {
    136,          /* lineNo */
    "matrixDiag", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/diag.m" /* pathName */
};

static emlrtRSInfo re_emlrtRSI = {
    18,              /* lineNo */
    "sparse/mtimes", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/mtimes.m" /* pathName */
};

static emlrtRTEInfo b_emlrtRTEI = {
    92,                        /* lineNo */
    1,                         /* colNo */
    "parenReference2DColumns", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/parenReference2D.m" /* pName */
};

static emlrtRTEInfo c_emlrtRTEI = {
    28,     /* lineNo */
    18,     /* colNo */
    "ruiz", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pName
                                                                         */
};

static emlrtRTEInfo m_emlrtRTEI = {
    19,     /* lineNo */
    1,      /* colNo */
    "ruiz", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pName
                                                                         */
};

static emlrtRTEInfo n_emlrtRTEI = {
    21,     /* lineNo */
    1,      /* colNo */
    "ruiz", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pName
                                                                         */
};

static emlrtRTEInfo o_emlrtRTEI = {
    47,     /* lineNo */
    5,      /* colNo */
    "ruiz", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pName
                                                                         */
};

static emlrtRTEInfo p_emlrtRTEI = {
    30,                    /* lineNo */
    21,                    /* colNo */
    "applyScalarFunction", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "applyScalarFunction.m" /* pName */
};

static emlrtRTEInfo q_emlrtRTEI = {
    33,     /* lineNo */
    46,     /* colNo */
    "ruiz", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pName
                                                                         */
};

static emlrtRTEInfo r_emlrtRTEI = {
    56,     /* lineNo */
    9,      /* colNo */
    "ruiz", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pName
                                                                         */
};

static emlrtRTEInfo s_emlrtRTEI = {
    15,    /* lineNo */
    5,     /* colNo */
    "max", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/datafun/max.m" /* pName
                                                                            */
};

static emlrtRTEInfo t_emlrtRTEI = {
    33,     /* lineNo */
    37,     /* colNo */
    "ruiz", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pName
                                                                         */
};

static emlrtRTEInfo u_emlrtRTEI = {
    39,     /* lineNo */
    5,      /* colNo */
    "ruiz", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pName
                                                                         */
};

static emlrtRTEInfo v_emlrtRTEI = {
    40,     /* lineNo */
    5,      /* colNo */
    "ruiz", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pName
                                                                         */
};

static emlrtRTEInfo w_emlrtRTEI = {
    33,     /* lineNo */
    42,     /* colNo */
    "ruiz", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pName
                                                                         */
};

static emlrtRTEInfo y_emlrtRTEI = {
    56,     /* lineNo */
    5,      /* colNo */
    "ruiz", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pName
                                                                         */
};

static emlrtRTEInfo ab_emlrtRTEI = {
    42,     /* lineNo */
    5,      /* colNo */
    "ruiz", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pName
                                                                         */
};

static emlrtRTEInfo bb_emlrtRTEI = {
    30,     /* lineNo */
    5,      /* colNo */
    "ruiz", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pName
                                                                         */
};

static emlrtRTEInfo cb_emlrtRTEI = {
    42,     /* lineNo */
    14,     /* colNo */
    "ruiz", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/ruiz.m" /* pName
                                                                         */
};

/* Function Definitions */
void ruiz(const emlrtStack *sp, const b_sparse P, const real_T q[298],
          const b_sparse H, const real_T h[196], const struct0_T *ps,
          b_sparse *P_ruiz, real_T q_ruiz[298], b_sparse *H_ruiz,
          real_T h_ruiz[196], real_T *c, b_sparse *D, b_sparse *E,
          real_T *ruiz_iters, real_T *ruiz_time)
{
  b_sparse b_expl_temp;
  b_sparse d_expl_temp;
  c_sparse P_ruiz_diag;
  c_sparse c_expl_temp;
  c_sparse expl_temp;
  c_sparse varargin_1;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  emxArray_int32_T *D_temp_colidx;
  emxArray_int32_T *D_temp_rowidx;
  emxArray_int32_T *E_temp_colidx;
  emxArray_int32_T *E_temp_rowidx;
  emxArray_int8_T *maxval_colidx;
  emxArray_real_T *E_temp_d;
  emxArray_real_T *tmpd;
  real_T b_q_ruiz[298];
  real_T b_h_ruiz[196];
  real_T *tmpd_data;
  int32_T b_k;
  int32_T b_ruiz_iters;
  int32_T i;
  int32_T k;
  int32_T nzs_tmp_tmp;
  int32_T *D_temp_colidx_data;
  int8_T *maxval_colidx_data;
  boolean_T exitg1;
  boolean_T p;
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
  /* RUIZ */
  /*    [P_RUIZ, q_RUIZ, H_RUIZ, h_RUIZ, c, D, E, RUIZ_ITERS, RUIZ_TIME] =
   * RUIZ(P, q, H, h, PS) */
  /*  */
  /*  Modified Ruiz equilibration [Algorithm 2, Stellato et al. (OSQP)] */
  st.site = &emlrtRSI;
  tic(&st);
  st.site = &b_emlrtRSI;
  b_st.site = &ab_emlrtRSI;
  *c = 1.0;
  emxInitStruct_sparse(sp, &expl_temp, &y_emlrtRTEI);
  st.site = &c_emlrtRSI;
  speye(&st, expl_temp.d, expl_temp.colidx, expl_temp.rowidx);
  emxCopyStruct_sparse(sp, P_ruiz, &P, &m_emlrtRTEI);
  memcpy(&q_ruiz[0], &q[0], 298U * sizeof(real_T));
  emxCopyStruct_sparse(sp, H_ruiz, &H, &n_emlrtRTEI);
  memcpy(&h_ruiz[0], &h[0], 196U * sizeof(real_T));
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, ps->max_iters_ruiz, mxDOUBLE_CLASS,
                                (int32_T)ps->max_iters_ruiz, &c_emlrtRTEI,
                                (emlrtConstCTX)sp);
  *ruiz_iters = 1.0;
  b_ruiz_iters = 0;
  emxInit_int32_T(sp, &D_temp_colidx, &u_emlrtRTEI);
  emxInit_int32_T(sp, &D_temp_rowidx, &u_emlrtRTEI);
  emxInit_real_T(sp, &E_temp_d, 1, &v_emlrtRTEI);
  emxInit_int32_T(sp, &E_temp_colidx, &v_emlrtRTEI);
  emxInit_int32_T(sp, &E_temp_rowidx, &v_emlrtRTEI);
  emxInitStruct_sparse(sp, &P_ruiz_diag, &o_emlrtRTEI);
  emxInit_int8_T(sp, &maxval_colidx, &w_emlrtRTEI);
  emxInitStruct_sparse(sp, &varargin_1, &q_emlrtRTEI);
  emxInit_real_T(sp, &tmpd, 1, &x_emlrtRTEI);
  emxInitStruct_sparse1(sp, &b_expl_temp, &ab_emlrtRTEI);
  emxInitStruct_sparse(sp, &c_expl_temp, &bb_emlrtRTEI);
  emxInitStruct_sparse1(sp, &d_expl_temp, &cb_emlrtRTEI);
  exitg1 = false;
  while ((!exitg1) && (b_ruiz_iters <= (int32_T)ps->max_iters_ruiz - 1)) {
    real_T del_vals[494];
    real_T absx;
    real_T colEx;
    real_T sqrt_max_abs_M_col_k;
    int32_T ncol;
    int32_T xend;
    *ruiz_iters = (real_T)b_ruiz_iters + 1.0;
    st.site = &d_emlrtRSI;
    sparse_transpose(&st, H_ruiz->d, H_ruiz->colidx, H_ruiz->rowidx,
                     P_ruiz_diag.d, P_ruiz_diag.colidx, P_ruiz_diag.rowidx);
    st.site = &d_emlrtRSI;
    sparse_horzcat(&st, P_ruiz->d, P_ruiz->colidx, P_ruiz->rowidx,
                   P_ruiz_diag.d, P_ruiz_diag.colidx, P_ruiz_diag.rowidx,
                   varargin_1.d, varargin_1.colidx, varargin_1.rowidx);
    st.site = &d_emlrtRSI;
    b_sparse_horzcat(&st, H_ruiz->d, H_ruiz->colidx, H_ruiz->rowidx,
                     P_ruiz_diag.d, P_ruiz_diag.colidx, P_ruiz_diag.rowidx);
    st.site = &d_emlrtRSI;
    sparse_vertcat(&st, varargin_1.d, varargin_1.colidx, varargin_1.rowidx,
                   P_ruiz_diag.d, P_ruiz_diag.colidx, P_ruiz_diag.rowidx,
                   &c_expl_temp);
    for (k = 0; k < 494; k++) {
      st.site = &e_emlrtRSI;
      b_st.site = &e_emlrtRSI;
      c_st.site = &xb_emlrtRSI;
      d_st.site = &yb_emlrtRSI;
      e_st.site = &ac_emlrtRSI;
      i = c_expl_temp.colidx->data[k];
      ncol = c_expl_temp.colidx->data[k + 1] - c_expl_temp.colidx->data[k];
      if (ncol > 494) {
        emlrtErrorWithMessageIdR2018a(&d_st, &b_emlrtRTEI,
                                      "Coder:builtins:AssertionFailed",
                                      "Coder:builtins:AssertionFailed", 0);
      }
      e_st.site = &bc_emlrtRSI;
      b_sparse_spallocLike(&e_st, ncol, P_ruiz_diag.d, P_ruiz_diag.colidx,
                           P_ruiz_diag.rowidx);
      if (ncol != 0) {
        e_st.site = &cc_emlrtRSI;
        for (b_k = 0; b_k < ncol; b_k++) {
          xend = (i + b_k) - 1;
          P_ruiz_diag.d->data[b_k] = c_expl_temp.d->data[xend];
          P_ruiz_diag.rowidx->data[b_k] = c_expl_temp.rowidx->data[xend];
        }
        P_ruiz_diag.colidx->data[1] = P_ruiz_diag.colidx->data[0] + ncol;
      }
      b_st.site = &e_emlrtRSI;
      c_st.site = &dc_emlrtRSI;
      nzs_tmp_tmp = P_ruiz_diag.colidx->data[P_ruiz_diag.colidx->size[0] - 1];
      if (nzs_tmp_tmp - 1 < 1) {
        i = 0;
      } else {
        i = nzs_tmp_tmp - 1;
      }
      d_st.site = &ec_emlrtRSI;
      e_st.site = &ic_emlrtRSI;
      xend = tmpd->size[0];
      tmpd->size[0] = i;
      emxEnsureCapacity_real_T(&e_st, tmpd, xend, &p_emlrtRTEI);
      tmpd_data = tmpd->data;
      f_st.site = &jc_emlrtRSI;
      if (i > 2147483646) {
        g_st.site = &kb_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }
      for (b_k = 0; b_k < i; b_k++) {
        tmpd_data[b_k] = muDoubleScalarAbs(P_ruiz_diag.d->data[b_k]);
      }
      if (tmpd->size[0] != nzs_tmp_tmp - 1) {
        emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI, "MATLAB:samelen",
                                      "MATLAB:samelen", 0);
      }
      d_st.site = &fc_emlrtRSI;
      b_sparse_spallocLike(&d_st, nzs_tmp_tmp - 1, varargin_1.d,
                           varargin_1.colidx, varargin_1.rowidx);
      if (nzs_tmp_tmp - 1 < 1) {
        ncol = 1;
      } else {
        ncol = nzs_tmp_tmp;
      }
      for (i = 0; i <= ncol - 2; i++) {
        varargin_1.rowidx->data[i] = P_ruiz_diag.rowidx->data[i];
      }
      i = varargin_1.colidx->size[0];
      varargin_1.colidx->size[0] = P_ruiz_diag.colidx->size[0];
      emxEnsureCapacity_int32_T(&c_st, varargin_1.colidx, i, &q_emlrtRTEI);
      ncol = P_ruiz_diag.colidx->size[0];
      for (i = 0; i < ncol; i++) {
        varargin_1.colidx->data[i] = P_ruiz_diag.colidx->data[i];
      }
      d_st.site = &gc_emlrtRSI;
      if (nzs_tmp_tmp - 1 > 2147483646) {
        e_st.site = &kb_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }
      for (b_k = 0; b_k <= nzs_tmp_tmp - 2; b_k++) {
        varargin_1.d->data[b_k] = tmpd_data[b_k];
      }
      d_st.site = &hc_emlrtRSI;
      b_sparse_fillIn(&varargin_1);
      b_st.site = &kc_emlrtRSI;
      c_st.site = &lc_emlrtRSI;
      d_st.site = &mc_emlrtRSI;
      e_st.site = &nc_emlrtRSI;
      f_st.site = &oc_emlrtRSI;
      g_st.site = &pc_emlrtRSI;
      sqrt_max_abs_M_col_k = 0.0;
      xend = varargin_1.colidx->data[1] - 1;
      ncol = varargin_1.colidx->data[1] - varargin_1.colidx->data[0];
      if (ncol != 0) {
        colEx = 0.0;
        if (varargin_1.colidx->data[1] - 1 >= varargin_1.colidx->data[0]) {
          colEx = varargin_1.d->data[varargin_1.colidx->data[0] - 1];
          i = varargin_1.colidx->data[0] + 1;
          for (b_k = i; b_k <= xend; b_k++) {
            absx = varargin_1.d->data[b_k - 1];
            if (muDoubleScalarIsNaN(absx)) {
              p = false;
            } else if (muDoubleScalarIsNaN(colEx)) {
              p = true;
            } else {
              p = (colEx < absx);
            }
            if (p) {
              colEx = absx;
            }
          }
        }
        if (ncol < 1) {
          if ((!muDoubleScalarIsNaN(colEx)) && (colEx > 0.0)) {
            sqrt_max_abs_M_col_k = colEx;
          }
        } else {
          sqrt_max_abs_M_col_k = colEx;
        }
      }
      h_st.site = &qc_emlrtRSI;
      i_st.site = &ab_emlrtRSI;
      i = P_ruiz_diag.d->size[0];
      P_ruiz_diag.d->size[0] = 1;
      emxEnsureCapacity_real_T(&i_st, P_ruiz_diag.d, i, &s_emlrtRTEI);
      P_ruiz_diag.d->data[0] = 0.0;
      i = maxval_colidx->size[0];
      maxval_colidx->size[0] = 2;
      emxEnsureCapacity_int8_T(&i_st, maxval_colidx, i, &s_emlrtRTEI);
      maxval_colidx_data = maxval_colidx->data;
      maxval_colidx_data[0] = 1;
      maxval_colidx_data[1] = 1;
      if (sqrt_max_abs_M_col_k != 0.0) {
        P_ruiz_diag.d->data[0] = sqrt_max_abs_M_col_k;
        maxval_colidx_data[1] = 2;
      }
      i = P_ruiz_diag.colidx->size[0];
      P_ruiz_diag.colidx->size[0] = 2;
      emxEnsureCapacity_int32_T(sp, P_ruiz_diag.colidx, i, &t_emlrtRTEI);
      for (i = 0; i < 2; i++) {
        P_ruiz_diag.colidx->data[i] = maxval_colidx_data[i];
      }
      i = P_ruiz_diag.rowidx->size[0];
      P_ruiz_diag.rowidx->size[0] = 1;
      emxEnsureCapacity_int32_T(sp, P_ruiz_diag.rowidx, i, &t_emlrtRTEI);
      P_ruiz_diag.rowidx->data[0] = 1;
      st.site = &e_emlrtRSI;
      b_sqrt(&st, &P_ruiz_diag);
      st.site = &e_emlrtRSI;
      sqrt_max_abs_M_col_k =
          sparse_full(&st, P_ruiz_diag.d, P_ruiz_diag.colidx);
      del_vals[k] = 1.0 / sqrt_max_abs_M_col_k;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    st.site = &f_emlrtRSI;
    sparse(&st, del_vals, &c_expl_temp);
    st.site = &g_emlrtRSI;
    sparse_parenReference(&st, c_expl_temp.d, c_expl_temp.colidx,
                          c_expl_temp.rowidx, tmpd, D_temp_colidx,
                          D_temp_rowidx);
    st.site = &h_emlrtRSI;
    b_sparse_parenReference(&st, c_expl_temp.d, c_expl_temp.colidx,
                            c_expl_temp.rowidx, E_temp_d, E_temp_colidx,
                            E_temp_rowidx);
    st.site = &i_emlrtRSI;
    sparse_mtimes(&st, tmpd, D_temp_colidx, D_temp_rowidx, P_ruiz->d,
                  P_ruiz->colidx, P_ruiz->rowidx, &d_expl_temp);
    st.site = &i_emlrtRSI;
    sparse_mtimes(&st, d_expl_temp.d, d_expl_temp.colidx, d_expl_temp.rowidx,
                  tmpd, D_temp_colidx, D_temp_rowidx, &b_expl_temp);
    memcpy(&b_q_ruiz[0], &q_ruiz[0], 298U * sizeof(real_T));
    st.site = &j_emlrtRSI;
    b_sparse_mtimes(&st, tmpd, D_temp_colidx, D_temp_rowidx, b_q_ruiz, q_ruiz);
    st.site = &k_emlrtRSI;
    c_sparse_mtimes(&st, E_temp_d, E_temp_colidx, E_temp_rowidx, H_ruiz->d,
                    H_ruiz->colidx, H_ruiz->rowidx, &d_expl_temp);
    st.site = &k_emlrtRSI;
    c_sparse_mtimes(&st, d_expl_temp.d, d_expl_temp.colidx, d_expl_temp.rowidx,
                    tmpd, D_temp_colidx, D_temp_rowidx, H_ruiz);
    memcpy(&b_h_ruiz[0], &h_ruiz[0], 196U * sizeof(real_T));
    st.site = &l_emlrtRSI;
    d_sparse_mtimes(&st, E_temp_d, E_temp_colidx, E_temp_rowidx, b_h_ruiz,
                    h_ruiz);
    st.site = &m_emlrtRSI;
    b_st.site = &ie_emlrtRSI;
    ncol = b_expl_temp.colidx->data[b_expl_temp.colidx->size[0] - 1] - 1;
    c_st.site = &je_emlrtRSI;
    b_sparse_spallocLike(&c_st, muIntScalarMin_sint32(298, ncol), P_ruiz_diag.d,
                         P_ruiz_diag.colidx, P_ruiz_diag.rowidx);
    xend = 1;
    for (nzs_tmp_tmp = 0; nzs_tmp_tmp < 298; nzs_tmp_tmp++) {
      ncol = sparse_locBsearch(b_expl_temp.rowidx, nzs_tmp_tmp + 1,
                               b_expl_temp.colidx->data[nzs_tmp_tmp],
                               b_expl_temp.colidx->data[nzs_tmp_tmp + 1], &p);
      if (p) {
        P_ruiz_diag.d->data[xend - 1] = b_expl_temp.d->data[ncol - 1];
        xend++;
      }
    }
    i = P_ruiz_diag.colidx->size[0];
    P_ruiz_diag.colidx->size[0] = 2;
    emxEnsureCapacity_int32_T(&b_st, P_ruiz_diag.colidx, i, &o_emlrtRTEI);
    P_ruiz_diag.colidx->data[0] = 1;
    P_ruiz_diag.colidx->data[1] = xend;
    st.site = &n_emlrtRSI;
    sum(&st, P_ruiz_diag.d, P_ruiz_diag.colidx, tmpd, D_temp_colidx,
        D_temp_rowidx);
    st.site = &o_emlrtRSI;
    b_st.site = &re_emlrtRSI;
    sparse_times(&b_st, tmpd, D_temp_colidx, D_temp_rowidx, &varargin_1);
    st.site = &o_emlrtRSI;
    sqrt_max_abs_M_col_k = sparse_full(&st, varargin_1.d, varargin_1.colidx);
    colEx = 0.0;
    for (k = 0; k < 298; k++) {
      absx = muDoubleScalarAbs(q_ruiz[k]);
      if (muDoubleScalarIsNaN(absx) || (absx > colEx)) {
        colEx = absx;
      }
    }
    sqrt_max_abs_M_col_k = 1.0 / muDoubleScalarMax(sqrt_max_abs_M_col_k, colEx);
    st.site = &p_emlrtRSI;
    b_st.site = &re_emlrtRSI;
    b_sparse_times(&b_st, sqrt_max_abs_M_col_k, b_expl_temp.d,
                   b_expl_temp.colidx, b_expl_temp.rowidx, P_ruiz);
    for (i = 0; i < 298; i++) {
      q_ruiz[i] *= sqrt_max_abs_M_col_k;
    }
    i = tmpd->size[0];
    tmpd->size[0] = expl_temp.d->size[0];
    emxEnsureCapacity_real_T(sp, tmpd, i, &r_emlrtRTEI);
    tmpd_data = tmpd->data;
    ncol = expl_temp.d->size[0] - 1;
    for (i = 0; i <= ncol; i++) {
      tmpd_data[i] = expl_temp.d->data[i];
    }
    i = D_temp_colidx->size[0];
    D_temp_colidx->size[0] = expl_temp.colidx->size[0];
    emxEnsureCapacity_int32_T(sp, D_temp_colidx, i, &r_emlrtRTEI);
    D_temp_colidx_data = D_temp_colidx->data;
    ncol = expl_temp.colidx->size[0] - 1;
    for (i = 0; i <= ncol; i++) {
      D_temp_colidx_data[i] = expl_temp.colidx->data[i];
    }
    i = D_temp_rowidx->size[0];
    D_temp_rowidx->size[0] = expl_temp.rowidx->size[0];
    emxEnsureCapacity_int32_T(sp, D_temp_rowidx, i, &r_emlrtRTEI);
    D_temp_colidx_data = D_temp_rowidx->data;
    ncol = expl_temp.rowidx->size[0] - 1;
    for (i = 0; i <= ncol; i++) {
      D_temp_colidx_data[i] = expl_temp.rowidx->data[i];
    }
    st.site = &q_emlrtRSI;
    e_sparse_mtimes(&st, c_expl_temp.d, c_expl_temp.colidx, c_expl_temp.rowidx,
                    tmpd, D_temp_colidx, D_temp_rowidx, &expl_temp);
    *c *= sqrt_max_abs_M_col_k;
    sqrt_max_abs_M_col_k = 0.0;
    for (k = 0; k < 494; k++) {
      absx = 1.0 - del_vals[k];
      del_vals[k] = absx;
      absx = muDoubleScalarAbs(absx);
      if (muDoubleScalarIsNaN(absx) || (absx > sqrt_max_abs_M_col_k)) {
        sqrt_max_abs_M_col_k = absx;
      }
    }
    if (sqrt_max_abs_M_col_k <= ps->eps_ruiz) {
      exitg1 = true;
    } else {
      b_ruiz_iters++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
  }
  emxFreeStruct_sparse1(sp, &d_expl_temp);
  emxFreeStruct_sparse(sp, &c_expl_temp);
  emxFreeStruct_sparse1(sp, &b_expl_temp);
  emxFree_real_T(sp, &tmpd);
  emxFreeStruct_sparse(sp, &varargin_1);
  emxFree_int8_T(sp, &maxval_colidx);
  emxFreeStruct_sparse(sp, &P_ruiz_diag);
  emxFree_int32_T(sp, &E_temp_rowidx);
  emxFree_int32_T(sp, &E_temp_colidx);
  emxFree_real_T(sp, &E_temp_d);
  emxFree_int32_T(sp, &D_temp_rowidx);
  emxFree_int32_T(sp, &D_temp_colidx);
  st.site = &r_emlrtRSI;
  D->maxnz =
      sparse_parenReference(&st, expl_temp.d, expl_temp.colidx,
                            expl_temp.rowidx, D->d, D->colidx, D->rowidx);
  st.site = &s_emlrtRSI;
  E->maxnz =
      b_sparse_parenReference(&st, expl_temp.d, expl_temp.colidx,
                              expl_temp.rowidx, E->d, E->colidx, E->rowidx);
  emxFreeStruct_sparse(sp, &expl_temp);
  st.site = &t_emlrtRSI;
  *ruiz_time = 1000.0 * toc(&st);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (ruiz.c) */
