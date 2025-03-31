/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * qr_preconditioner.c
 *
 * Code generation for function 'qr_preconditioner'
 *
 */

/* Include files */
#include "qr_preconditioner.h"
#include "diag.h"
#include "mldivide.h"
#include "qr.h"
#include "qr_preconditioner_data.h"
#include "qr_preconditioner_emxutil.h"
#include "qr_preconditioner_types.h"
#include "rt_nonfinite.h"
#include "sparse.h"
#include "sparse1.h"
#include "tic.h"
#include "toc.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    11,                  /* lineNo */
    "qr_preconditioner", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
    "qr_preconditioner.m" /* pathName */
};

static emlrtRSInfo b_emlrtRSI = {
    15,                  /* lineNo */
    "qr_preconditioner", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
    "qr_preconditioner.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI = {
    16,                  /* lineNo */
    "qr_preconditioner", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
    "qr_preconditioner.m" /* pathName */
};

static emlrtRSInfo d_emlrtRSI = {
    18,                  /* lineNo */
    "qr_preconditioner", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
    "qr_preconditioner.m" /* pathName */
};

static emlrtRSInfo e_emlrtRSI = {
    20,                  /* lineNo */
    "qr_preconditioner", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
    "qr_preconditioner.m" /* pathName */
};

static emlrtRSInfo f_emlrtRSI = {
    25,                  /* lineNo */
    "qr_preconditioner", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
    "qr_preconditioner.m" /* pathName */
};

static emlrtRSInfo g_emlrtRSI = {
    28,                  /* lineNo */
    "qr_preconditioner", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
    "qr_preconditioner.m" /* pathName */
};

static emlrtRSInfo h_emlrtRSI = {
    29,                  /* lineNo */
    "qr_preconditioner", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
    "qr_preconditioner.m" /* pathName */
};

static emlrtRSInfo i_emlrtRSI = {
    31,                  /* lineNo */
    "qr_preconditioner", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
    "qr_preconditioner.m" /* pathName */
};

static emlrtRSInfo t_emlrtRSI = {
    15,    /* lineNo */
    "max", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/datafun/max.m" /* pathName
                                                                            */
};

static emlrtRSInfo u_emlrtRSI = {
    44,         /* lineNo */
    "minOrMax", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" /* pathName */
};

static emlrtRSInfo v_emlrtRSI = {
    79,        /* lineNo */
    "maximum", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" /* pathName */
};

