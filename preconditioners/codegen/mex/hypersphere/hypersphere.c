/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * hypersphere.c
 *
 * Code generation for function 'hypersphere'
 *
 */

/* Include files */
#include "hypersphere.h"
#include "diag.h"
#include "eml_int_forloop_overflow_check.h"
#include "fillIn.h"
#include "hypersphere_data.h"
#include "hypersphere_emxutil.h"
#include "hypersphere_types.h"
#include "introsort.h"
#include "locBsearch.h"
#include "mtimes.h"
#include "norm.h"
#include "rt_nonfinite.h"
#include "sparse.h"
#include "sparse1.h"
#include "sqrt.h"
#include "tic.h"
#include "toc.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI =
    {
        9,             /* lineNo */
        "hypersphere", /* fcnName */
        "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
        "hypersphere.m" /* pathName */
};

static emlrtRSInfo b_emlrtRSI =
    {
        17,            /* lineNo */
        "hypersphere", /* fcnName */
        "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
        "hypersphere.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI =
    {
        18,            /* lineNo */
        "hypersphere", /* fcnName */
        "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
        "hypersphere.m" /* pathName */
};

static emlrtRSInfo d_emlrtRSI =
    {
        19,            /* lineNo */
        "hypersphere", /* fcnName */
        "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
        "hypersphere.m" /* pathName */
};

static emlrtRSInfo e_emlrtRSI =
    {
        20,            /* lineNo */
        "hypersphere", /* fcnName */
        "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
        "hypersphere.m" /* pathName */
};

static emlrtRSInfo f_emlrtRSI =
    {
        21,            /* lineNo */
        "hypersphere", /* fcnName */
        "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
        "hypersphere.m" /* pathName */
};

static emlrtRSInfo g_emlrtRSI =
    {
        28,            /* lineNo */
        "hypersphere", /* fcnName */
        "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
        "hypersphere.m" /* pathName */
};

static emlrtRSInfo h_emlrtRSI =
    {
        32,            /* lineNo */
        "hypersphere", /* fcnName */
        "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
        "hypersphere.m" /* pathName */
};

static emlrtRSInfo i_emlrtRSI =
    {
        33,            /* lineNo */
        "hypersphere", /* fcnName */
        "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
        "hypersphere.m" /* pathName */
};

static emlrtRSInfo j_emlrtRSI =
    {
        34,            /* lineNo */
        "hypersphere", /* fcnName */
        "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
        "hypersphere.m" /* pathName */
};

static emlrtRSInfo k_emlrtRSI =
    {
        38,            /* lineNo */
        "hypersphere", /* fcnName */
        "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
        "hypersphere.m" /* pathName */
};

static emlrtRSInfo l_emlrtRSI =
    {
        39,            /* lineNo */
        "hypersphere", /* fcnName */
        "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
        "hypersphere.m" /* pathName */
};

static emlrtRSInfo m_emlrtRSI =
    {
        41,            /* lineNo */
        "hypersphere", /* fcnName */
        "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
        "hypersphere.m" /* pathName */
};

static emlrtRSInfo n_emlrtRSI =
    {
        43,            /* lineNo */
        "hypersphere", /* fcnName */
        "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
        "hypersphere.m" /* pathName */
};

static emlrtRSInfo o_emlrtRSI =
    {
        44,            /* lineNo */
        "hypersphere", /* fcnName */
        "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
        "hypersphere.m" /* pathName */
};

static emlrtRSInfo p_emlrtRSI =
    {
        47,            /* lineNo */
        "hypersphere", /* fcnName */
        "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
        "hypersphere.m" /* pathName */
};

static emlrtRSInfo
    yb_emlrtRSI =
        {
            33,      /* lineNo */
            "speye", /* fcnName */
            "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/sparfun/"
            "speye.m" /* pathName */
};

static emlrtRSInfo ac_emlrtRSI = {
    8,                /* lineNo */
    "sparse/eyeLike", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/eyeLike.m" /* pathName */
};

static emlrtRSInfo wc_emlrtRSI = {
    250,                     /* lineNo */
    "sparse/parenReference", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo xc_emlrtRSI = {
    23,                        /* lineNo */
    "sparse/parenReference2D", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/parenReference2D.m" /* pathName */
};

static emlrtRSInfo ad_emlrtRSI = {
    120,                    /* lineNo */
    "parenReference2DRows", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/parenReference2D.m" /* pathName */
};

static emlrtRSInfo ld_emlrtRSI =
    {
        5,                 /* lineNo */
        "power_iteration", /* fcnName */
        "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/"
        "power_iteration.m" /* pathName */
};

static emlrtRSInfo md_emlrtRSI =
    {
        12,                /* lineNo */
        "power_iteration", /* fcnName */
        "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/"
        "power_iteration.m" /* pathName */
};

static emlrtRSInfo nd_emlrtRSI =
    {
        22,                /* lineNo */
        "power_iteration", /* fcnName */
        "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/"
        "power_iteration.m" /* pathName */
};

static emlrtRSInfo od_emlrtRSI =
    {
        23,                /* lineNo */
        "power_iteration", /* fcnName */
        "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/"
        "power_iteration.m" /* pathName */
};

static emlrtRSInfo pd_emlrtRSI =
    {
        34,                /* lineNo */
        "power_iteration", /* fcnName */
        "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/"
        "power_iteration.m" /* pathName */
};

static emlrtRSInfo qd_emlrtRSI = {
    18,              /* lineNo */
    "sparse/mtimes", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/mtimes.m" /* pathName */
};

static emlrtRSInfo de_emlrtRSI = {
    5,                         /* lineNo */
    "shifted_power_iteration", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
    "shifted_power_iteration.m" /* pathName */
};

static emlrtRSInfo ee_emlrtRSI = {
    12,                        /* lineNo */
    "shifted_power_iteration", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
    "shifted_power_iteration.m" /* pathName */
};

static emlrtRSInfo fe_emlrtRSI = {
    22,                        /* lineNo */
    "shifted_power_iteration", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
    "shifted_power_iteration.m" /* pathName */
};

static emlrtRSInfo ge_emlrtRSI = {
    23,                        /* lineNo */
    "shifted_power_iteration", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
    "shifted_power_iteration.m" /* pathName */
};

static emlrtRSInfo he_emlrtRSI = {
    34,                        /* lineNo */
    "shifted_power_iteration", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
    "shifted_power_iteration.m" /* pathName */
};

static emlrtRSInfo
    ie_emlrtRSI =
        {
            53,        /* lineNo */
            "warning", /* fcnName */
            "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/lang/"
            "warning.m" /* pathName */
};

static emlrtMCInfo emlrtMCI = {
    84,                         /* lineNo */
    21,                         /* colNo */
    "WarningState/callWarning", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "WarningState.m" /* pName */
};

static emlrtRTEInfo emlrtRTEI =
    {
        19,                /* lineNo */
        9,                 /* colNo */
        "power_iteration", /* fName */
        "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/"
        "power_iteration.m" /* pName */
};

static emlrtRTEInfo b_emlrtRTEI = {
    19,                        /* lineNo */
    9,                         /* colNo */
    "shifted_power_iteration", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
    "shifted_power_iteration.m" /* pName */
};

static emlrtRTEInfo o_emlrtRTEI =
    {
        18,            /* lineNo */
        1,             /* colNo */
        "hypersphere", /* fName */
        "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
        "hypersphere.m" /* pName */
};

static emlrtRTEInfo s_emlrtRTEI = {
    1501,     /* lineNo */
    39,       /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo t_emlrtRTEI = {
    250,      /* lineNo */
    17,       /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo u_emlrtRTEI =
    {
        1,             /* lineNo */
        144,           /* colNo */
        "hypersphere", /* fName */
        "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
        "hypersphere.m" /* pName */
};

static emlrtRTEInfo v_emlrtRTEI =
    {
        17,            /* lineNo */
        1,             /* colNo */
        "hypersphere", /* fName */
        "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
        "hypersphere.m" /* pName */
};

static emlrtRTEInfo w_emlrtRTEI =
    {
        1,             /* lineNo */
        11,            /* colNo */
        "hypersphere", /* fName */
        "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
        "hypersphere.m" /* pName */
};

static emlrtRTEInfo x_emlrtRTEI =
    {
        28,            /* lineNo */
        30,            /* colNo */
        "hypersphere", /* fName */
        "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
        "hypersphere.m" /* pName */
};

static emlrtRTEInfo y_emlrtRTEI =
    {
        20,            /* lineNo */
        11,            /* colNo */
        "hypersphere", /* fName */
        "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
        "hypersphere.m" /* pName */
};

static emlrtRSInfo je_emlrtRSI = {
    84,                         /* lineNo */
    "WarningState/callWarning", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "WarningState.m" /* pathName */
};

/* Function Declarations */
static void feval(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                  emlrtMCInfo *location);

/* Function Definitions */
static void feval(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                  emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = m;
  pArrays[1] = m1;
  emlrtCallMATLABR2012b((emlrtConstCTX)sp, 0, NULL, 2, &pArrays[0], "feval",
                        true, location);
}

void hypersphere(const emlrtStack *sp, const b_sparse P, const real_T q[298],
                 const c_sparse H, const real_T h[196], const struct0_T *s,
                 const struct1_T *ps, b_sparse *P_hyper, real_T q_hyper[298],
                 b_sparse *H_hyper, real_T h_hyper[196], real_T *c, b_sparse *D,
                 b_sparse *E, real_T *sigma_max_hyper,
                 real_T *shifted_power_iters,
                 real_T *shifted_power_iteration_time, real_T *hypersphere_time)
{
  static const int32_T iv[2] = {1, 7};
  static const int32_T iv1[2] = {1, 41};
  static const char_T varargin_1[41] = {
      ' ', 'S', 'h', 'i', 'f', 't', 'e', 'd', ' ', 'p', 'o', 'w', 'e', 'r',
      ' ', 'i', 't', 'e', 'r', 'a', 't', 'i', 'o', 'n', ' ', 'h', 'i', 't',
      ' ', '`', 'm', 'a', 'x', '_', 'i', 't', 'e', 'r', 's', '`', '.'};
  static const char_T u[7] = {'w', 'a', 'r', 'n', 'i', 'n', 'g'};
  b_sparse expl_temp;
  c_sparse R_vals;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_int32_T *P_hyper_colidx;
  emxArray_int32_T *P_hyper_rowidx;
  emxArray_int32_T *s_colidx;
  emxArray_real_T *P_hyper_d;
  emxArray_real_T *s_d;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  real_T S[298];
  real_T row_norms[196];
  real_T row_norms_saturated[196];
  real_T sigma;
  real_T sigma_km1;
  real_T *P_hyper_d_data;
  int32_T sortedIndices[298];
  int32_T b_i;
  int32_T b_k;
  int32_T cidx;
  int32_T i;
  int32_T idx;
  int32_T k;
  int32_T *P_hyper_colidx_data;
  int32_T *P_hyper_rowidx_data;
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
  /* HYPERSPHERE */
  /*    [P_HYPER, q_HYPER, H_HYPER, h_HYPER, c, D, E, SIGMA_MAX_HYPER
   * SHIFTED_POWER_ITERS, SHIFTED_POWER_ITERATION_TIME, HYPERSPHERE_TIME] =
   * HYPERSPHERE(P, q, H, h, S, PS) */
  /*  */
  /*  1. Hypersphere preconditioning  */
  /*  2. Block row normalization */
  /*  3. Optimal cost scaling */
  st.site = &emlrtRSI;
  tic(&st);
  /*  ..:: Hypersphere Preconditioning ::.. % */
  emxInitStruct_sparse(sp, &R_vals, &v_emlrtRTEI);
  st.site = &b_emlrtRSI;
  sparse_diag(&st, P.d, P.colidx, P.rowidx, R_vals.d, R_vals.colidx,
              R_vals.rowidx);
  st.site = &b_emlrtRSI;
  b_sqrt(&st, &R_vals);
  for (i = 0; i < 298; i++) {
    S[i] = rtInf;
  }
  b_i = R_vals.colidx->data[0];
  i = R_vals.colidx->data[1] - 1;
  for (idx = b_i; idx <= i; idx++) {
    S[R_vals.rowidx->data[idx - 1] - 1] = 1.0 / R_vals.d->data[idx - 1];
  }
  st.site = &c_emlrtRSI;
  b_st.site = &ob_emlrtRSI;
  for (k = 0; k < 298; k++) {
    sortedIndices[k] = k + 1;
  }
  c_st.site = &pb_emlrtRSI;
  d_st.site = &qb_emlrtRSI;
  introsort(&d_st, sortedIndices);
  b_i = D->d->size[0];
  D->d->size[0] = 298;
  emxEnsureCapacity_real_T(&b_st, D->d, b_i, &o_emlrtRTEI);
  D->maxnz = 298;
  b_i = D->colidx->size[0];
  D->colidx->size[0] = 299;
  emxEnsureCapacity_int32_T(&b_st, D->colidx, b_i, &p_emlrtRTEI);
  D->colidx->data[0] = 1;
  b_i = D->rowidx->size[0];
  D->rowidx->size[0] = 298;
  emxEnsureCapacity_int32_T(&b_st, D->rowidx, b_i, &o_emlrtRTEI);
  for (b_i = 0; b_i < 298; b_i++) {
    D->d->data[b_i] = 0.0;
    D->rowidx->data[b_i] = 0;
  }
  i = 0;
  for (b_k = 0; b_k < 298; b_k++) {
    while ((i + 1 <= 298) && (sortedIndices[i] == b_k + 1)) {
      D->rowidx->data[i] = sortedIndices[i];
      i++;
    }
    D->colidx->data[b_k + 1] = i + 1;
    D->d->data[b_k] = S[sortedIndices[b_k] - 1];
  }
  c_st.site = &y_emlrtRSI;
  sparse_fillIn(D);
  st.site = &d_emlrtRSI;
  b_st.site = &yb_emlrtRSI;
  c_st.site = &ac_emlrtRSI;
  emxInit_real_T(&c_st, &P_hyper_d, 1, &w_emlrtRTEI);
  emxInit_int32_T(&c_st, &P_hyper_colidx, &w_emlrtRTEI);
  emxInit_int32_T(&c_st, &P_hyper_rowidx, &w_emlrtRTEI);
  b_i = P_hyper_d->size[0];
  P_hyper_d->size[0] = 298;
  emxEnsureCapacity_real_T(&c_st, P_hyper_d, b_i, &q_emlrtRTEI);
  P_hyper_d_data = P_hyper_d->data;
  b_i = P_hyper_rowidx->size[0];
  P_hyper_rowidx->size[0] = 298;
  emxEnsureCapacity_int32_T(&c_st, P_hyper_rowidx, b_i, &r_emlrtRTEI);
  P_hyper_rowidx_data = P_hyper_rowidx->data;
  b_i = P_hyper_colidx->size[0];
  P_hyper_colidx->size[0] = 299;
  emxEnsureCapacity_int32_T(&c_st, P_hyper_colidx, b_i, &s_emlrtRTEI);
  P_hyper_colidx_data = P_hyper_colidx->data;
  for (i = 0; i < 298; i++) {
    P_hyper_d_data[i] = 1.0;
    P_hyper_rowidx_data[i] = i + 1;
  }
  P_hyper_colidx_data[0] = 1;
  for (b_k = 0; b_k < 297; b_k++) {
    P_hyper_colidx_data[b_k + 1] = b_k + 2;
  }
  P_hyper_colidx_data[298] = 299;
  emxInitStruct_sparse1(sp, &expl_temp, &y_emlrtRTEI);
  st.site = &e_emlrtRSI;
  sparse_transpose(&st, D->d, D->colidx, D->rowidx, &expl_temp);
  st.site = &e_emlrtRSI;
  sparse_mtimes(&st, expl_temp.d, expl_temp.colidx, expl_temp.rowidx, q,
                q_hyper);
  st.site = &f_emlrtRSI;
  b_sparse_mtimes(&st, H.d, H.colidx, H.rowidx, D->d, D->colidx, D->rowidx,
                  &expl_temp);
  /*  ..:: Block Row Normalization ::.. % */
  emxInit_real_T(sp, &s_d, 1, &x_emlrtRTEI);
  P_hyper_d_data = s_d->data;
  emxInit_int32_T(sp, &s_colidx, &x_emlrtRTEI);
  for (k = 0; k < 196; k++) {
    int32_T colNnz;
    st.site = &g_emlrtRSI;
    b_st.site = &wc_emlrtRSI;
    c_st.site = &xc_emlrtRSI;
    d_st.site = &ad_emlrtRSI;
    s_d->size[0] = 0;
    b_i = s_colidx->size[0];
    s_colidx->size[0] = 299;
    emxEnsureCapacity_int32_T(&d_st, s_colidx, b_i, &t_emlrtRTEI);
    P_hyper_rowidx_data = s_colidx->data;
    for (b_i = 0; b_i < 299; b_i++) {
      P_hyper_rowidx_data[b_i] = 0;
    }
    P_hyper_rowidx_data[0] = 1;
    colNnz = 1;
    b_k = 0;
    for (cidx = 0; cidx < 298; cidx++) {
      idx = sparse_locBsearch(expl_temp.rowidx, k + 1,
                              expl_temp.colidx->data[cidx],
                              expl_temp.colidx->data[cidx + 1], &found);
      if (found) {
        b_i = s_d->size[0];
        i = s_d->size[0];
        s_d->size[0]++;
        emxEnsureCapacity_real_T(&d_st, s_d, i, &u_emlrtRTEI);
        P_hyper_d_data = s_d->data;
        sigma = expl_temp.d->data[idx - 1];
        P_hyper_d_data[b_i] = sigma;
        P_hyper_d_data[b_k] = sigma;
        b_k++;
        colNnz++;
      }
      P_hyper_rowidx_data[cidx + 1] = colNnz;
    }
    if (P_hyper_rowidx_data[298] - 1 == 0) {
      b_i = s_d->size[0];
      s_d->size[0] = 1;
      emxEnsureCapacity_real_T(&d_st, s_d, b_i, &t_emlrtRTEI);
      P_hyper_d_data = s_d->data;
      P_hyper_d_data[0] = 0.0;
    }
    st.site = &g_emlrtRSI;
    memset(&S[0], 0, 298U * sizeof(real_T));
    for (b_k = 0; b_k < 298; b_k++) {
      i = P_hyper_rowidx_data[b_k + 1] - 1;
      colNnz = P_hyper_rowidx_data[b_k];
      b_st.site = &jb_emlrtRSI;
      if ((P_hyper_rowidx_data[b_k] <= i) && (i > 2147483646)) {
        c_st.site = &db_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }
      for (idx = colNnz; idx <= i; idx++) {
        S[b_k] = P_hyper_d_data[idx - 1];
      }
    }
    st.site = &g_emlrtRSI;
    row_norms[k] = b_norm(&st, S, ps->p_norm);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emxFree_int32_T(sp, &s_colidx);
  emxFree_real_T(sp, &s_d);
  for (k = 0; k < 196; k++) {
    row_norms_saturated[k] =
        1.0 / muDoubleScalarMax(row_norms[k], ps->row_norm_tol);
  }
  st.site = &h_emlrtRSI;
  sparse(&st, row_norms_saturated, E);
  st.site = &i_emlrtRSI;
  b_sparse_mtimes(&st, E->d, E->colidx, E->rowidx, expl_temp.d,
                  expl_temp.colidx, expl_temp.rowidx, H_hyper);
  st.site = &j_emlrtRSI;
  c_sparse_mtimes(&st, E->d, E->colidx, E->rowidx, h, h_hyper);
  /*  ..:: Optimal Cost Scaling ::.. % */
  st.site = &k_emlrtRSI;
  /* POWER_ITERATION */
  /*    [SIGMA_MAX, K, POWER_ITERATION_TIME] = POWER_ITERATION(H, S) */
  b_st.site = &ld_emlrtRSI;
  tic(&b_st);
  b_st.site = &md_emlrtRSI;
  b_sparse_transpose(&b_st, H_hyper->d, H_hyper->colidx, H_hyper->rowidx,
                     R_vals.d, R_vals.colidx, R_vals.rowidx);
  for (i = 0; i < 196; i++) {
    row_norms[i] = 0.071428571428571425;
    row_norms_saturated[i] = 0.071428571428571425;
  }
  sigma = c_norm(row_norms_saturated);
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, s->max_iters_power, mxDOUBLE_CLASS,
                                (int32_T)s->max_iters_power, &emlrtRTEI, &st);
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= (int32_T)s->max_iters_power - 1)) {
    sigma_km1 = sigma;
    b_st.site = &nd_emlrtRSI;
    d_sparse_mtimes(&b_st, R_vals.d, R_vals.colidx, R_vals.rowidx, row_norms,
                    S);
    b_st.site = &od_emlrtRSI;
    c_st.site = &qd_emlrtRSI;
    sparse_times(&c_st, 1.0 / sigma, H_hyper->d, H_hyper->colidx,
                 H_hyper->rowidx, expl_temp.d, expl_temp.colidx,
                 expl_temp.rowidx);
    b_st.site = &od_emlrtRSI;
    e_sparse_mtimes(&b_st, expl_temp.d, expl_temp.colidx, expl_temp.rowidx, S,
                    row_norms);
    sigma = c_norm(row_norms);
    if (muDoubleScalarAbs(sigma - sigma_km1) <=
        s->eps_abs_power +
            s->eps_rel_power * muDoubleScalarMax(sigma, sigma_km1)) {
      exitg1 = true;
    } else {
      k++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
  }
  emxFreeStruct_sparse1(&st, &expl_temp);
  *sigma_max_hyper = (s->eps_buff_power + 1.0) * sigma;
  b_st.site = &pd_emlrtRSI;
  toc(&b_st);
  st.site = &l_emlrtRSI;
  /* SHIFTED_POWER_ITERATION */
  /*    [SIGMA_MIN, K, SHIFTED_POWER_ITERATION_TIME] =
   * SHIFTED_POWER_ITERATION(SIGMA_MAX, H, PS) */
  b_st.site = &de_emlrtRSI;
  tic(&b_st);
  b_st.site = &ee_emlrtRSI;
  b_sparse_transpose(&b_st, H_hyper->d, H_hyper->colidx, H_hyper->rowidx,
                     R_vals.d, R_vals.colidx, R_vals.rowidx);
  for (i = 0; i < 196; i++) {
    row_norms[i] = 0.071428571428571425;
    row_norms_saturated[i] = 0.071428571428571425;
  }
  sigma = c_norm(row_norms_saturated);
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, ps->max_iters_shifted_power, mxDOUBLE_CLASS,
      (int32_T)ps->max_iters_shifted_power, &b_emlrtRTEI, &st);
  *shifted_power_iters = 1.0;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= (int32_T)ps->max_iters_shifted_power - 1)) {
    *shifted_power_iters = (real_T)k + 1.0;
    sigma_km1 = sigma;
    b_st.site = &fe_emlrtRSI;
    d_sparse_mtimes(&b_st, R_vals.d, R_vals.colidx, R_vals.rowidx, row_norms,
                    S);
    sigma = 1.0 / sigma;
    b_st.site = &ge_emlrtRSI;
    e_sparse_mtimes(&b_st, H_hyper->d, H_hyper->colidx, H_hyper->rowidx, S,
                    row_norms_saturated);
    for (i = 0; i < 196; i++) {
      real_T d;
      d = row_norms_saturated[i] - *sigma_max_hyper * row_norms[i];
      row_norms_saturated[i] = d;
      row_norms[i] = sigma * d;
    }
    sigma = c_norm(row_norms);
    if (muDoubleScalarAbs(sigma - sigma_km1) <=
        ps->eps_abs_shifted_power +
            ps->eps_rel_shifted_power * muDoubleScalarMax(sigma, sigma_km1)) {
      exitg1 = true;
    } else {
      k++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
  }
  emxFreeStruct_sparse(&st, &R_vals);
  b_st.site = &he_emlrtRSI;
  *shifted_power_iteration_time = 1000.0 * toc(&b_st);
  if (*shifted_power_iters >= ps->max_iters_shifted_power) {
    st.site = &m_emlrtRSI;
    b_st.site = &ie_emlrtRSI;
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&b_st, 7, m, &u[0]);
    emlrtAssign(&y, m);
    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&b_st, 41, m, &varargin_1[0]);
    emlrtAssign(&b_y, m);
    c_st.site = &je_emlrtRSI;
    feval(&c_st, y, b_y, &emlrtMCI);
  }
  st.site = &n_emlrtRSI;
  *c = (1.0 - ps->eps_buff_shifted_power) * (*sigma_max_hyper - sigma) / 2.0;
  if (*c < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &c_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  *c = muDoubleScalarSqrt(*c);
  st.site = &o_emlrtRSI;
  b_st.site = &qd_emlrtRSI;
  b_sparse_times(&b_st, *c, P_hyper_d, P_hyper_colidx, P_hyper_rowidx, P_hyper);
  emxFree_int32_T(&st, &P_hyper_rowidx);
  emxFree_int32_T(&st, &P_hyper_colidx);
  emxFree_real_T(&st, &P_hyper_d);
  for (b_i = 0; b_i < 298; b_i++) {
    q_hyper[b_i] *= *c;
  }
  st.site = &p_emlrtRSI;
  *hypersphere_time = 1000.0 * toc(&st);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (hypersphere.c) */