static emlrtRSInfo w_emlrtRSI = {
    225,             /* lineNo */
    "unaryMinOrMax", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo x_emlrtRSI = {
    289,                     /* lineNo */
    "unaryMinOrMaxDispatch", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo y_emlrtRSI = {
    693,              /* lineNo */
    "minOrMaxSparse", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo ab_emlrtRSI = {
    756,                          /* lineNo */
    "minOrMaxSparseColumnReduce", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo cb_emlrtRSI = {
    15,    /* lineNo */
    "min", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/datafun/min.m" /* pathName
                                                                            */
};

static emlrtRSInfo db_emlrtRSI = {
    46,         /* lineNo */
    "minOrMax", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" /* pathName */
};

static emlrtRSInfo eb_emlrtRSI = {
    92,        /* lineNo */
    "minimum", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" /* pathName */
};

static emlrtRSInfo
    fb_emlrtRSI =
        {
            44,       /* lineNo */
            "mpower", /* fcnName */
            "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/matfun/"
            "mpower.m" /* pathName */
};

static emlrtRSInfo gb_emlrtRSI = {
    71,      /* lineNo */
    "power", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/ops/power.m" /* pathName
                                                                          */
};

static emlrtRSInfo
    dc_emlrtRSI =
        {
            33,      /* lineNo */
            "speye", /* fcnName */
            "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/sparfun/"
            "speye.m" /* pathName */
};

static emlrtRSInfo ec_emlrtRSI = {
    8,                /* lineNo */
    "sparse/eyeLike", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/eyeLike.m" /* pathName */
};

static emlrtRSInfo fc_emlrtRSI = {
    18,              /* lineNo */
    "sparse/mtimes", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/mtimes.m" /* pathName */
};

static emlrtRTEInfo emlrtRTEI = {
    13,     /* lineNo */
    9,      /* colNo */
    "sqrt", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/elfun/sqrt.m" /* pName
                                                                           */
};

static emlrtRTEInfo k_emlrtRTEI = {
    22,                  /* lineNo */
    1,                   /* colNo */
    "qr_preconditioner", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
    "qr_preconditioner.m" /* pName */
};

static emlrtRTEInfo l_emlrtRTEI = {
    1498,     /* lineNo */
    38,       /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo m_emlrtRTEI = {
    1500,     /* lineNo */
    39,       /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo n_emlrtRTEI = {
    1501,     /* lineNo */
    39,       /* colNo */
    "sparse", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pName */
};

static emlrtRTEInfo p_emlrtRTEI = {
    15,                  /* lineNo */
    20,                  /* colNo */
    "qr_preconditioner", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
    "qr_preconditioner.m" /* pName */
};

static emlrtRTEInfo q_emlrtRTEI = {
    29,                  /* lineNo */
    5,                   /* colNo */
    "qr_preconditioner", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
    "qr_preconditioner.m" /* pName */
};

static emlrtRTEInfo r_emlrtRTEI = {
    29,                  /* lineNo */
    11,                  /* colNo */
    "qr_preconditioner", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/preconditioners/"
    "qr_preconditioner.m" /* pName */
};

/* Function Definitions */
void qr_preconditioner(qr_preconditionerStackData *SD, const emlrtStack *sp,
                       const b_sparse P, const real_T q[298], const c_sparse H,
                       const real_T h[196], b_sparse *P_qr, real_T q_qr[298],
                       real_T H_qr[58408], real_T h_qr[196], real_T *c,
                       b_sparse *D, b_sparse *E, real_T *qr_time)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  emxArray_int32_T *b_colidx;
  emxArray_int32_T *b_rowidx;
  emxArray_int32_T *c_colidx;
  emxArray_int32_T *c_rowidx;
  emxArray_int32_T *varargin_1_colidx;
  emxArray_int32_T *varargin_1_rowidx;
  emxArray_real_T *b_d;
  emxArray_real_T *varargin_1_d;
  real_T colEx;
  real_T d;
  real_T fullEx;
  real_T lam_max;
  real_T *varargin_1_d_data;
  int32_T b_i;
  int32_T cend;
  int32_T i;
  int32_T k;
  int32_T *varargin_1_colidx_data;
  int32_T *varargin_1_rowidx_data;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  /* QR_PRECONDITIONER */
  /*    [P_QR, q_QR, H_QR, h_QR, c, D, E, QR_TIME] = QR_PRECONDITIONER(P, q, H,
   * h) */
  /*  */
  /*  Reference: */
  /*  */
  /*  Chari et al., Constraint preconditioning and parameter selection for a */
  /*  first-order primal-dual method applied to model predictive control, CDC */
  /*  2024. */
  st.site = &emlrtRSI;
  tic(&st);
  st.site = &b_emlrtRSI;
  emxInit_real_T(&st, &varargin_1_d, 1, &p_emlrtRTEI);
  emxInit_int32_T(&st, &varargin_1_colidx, &p_emlrtRTEI);
  emxInit_int32_T(&st, &varargin_1_rowidx, &p_emlrtRTEI);
  b_st.site = &b_emlrtRSI;
  sparse_diag(&b_st, P.d, P.colidx, P.rowidx, varargin_1_d, varargin_1_colidx,
              varargin_1_rowidx);
  varargin_1_colidx_data = varargin_1_colidx->data;
  varargin_1_d_data = varargin_1_d->data;
  b_st.site = &t_emlrtRSI;
  c_st.site = &u_emlrtRSI;
  d_st.site = &v_emlrtRSI;
  e_st.site = &w_emlrtRSI;
  f_st.site = &x_emlrtRSI;
  g_st.site = &y_emlrtRSI;
  fullEx = 0.0;
  cend = varargin_1_colidx_data[1] - 1;
  i = varargin_1_colidx_data[1] - varargin_1_colidx_data[0];
  if (i != 0) {
    colEx = 0.0;
    if (varargin_1_colidx_data[1] - 1 >= varargin_1_colidx_data[0]) {
      colEx = varargin_1_d_data[varargin_1_colidx_data[0] - 1];
      b_i = varargin_1_colidx_data[0] + 1;
      for (k = b_i; k <= cend; k++) {
        d = varargin_1_d_data[k - 1];
        if (muDoubleScalarIsNaN(d)) {
          p = false;
        } else if (muDoubleScalarIsNaN(colEx)) {
          p = true;
        } else {
          p = (colEx < d);
        }
        if (p) {
          colEx = d;
        }
      }
    }
    if (i < 1) {
      if ((!muDoubleScalarIsNaN(colEx)) && (colEx > 0.0)) {
        fullEx = colEx;
      }
    } else {
      fullEx = colEx;
    }
  }
  h_st.site = &ab_emlrtRSI;
  sparse(&h_st, fullEx, varargin_1_d, varargin_1_colidx, varargin_1_rowidx);
  varargin_1_colidx_data = varargin_1_colidx->data;
  varargin_1_d_data = varargin_1_d->data;
  lam_max = 0.0;
  b_i = varargin_1_colidx_data[1] - 1;
  i = varargin_1_colidx_data[0];
  for (k = i; k <= b_i; k++) {
    lam_max = varargin_1_d_data[0];
  }
  st.site = &c_emlrtRSI;
  b_st.site = &c_emlrtRSI;
  sparse_diag(&b_st, P.d, P.colidx, P.rowidx, varargin_1_d, varargin_1_colidx,
              varargin_1_rowidx);
  varargin_1_colidx_data = varargin_1_colidx->data;
  varargin_1_d_data = varargin_1_d->data;
  b_st.site = &cb_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  d_st.site = &eb_emlrtRSI;
  e_st.site = &w_emlrtRSI;
  f_st.site = &x_emlrtRSI;
  g_st.site = &y_emlrtRSI;
  fullEx = 0.0;
  b_i = varargin_1_colidx_data[1] - 1;
  i = varargin_1_colidx_data[1] - varargin_1_colidx_data[0];
  if (i != 0) {
    colEx = 0.0;
    if (varargin_1_colidx_data[1] - 1 >= varargin_1_colidx_data[0]) {
      colEx = varargin_1_d_data[varargin_1_colidx_data[0] - 1];
      cend = varargin_1_colidx_data[0] + 1;
      for (k = cend; k <= b_i; k++) {
        d = varargin_1_d_data[k - 1];
        if (muDoubleScalarIsNaN(d)) {
          p = false;
        } else if (muDoubleScalarIsNaN(colEx)) {
          p = true;
        } else {
          p = (colEx > d);
        }
        if (p) {
          colEx = d;
        }
      }
    }
    if (i < 1) {
      if ((!muDoubleScalarIsNaN(colEx)) && (colEx < 0.0)) {
        fullEx = colEx;
      }
    } else {
      fullEx = colEx;
    }
  }
  h_st.site = &ab_emlrtRSI;
  sparse(&h_st, fullEx, varargin_1_d, varargin_1_colidx, varargin_1_rowidx);
  varargin_1_colidx_data = varargin_1_colidx->data;
  varargin_1_d_data = varargin_1_d->data;
  fullEx = 0.0;
  b_i = varargin_1_colidx_data[1] - 1;
  i = varargin_1_colidx_data[0];
  for (k = i; k <= b_i; k++) {
    fullEx = varargin_1_d_data[0];
  }
  st.site = &d_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  st.site = &d_emlrtRSI;
  fullEx = lam_max * fullEx + fullEx * fullEx;
  if (fullEx < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  fullEx = muDoubleScalarSqrt(fullEx);
  st.site = &e_emlrtRSI;
  sparse_transpose(&st, H.d, H.colidx, H.rowidx, varargin_1_d,
                   varargin_1_colidx, varargin_1_rowidx);
  varargin_1_rowidx_data = varargin_1_rowidx->data;
  varargin_1_colidx_data = varargin_1_colidx->data;
  varargin_1_d_data = varargin_1_d->data;
  memset(&SD->f1.y[0], 0, 58408U * sizeof(real_T));
  for (i = 0; i < 196; i++) {
    cend = varargin_1_colidx_data[i + 1] - 1;
    b_i = varargin_1_colidx_data[i];
    for (k = b_i; k <= cend; k++) {
      SD->f1.y[(varargin_1_rowidx_data[k - 1] + 298 * i) - 1] =
          varargin_1_d_data[k - 1];
    }
  }
  st.site = &e_emlrtRSI;
  qr(&st, SD->f1.y, SD->f1.Q_qr, SD->f1.R_qr);
  emxCopyStruct_sparse(sp, P_qr, &P, &k_emlrtRTEI);
  for (i = 0; i < 298; i++) {
    q_qr[i] = q[i];
    for (b_i = 0; b_i < 196; b_i++) {
      H_qr[b_i + 196 * i] = fullEx * SD->f1.Q_qr[i + 298 * b_i];
    }
  }
  for (i = 0; i < 196; i++) {
    h_qr[i] = h[i];
    for (b_i = 0; b_i < 196; b_i++) {
      SD->f1.b_R_qr[b_i + 196 * i] = SD->f1.R_qr[i + 196 * b_i];
    }
  }
  st.site = &f_emlrtRSI;
  mldivide(SD, &st, SD->f1.b_R_qr, h_qr);
  for (b_i = 0; b_i < 196; b_i++) {
    h_qr[b_i] *= fullEx;
  }
  st.site = &g_emlrtRSI;
  b_st.site = &dc_emlrtRSI;
  c_st.site = &ec_emlrtRSI;
  D->maxnz = 298;
  b_i = D->d->size[0];
  D->d->size[0] = 298;
  emxEnsureCapacity_real_T(&c_st, D->d, b_i, &l_emlrtRTEI);
  b_i = D->rowidx->size[0];
  D->rowidx->size[0] = 298;
  emxEnsureCapacity_int32_T(&c_st, D->rowidx, b_i, &m_emlrtRTEI);
  b_i = D->colidx->size[0];
  D->colidx->size[0] = 299;
  emxEnsureCapacity_int32_T(&c_st, D->colidx, b_i, &n_emlrtRTEI);
  for (i = 0; i < 298; i++) {
    D->d->data[i] = 1.0;
    D->rowidx->data[i] = i + 1;
  }
  D->colidx->data[0] = 1;
  for (i = 0; i < 297; i++) {
    D->colidx->data[i + 1] = i + 2;
  }
  D->colidx->data[298] = 299;
  st.site = &h_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  c_st.site = &bb_emlrtRSI;
  cend = 0;
  for (k = 0; k < 38416; k++) {
    if (SD->f1.R_qr[k] != 0.0) {
      cend++;
    }
  }
  cend = muIntScalarMax_sint32(cend, 1);
  b_i = varargin_1_d->size[0];
  varargin_1_d->size[0] = cend;
  emxEnsureCapacity_real_T(&c_st, varargin_1_d, b_i, &o_emlrtRTEI);
  varargin_1_d_data = varargin_1_d->data;
  for (b_i = 0; b_i < cend; b_i++) {
    varargin_1_d_data[b_i] = 0.0;
  }
  b_i = varargin_1_colidx->size[0];
  varargin_1_colidx->size[0] = 197;
  emxEnsureCapacity_int32_T(&c_st, varargin_1_colidx, b_i, &o_emlrtRTEI);
  varargin_1_colidx_data = varargin_1_colidx->data;
  for (b_i = 0; b_i < 197; b_i++) {
    varargin_1_colidx_data[b_i] = 0;
  }
  varargin_1_colidx_data[0] = 1;
  b_i = varargin_1_rowidx->size[0];
  varargin_1_rowidx->size[0] = cend;
  emxEnsureCapacity_int32_T(&c_st, varargin_1_rowidx, b_i, &o_emlrtRTEI);
  varargin_1_rowidx_data = varargin_1_rowidx->data;
  for (b_i = 0; b_i < cend; b_i++) {
    varargin_1_rowidx_data[b_i] = 0;
  }
  varargin_1_rowidx_data[0] = 1;
  cend = 0;
  for (i = 0; i < 196; i++) {
    for (k = 0; k < 196; k++) {
      d = SD->f1.R_qr[k + 196 * i];
      if (d != 0.0) {
        varargin_1_rowidx_data[cend] = k + 1;
        varargin_1_d_data[cend] = d;
        cend++;
      }
    }
    varargin_1_colidx_data[i + 1] = cend + 1;
  }
  emxInit_real_T(&st, &b_d, 1, &r_emlrtRTEI);
  emxInit_int32_T(&st, &b_colidx, &r_emlrtRTEI);
  emxInit_int32_T(&st, &b_rowidx, &r_emlrtRTEI);
  b_st.site = &h_emlrtRSI;
  b_sparse_transpose(&b_st, varargin_1_d, varargin_1_colidx, varargin_1_rowidx,
                     b_d, b_colidx, b_rowidx);
  emxInit_int32_T(&st, &c_colidx, &q_emlrtRTEI);
  emxInit_int32_T(&st, &c_rowidx, &q_emlrtRTEI);
  b_st.site = &fc_emlrtRSI;
  sparse_times(&b_st, fullEx, b_d, b_colidx, b_rowidx, varargin_1_d, c_colidx,
               c_rowidx);
  emxFree_int32_T(&st, &b_rowidx);
  emxFree_int32_T(&st, &b_colidx);
  emxFree_real_T(&st, &b_d);
  st.site = &h_emlrtRSI;
  b_st.site = &dc_emlrtRSI;
  c_st.site = &ec_emlrtRSI;
  b_i = varargin_1_rowidx->size[0];
  varargin_1_rowidx->size[0] = 196;
  emxEnsureCapacity_int32_T(&c_st, varargin_1_rowidx, b_i, &m_emlrtRTEI);
  varargin_1_rowidx_data = varargin_1_rowidx->data;
  b_i = varargin_1_colidx->size[0];
  varargin_1_colidx->size[0] = 197;
  emxEnsureCapacity_int32_T(&c_st, varargin_1_colidx, b_i, &n_emlrtRTEI);
  varargin_1_colidx_data = varargin_1_colidx->data;
  for (i = 0; i < 196; i++) {
    varargin_1_rowidx_data[i] = i + 1;
  }
  varargin_1_colidx_data[0] = 1;
  for (i = 0; i < 195; i++) {
    varargin_1_colidx_data[i + 1] = i + 2;
  }
  varargin_1_colidx_data[196] = 197;
  st.site = &h_emlrtRSI;
  E->maxnz =
      sparse_mldivide(&st, varargin_1_d, c_colidx, c_rowidx, varargin_1_colidx,
                      varargin_1_rowidx, E->d, E->colidx, E->rowidx);
  emxFree_int32_T(sp, &c_rowidx);
  emxFree_int32_T(sp, &c_colidx);
  emxFree_int32_T(sp, &varargin_1_rowidx);
  emxFree_int32_T(sp, &varargin_1_colidx);
  emxFree_real_T(sp, &varargin_1_d);
  st.site = &i_emlrtRSI;
  *qr_time = 1000.0 * toc(&st);
  *c = 1.0;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (qr_preconditioner.c) */
