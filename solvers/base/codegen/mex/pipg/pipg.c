/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * pipg.c
 *
 * Code generation for function 'pipg'
 *
 */

/* Include files */
#include "pipg.h"
#include "diag.h"
#include "mod.h"
#include "mtimes.h"
#include "mtimes1.h"
#include "norm.h"
#include "pipg_data.h"
#include "pipg_emxutil.h"
#include "pipg_types.h"
#include "proj_D.h"
#include "rt_nonfinite.h"
#include "sparse.h"
#include "sparse1.h"
#include "speye.h"
#include "tic.h"
#include "toc.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    7,      /* lineNo */
    "pipg", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pathName
                                                                      */
};

static emlrtRSInfo b_emlrtRSI = {
    28,     /* lineNo */
    "pipg", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pathName
                                                                      */
};

static emlrtRSInfo c_emlrtRSI = {
    30,     /* lineNo */
    "pipg", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pathName
                                                                      */
};

static emlrtRSInfo d_emlrtRSI = {
    32,     /* lineNo */
    "pipg", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pathName
                                                                      */
};

static emlrtRSInfo e_emlrtRSI = {
    34,     /* lineNo */
    "pipg", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pathName
                                                                      */
};

static emlrtRSInfo f_emlrtRSI = {
    38,     /* lineNo */
    "pipg", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pathName
                                                                      */
};

static emlrtRSInfo g_emlrtRSI = {
    40,     /* lineNo */
    "pipg", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pathName
                                                                      */
};

static emlrtRSInfo h_emlrtRSI = {
    41,     /* lineNo */
    "pipg", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pathName
                                                                      */
};

static emlrtRSInfo i_emlrtRSI = {
    56,     /* lineNo */
    "pipg", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pathName
                                                                      */
};

static emlrtRSInfo j_emlrtRSI = {
    57,     /* lineNo */
    "pipg", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pathName
                                                                      */
};

static emlrtRSInfo k_emlrtRSI = {
    58,     /* lineNo */
    "pipg", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pathName
                                                                      */
};

static emlrtRSInfo l_emlrtRSI = {
    75,     /* lineNo */
    "pipg", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pathName
                                                                      */
};

static emlrtRSInfo m_emlrtRSI = {
    93,     /* lineNo */
    "pipg", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pathName
                                                                      */
};

static emlrtRSInfo n_emlrtRSI = {
    94,     /* lineNo */
    "pipg", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pathName
                                                                      */
};

static emlrtRSInfo o_emlrtRSI = {
    96,     /* lineNo */
    "pipg", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pathName
                                                                      */
};

static emlrtRSInfo vc_emlrtRSI = {
    289,                     /* lineNo */
    "unaryMinOrMaxDispatch", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo wc_emlrtRSI = {
    693,              /* lineNo */
    "minOrMaxSparse", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo xc_emlrtRSI = {
    756,                          /* lineNo */
    "minOrMaxSparseColumnReduce", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo yc_emlrtRSI = {
    275,           /* lineNo */
    "sparse/full", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" /* pathName */
};

static emlrtRSInfo
    ad_emlrtRSI =
        {
            44,       /* lineNo */
            "mpower", /* fcnName */
            "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/matfun/"
            "mpower.m" /* pathName */
};

static emlrtRSInfo bd_emlrtRSI = {
    71,      /* lineNo */
    "power", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/ops/power.m" /* pathName
                                                                          */
};

static emlrtRSInfo cd_emlrtRSI = {
    94,                  /* lineNo */
    "eml_mtimes_helper", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pathName */
};

static emlrtRSInfo dd_emlrtRSI = {
    69,                  /* lineNo */
    "eml_mtimes_helper", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pathName */
};

static emlrtRSInfo
    kd_emlrtRSI =
        {
            7,              /* lineNo */
            "proj_K_polar", /* fcnName */
            "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/"
            "proj_K_polar.m" /* pathName */
};

static emlrtRSInfo ld_emlrtRSI = {
    18,              /* lineNo */
    "sparse/mtimes", /* fcnName */
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/mtimes.m" /* pathName */
};

static emlrtRTEInfo emlrtRTEI = {
    133,                   /* lineNo */
    23,                    /* colNo */
    "dynamic_size_checks", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pName */
};

static emlrtRTEInfo b_emlrtRTEI = {
    138,                   /* lineNo */
    23,                    /* colNo */
    "dynamic_size_checks", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pName */
};

static emlrtRTEInfo c_emlrtRTEI = {
    13,     /* lineNo */
    9,      /* colNo */
    "sqrt", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/elfun/sqrt.m" /* pName
                                                                           */
};

static emlrtBCInfo emlrtBCI = {
    1,        /* iFirst */
    196,      /* iLast */
    12,       /* lineNo */
    10,       /* colNo */
    "w_proj", /* aName */
    "proj_K", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/proj_K.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtDCInfo emlrtDCI = {
    12,       /* lineNo */
    10,       /* colNo */
    "proj_K", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/proj_K.m", /* pName
                                                                         */
    1 /* checkKind */
};

static emlrtECInfo emlrtECI = {
    1,      /* nDims */
    83,     /* lineNo */
    21,     /* colNo */
    "pipg", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pName */
};

static emlrtECInfo b_emlrtECI = {
    1,      /* nDims */
    79,     /* lineNo */
    27,     /* colNo */
    "pipg", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pName */
};

static emlrtECInfo c_emlrtECI = {
    1,      /* nDims */
    59,     /* lineNo */
    12,     /* colNo */
    "pipg", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pName */
};

static emlrtECInfo d_emlrtECI = {
    1,      /* nDims */
    58,     /* lineNo */
    40,     /* colNo */
    "pipg", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pName */
};

static emlrtECInfo e_emlrtECI = {
    1,      /* nDims */
    56,     /* lineNo */
    9,      /* colNo */
    "pipg", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pName */
};

static emlrtRTEInfo d_emlrtRTEI = {
    51,     /* lineNo */
    9,      /* colNo */
    "pipg", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pName */
};

static emlrtDCInfo b_emlrtDCI = {
    22,     /* lineNo */
    1,      /* colNo */
    "pipg", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m", /* pName
                                                                       */
    1 /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = {
    22,     /* lineNo */
    1,      /* colNo */
    "pipg", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m", /* pName
                                                                       */
    4 /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = {
    23,     /* lineNo */
    1,      /* colNo */
    "pipg", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m", /* pName
                                                                       */
    1 /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = {
    23,     /* lineNo */
    1,      /* colNo */
    "pipg", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m", /* pName
                                                                       */
    4 /* checkKind */
};

static emlrtRTEInfo bb_emlrtRTEI = {
    22,     /* lineNo */
    1,      /* colNo */
    "pipg", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pName */
};

static emlrtRTEInfo cb_emlrtRTEI = {
    23,     /* lineNo */
    1,      /* colNo */
    "pipg", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pName */
};

static emlrtRTEInfo db_emlrtRTEI = {
    113,     /* lineNo */
    18,      /* colNo */
    "colon", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/ops/colon.m" /* pName
                                                                          */
};

static emlrtRTEInfo eb_emlrtRTEI = {
    34,     /* lineNo */
    16,     /* colNo */
    "pipg", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pName */
};

static emlrtRTEInfo fb_emlrtRTEI = {
    15,    /* lineNo */
    5,     /* colNo */
    "max", /* fName */
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/datafun/max.m" /* pName
                                                                            */
};

static emlrtRTEInfo gb_emlrtRTEI = {
    43,     /* lineNo */
    1,      /* colNo */
    "pipg", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pName */
};

static emlrtRTEInfo hb_emlrtRTEI = {
    44,     /* lineNo */
    1,      /* colNo */
    "pipg", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pName */
};

static emlrtRTEInfo ib_emlrtRTEI = {
    46,     /* lineNo */
    1,      /* colNo */
    "pipg", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pName */
};

static emlrtRTEInfo jb_emlrtRTEI = {
    47,     /* lineNo */
    1,      /* colNo */
    "pipg", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = {
    48,     /* lineNo */
    1,      /* colNo */
    "pipg", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = {
    49,     /* lineNo */
    1,      /* colNo */
    "pipg", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pName */
};

static emlrtRTEInfo mb_emlrtRTEI = {
    58,     /* lineNo */
    40,     /* colNo */
    "pipg", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = {
    58,     /* lineNo */
    5,      /* colNo */
    "pipg", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pName */
};

static emlrtRTEInfo ob_emlrtRTEI = {
    59,     /* lineNo */
    38,     /* colNo */
    "pipg", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pName */
};

static emlrtRTEInfo pb_emlrtRTEI = {
    75,     /* lineNo */
    13,     /* colNo */
    "pipg", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pName */
};

static emlrtRTEInfo qb_emlrtRTEI = {
    83,     /* lineNo */
    21,     /* colNo */
    "pipg", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pName */
};

static emlrtRTEInfo rb_emlrtRTEI = {
    23,     /* lineNo */
    7,      /* colNo */
    "pipg", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pName */
};

static emlrtRTEInfo sb_emlrtRTEI = {
    28,     /* lineNo */
    1,      /* colNo */
    "pipg", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pName */
};

static emlrtRTEInfo tb_emlrtRTEI = {
    30,     /* lineNo */
    1,      /* colNo */
    "pipg", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pName */
};

static emlrtRTEInfo ub_emlrtRTEI = {
    1,      /* lineNo */
    64,     /* colNo */
    "pipg", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pName */
};

static emlrtRTEInfo vb_emlrtRTEI = {
    38,     /* lineNo */
    12,     /* colNo */
    "pipg", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pName */
};

static emlrtRTEInfo wb_emlrtRTEI = {
    57,     /* lineNo */
    17,     /* colNo */
    "pipg", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pName */
};

static emlrtRTEInfo tc_emlrtRTEI = {
    59,     /* lineNo */
    12,     /* colNo */
    "pipg", /* fName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pName */
};

static emlrtRSInfo ce_emlrtRSI = {
    59,     /* lineNo */
    "pipg", /* fcnName */
    "/Users/abhi/GitHub/optimal-preconditioning/solvers/base/pipg.m" /* pathName
                                                                      */
};

/* Function Declarations */
static void binary_expand_op(const emlrtStack *sp, const emlrtRSInfo in2,
                             const b_sparse *in3, const emxArray_real_T *in4,
                             real_T in5, const real_T in6[298],
                             real_T in1[298]);

static void minus(const emlrtStack *sp, emxArray_real_T *in1,
                  const emxArray_real_T *in2);

static void plus(const emlrtStack *sp, emxArray_real_T *in1,
                 const emxArray_real_T *in2);

/* Function Definitions */
static void binary_expand_op(const emlrtStack *sp, const emlrtRSInfo in2,
                             const b_sparse *in3, const emxArray_real_T *in4,
                             real_T in5, const real_T in6[298], real_T in1[298])
{
  emlrtStack st;
  real_T b_in4[298];
  const real_T *in4_data;
  int32_T i;
  int32_T stride_0_0;
  st.prev = sp;
  st.tls = sp->tls;
  in4_data = in4->data;
  stride_0_0 = (in4->size[0] != 1);
  for (i = 0; i < 298; i++) {
    b_in4[i] = in4_data[i * stride_0_0] - in5 * in6[i];
  }
  st.site = (emlrtRSInfo *)&in2;
  c_sparse_mtimes(&st, in3->d, in3->colidx, in3->rowidx, b_in4, in1);
}

static void minus(const emlrtStack *sp, emxArray_real_T *in1,
                  const emxArray_real_T *in2)
{
  emxArray_real_T *b_in1;
  const real_T *in2_data;
  real_T *b_in1_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  in2_data = in2->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in1, 1, &mb_emlrtRTEI);
  i = b_in1->size[0];
  b_in1->size[0] = in1->size[0];
  emxEnsureCapacity_real_T(sp, b_in1, i, &mb_emlrtRTEI);
  b_in1_data = b_in1->data;
  stride_0_0 = (in2->size[0] != 1);
  loop_ub = in1->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_in1_data[i] = in1_data[i] - in2_data[i * stride_0_0];
  }
  i = in1->size[0];
  in1->size[0] = b_in1->size[0];
  emxEnsureCapacity_real_T(sp, in1, i, &mb_emlrtRTEI);
  in1_data = in1->data;
  loop_ub = b_in1->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i] = b_in1_data[i];
  }
  emxFree_real_T(sp, &b_in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void plus(const emlrtStack *sp, emxArray_real_T *in1,
                 const emxArray_real_T *in2)
{
  emxArray_real_T *b_in1;
  const real_T *in2_data;
  real_T *b_in1_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  in2_data = in2->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in1, 1, &tc_emlrtRTEI);
  i = b_in1->size[0];
  b_in1->size[0] = in2->size[0];
  emxEnsureCapacity_real_T(sp, b_in1, i, &tc_emlrtRTEI);
  b_in1_data = b_in1->data;
  stride_0_0 = (in1->size[0] != 1);
  loop_ub = in2->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_in1_data[i] = in1_data[i * stride_0_0] + in2_data[i];
  }
  i = in1->size[0];
  in1->size[0] = b_in1->size[0];
  emxEnsureCapacity_real_T(sp, in1, i, &tc_emlrtRTEI);
  in1_data = in1->data;
  loop_ub = b_in1->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i] = b_in1_data[i];
  }
  emxFree_real_T(sp, &b_in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void pipg(const emlrtStack *sp, const b_sparse P, const real_T q[298],
          const real_T H[58408], const real_T h[196], real_T c,
          const b_sparse D, real_T sigma_max, const real_T ground_truth[298],
          const struct0_T *p, const struct1_T *s, real_T z_opt[298],
          emxArray_real_T *w_opt, real_T *k, real_T *pipg_time)
{
  static const char_T b_b[12] = {'g', 'r', 'o', 'u', 'n', 'd',
                                 '_', 't', 'r', 'u', 't', 'h'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  emxArray_int32_T *D_inv_colidx;
  emxArray_int32_T *D_inv_rowidx;
  emxArray_int32_T *E_colidx;
  emxArray_int32_T *E_rowidx;
  emxArray_int32_T *diag_elems_colidx;
  emxArray_int32_T *diag_elems_rowidx;
  emxArray_int8_T *maxval_colidx;
  emxArray_real_T *D_inv_d;
  emxArray_real_T *E_d;
  emxArray_real_T *diag_elems_d;
  emxArray_real_T *eta;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *r2;
  emxArray_real_T *w;
  emxArray_real_T *w_check;
  emxArray_real_T *wkm1_check;
  emxArray_real_T *z;
  emxArray_real_T *z_check;
  emxArray_real_T *zeta;
  emxArray_real_T *zkm1_check;
  real_T S[298];
  real_T w_proj[196];
  real_T y[196];
  real_T alf;
  real_T bet;
  real_T d;
  real_T d1;
  real_T eps_abs_pipg;
  real_T eps_rel_pipg;
  real_T lam;
  real_T rho_extrap;
  real_T x_tmp;
  real_T *eta_data;
  real_T *w_data;
  real_T *z_check_data;
  real_T *z_data;
  real_T *zeta_data;
  real_T *zkm1_check_data;
  int32_T D_inv_m;
  int32_T D_inv_n;
  int32_T E_m;
  int32_T E_n;
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T idx;
  int32_T loop_ub;
  int32_T *diag_elems_colidx_data;
  int32_T *diag_elems_rowidx_data;
  int8_T *maxval_colidx_data;
  boolean_T exitg1;
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
  /* PIPG */
  /*    [Z_OPT, W_OPT, K, PIPG_TIME] = PIPG(P, q, H, h, c, D, E, SIGMA_MAX,
   * GROUND_TRUTH, P, S) */
  /*  */
  /*  The proportional-integral projected gradient method. */
  st.site = &emlrtRSI;
  tic(&st);
  rho_extrap = s->rho_extrap;
  eps_abs_pipg = s->eps_abs_pipg;
  eps_rel_pipg = s->eps_rel_pipg;
  emxInit_real_T(sp, &zeta, 1, &bb_emlrtRTEI);
  d = p->nu * (p->N - 1.0);
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &c_emlrtDCI, (emlrtConstCTX)sp);
  }
  d1 = (int32_T)muDoubleScalarFloor(d);
  if (d != d1) {
    emlrtIntegerCheckR2012b(d, &b_emlrtDCI, (emlrtConstCTX)sp);
  }
  i = zeta->size[0];
  zeta->size[0] = (int32_T)d + 200;
  emxEnsureCapacity_real_T(sp, zeta, i, &bb_emlrtRTEI);
  zeta_data = zeta->data;
  for (i = 0; i < 200; i++) {
    zeta_data[i] = p->x_ref[i];
  }
  if (d != d1) {
    emlrtIntegerCheckR2012b(d, &b_emlrtDCI, (emlrtConstCTX)sp);
  }
  loop_ub = (int32_T)d;
  for (i = 0; i < loop_ub; i++) {
    zeta_data[i + 200] = 0.0;
  }
  emxInit_real_T(sp, &eta, 1, &cb_emlrtRTEI);
  d = p->nx * (p->N - 1.0);
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &e_emlrtDCI, (emlrtConstCTX)sp);
  }
  d1 = (int32_T)muDoubleScalarFloor(d);
  if (d != d1) {
    emlrtIntegerCheckR2012b(d, &d_emlrtDCI, (emlrtConstCTX)sp);
  }
  i = eta->size[0];
  loop_ub = (int32_T)d;
  eta->size[0] = (int32_T)d;
  emxEnsureCapacity_real_T(sp, eta, i, &cb_emlrtRTEI);
  eta_data = eta->data;
  if (d != d1) {
    emlrtIntegerCheckR2012b(d, &d_emlrtDCI, (emlrtConstCTX)sp);
  }
  for (i = 0; i < loop_ub; i++) {
    eta_data[i] = 0.0;
  }
  emxInit_real_T(sp, &diag_elems_d, 1, &sb_emlrtRTEI);
  emxInit_int32_T(sp, &diag_elems_colidx, &sb_emlrtRTEI);
  emxInit_int32_T(sp, &diag_elems_rowidx, &sb_emlrtRTEI);
  st.site = &b_emlrtRSI;
  sparse_diag(&st, D.d, D.colidx, D.rowidx, diag_elems_d, diag_elems_colidx,
              diag_elems_rowidx);
  diag_elems_rowidx_data = diag_elems_rowidx->data;
  diag_elems_colidx_data = diag_elems_colidx->data;
  w_data = diag_elems_d->data;
  for (b_i = 0; b_i < 298; b_i++) {
    S[b_i] = rtInf;
  }
  i = diag_elems_colidx_data[0];
  i1 = diag_elems_colidx_data[1] - 1;
  for (idx = i; idx <= i1; idx++) {
    S[diag_elems_rowidx_data[idx - 1] - 1] = 1.0 / w_data[idx - 1];
  }
  emxInit_real_T(sp, &r, 2, &db_emlrtRTEI);
  i = r->size[0] * r->size[1];
  r->size[0] = 1;
  r->size[1] = zeta->size[0];
  emxEnsureCapacity_real_T(sp, r, i, &db_emlrtRTEI);
  w_data = r->data;
  b_i = zeta->size[0] - 1;
  for (i = 0; i <= b_i; i++) {
    w_data[i] = (real_T)i + 1.0;
  }
  emxInit_real_T(sp, &r1, 2, &db_emlrtRTEI);
  i = r1->size[0] * r1->size[1];
  r1->size[0] = 1;
  r1->size[1] = zeta->size[0];
  emxEnsureCapacity_real_T(sp, r1, i, &db_emlrtRTEI);
  w_data = r1->data;
  for (i = 0; i <= b_i; i++) {
    w_data[i] = (real_T)i + 1.0;
  }
  emxInit_real_T(sp, &D_inv_d, 1, &tb_emlrtRTEI);
  emxInit_int32_T(sp, &D_inv_colidx, &tb_emlrtRTEI);
  emxInit_int32_T(sp, &D_inv_rowidx, &tb_emlrtRTEI);
  st.site = &c_emlrtRSI;
  D_inv_m = sparse(&st, r, r1, S, zeta->size[0], zeta->size[0], D_inv_d,
                   D_inv_colidx, D_inv_rowidx, &D_inv_n);
  emxFree_real_T(sp, &r1);
  emxFree_real_T(sp, &r);
  emxInit_real_T(sp, &E_d, 1, &ub_emlrtRTEI);
  emxInit_int32_T(sp, &E_colidx, &ub_emlrtRTEI);
  emxInit_int32_T(sp, &E_rowidx, &ub_emlrtRTEI);
  st.site = &d_emlrtRSI;
  E_m = speye(&st, (int32_T)d, E_d, E_colidx, E_rowidx, &E_n);
  i = diag_elems_d->size[0];
  diag_elems_d->size[0] = zeta->size[0];
  emxEnsureCapacity_real_T(sp, diag_elems_d, i, &eb_emlrtRTEI);
  w_data = diag_elems_d->data;
  b_i = zeta->size[0] - 1;
  for (i = 0; i <= b_i; i++) {
    w_data[i] = zeta_data[i];
  }
  st.site = &e_emlrtRSI;
  sparse_mtimes(&st, D_inv_d, D_inv_colidx, D_inv_rowidx, D_inv_m, D_inv_n,
                diag_elems_d, zeta);
  zeta_data = zeta->data;
  st.site = &f_emlrtRSI;
  b_st.site = &f_emlrtRSI;
  sparse_diag(&b_st, P.d, P.colidx, P.rowidx, diag_elems_d, diag_elems_colidx,
              diag_elems_rowidx);
  diag_elems_colidx_data = diag_elems_colidx->data;
  w_data = diag_elems_d->data;
  emxFree_int32_T(&st, &diag_elems_rowidx);
  b_st.site = &cc_emlrtRSI;
  c_st.site = &dc_emlrtRSI;
  d_st.site = &ec_emlrtRSI;
  e_st.site = &fc_emlrtRSI;
  f_st.site = &vc_emlrtRSI;
  g_st.site = &wc_emlrtRSI;
  lam = 0.0;
  i = diag_elems_colidx_data[1] - 1;
  b_i = diag_elems_colidx_data[1] - diag_elems_colidx_data[0];
  if (b_i != 0) {
    bet = 0.0;
    if (diag_elems_colidx_data[1] - 1 >= diag_elems_colidx_data[0]) {
      bet = w_data[diag_elems_colidx_data[0] - 1];
      i1 = diag_elems_colidx_data[0] + 1;
      for (idx = i1; idx <= i; idx++) {
        boolean_T b_p;
        x_tmp = w_data[idx - 1];
        if (muDoubleScalarIsNaN(x_tmp)) {
          b_p = false;
        } else if (muDoubleScalarIsNaN(bet)) {
          b_p = true;
        } else {
          b_p = (bet < x_tmp);
        }
        if (b_p) {
          bet = x_tmp;
        }
      }
    }
    if (b_i < 1) {
      if ((!muDoubleScalarIsNaN(bet)) && (bet > 0.0)) {
        lam = bet;
      }
    } else {
      lam = bet;
    }
  }
  emxFree_int32_T(&g_st, &diag_elems_colidx);
  h_st.site = &xc_emlrtRSI;
  i_st.site = &db_emlrtRSI;
  i = diag_elems_d->size[0];
  diag_elems_d->size[0] = 1;
  emxEnsureCapacity_real_T(&i_st, diag_elems_d, i, &fb_emlrtRTEI);
  w_data = diag_elems_d->data;
  w_data[0] = 0.0;
  emxInit_int8_T(&i_st, &maxval_colidx, &vb_emlrtRTEI);
  i = maxval_colidx->size[0];
  maxval_colidx->size[0] = 2;
  emxEnsureCapacity_int8_T(&i_st, maxval_colidx, i, &fb_emlrtRTEI);
  maxval_colidx_data = maxval_colidx->data;
  maxval_colidx_data[0] = 1;
  maxval_colidx_data[1] = 1;
  if (lam != 0.0) {
    w_data[0] = lam;
    maxval_colidx_data[1] = 2;
  }
  st.site = &f_emlrtRSI;
  lam = 0.0;
  b_i = maxval_colidx_data[1] - 1;
  i = maxval_colidx_data[0];
  emxFree_int8_T(&st, &maxval_colidx);
  b_st.site = &yc_emlrtRSI;
  for (idx = i; idx <= b_i; idx++) {
    lam = w_data[0];
  }
  st.site = &g_emlrtRSI;
  b_st.site = &ad_emlrtRSI;
  c_st.site = &bd_emlrtRSI;
  st.site = &g_emlrtRSI;
  b_st.site = &ad_emlrtRSI;
  c_st.site = &bd_emlrtRSI;
  st.site = &g_emlrtRSI;
  x_tmp = s->omg * s->omg;
  bet = lam * lam + 4.0 * x_tmp * sigma_max;
  if (bet < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &c_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  bet = muDoubleScalarSqrt(bet);
  alf = 2.0 / (lam + bet);
  st.site = &h_emlrtRSI;
  b_st.site = &ad_emlrtRSI;
  c_st.site = &bd_emlrtRSI;
  bet = x_tmp * alf;
  emxInit_real_T(sp, &z, 1, &gb_emlrtRTEI);
  i = z->size[0];
  z->size[0] = zeta->size[0];
  emxEnsureCapacity_real_T(sp, z, i, &gb_emlrtRTEI);
  z_data = z->data;
  b_i = zeta->size[0];
  for (i = 0; i < b_i; i++) {
    z_data[i] = zeta_data[i];
  }
  emxInit_real_T(sp, &w, 1, &hb_emlrtRTEI);
  i = w->size[0];
  w->size[0] = (int32_T)d;
  emxEnsureCapacity_real_T(sp, w, i, &hb_emlrtRTEI);
  w_data = w->data;
  for (i = 0; i < loop_ub; i++) {
    w_data[i] = 0.0;
  }
  emxInit_real_T(sp, &z_check, 1, &ib_emlrtRTEI);
  i = z_check->size[0];
  z_check->size[0] = zeta->size[0];
  emxEnsureCapacity_real_T(sp, z_check, i, &ib_emlrtRTEI);
  z_check_data = z_check->data;
  b_i = zeta->size[0];
  emxInit_real_T(sp, &zkm1_check, 1, &jb_emlrtRTEI);
  i = zkm1_check->size[0];
  zkm1_check->size[0] = zeta->size[0];
  emxEnsureCapacity_real_T(sp, zkm1_check, i, &jb_emlrtRTEI);
  zkm1_check_data = zkm1_check->data;
  for (i = 0; i < b_i; i++) {
    z_check_data[i] = zeta_data[i];
    zkm1_check_data[i] = zeta_data[i];
  }
  emxInit_real_T(sp, &w_check, 1, &kb_emlrtRTEI);
  i = w_check->size[0];
  w_check->size[0] = (int32_T)d;
  emxEnsureCapacity_real_T(sp, w_check, i, &kb_emlrtRTEI);
  w_data = w_check->data;
  for (i = 0; i < loop_ub; i++) {
    w_data[i] = 0.0;
  }
  emxInit_real_T(sp, &wkm1_check, 1, &lb_emlrtRTEI);
  i = wkm1_check->size[0];
  wkm1_check->size[0] = (int32_T)d;
  emxEnsureCapacity_real_T(sp, wkm1_check, i, &lb_emlrtRTEI);
  w_data = wkm1_check->data;
  for (i = 0; i < loop_ub; i++) {
    w_data[i] = 0.0;
  }
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, s->max_iters, mxDOUBLE_CLASS,
                                (int32_T)s->max_iters, &d_emlrtRTEI,
                                (emlrtConstCTX)sp);
  *k = 1.0;
  idx = 0;
  emxInit_real_T(sp, &r2, 1, &wb_emlrtRTEI);
  exitg1 = false;
  while ((!exitg1) && (idx <= (int32_T)s->max_iters - 1)) {
    real_T b[298];
    boolean_T guard1 = false;
    *k = (real_T)idx + 1.0;
    if ((zeta->size[0] != 298) && (zeta->size[0] != 1)) {
      emlrtDimSizeImpxCheckR2021b(zeta->size[0], 298, &e_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    st.site = &i_emlrtRSI;
    b_st.site = &dd_emlrtRSI;
    if (eta->size[0] != 196) {
      if (eta->size[0] == 1) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &b_emlrtRTEI, "MATLAB:innerdim",
                                      "MATLAB:innerdim", 0);
      }
    }
    b_st.site = &cd_emlrtRSI;
    mtimes(H, eta, S);
    st.site = &i_emlrtRSI;
    b_sparse_mtimes(&st, P.d, P.colidx, P.rowidx, zeta, b);
    for (i = 0; i < 298; i++) {
      b[i] = (b[i] + q[i]) + S[i];
    }
    if (zeta->size[0] == 298) {
      for (i = 0; i < 298; i++) {
        b[i] = zeta_data[i] - alf * b[i];
      }
      st.site = &j_emlrtRSI;
      c_sparse_mtimes(&st, D.d, D.colidx, D.rowidx, b, S);
    } else {
      st.site = &j_emlrtRSI;
      binary_expand_op(&st, j_emlrtRSI, &D, zeta, alf, b, S);
    }
    st.site = &j_emlrtRSI;
    proj_D(&st, S, p->N, p->nx, p->nu, p->x_init, p->u_max, p->theta, p->rho,
           p->v_max, r2);
    st.site = &j_emlrtRSI;
    sparse_mtimes(&st, D_inv_d, D_inv_colidx, D_inv_rowidx, D_inv_m, D_inv_n,
                  r2, z);
    z_data = z->data;
    i = diag_elems_d->size[0];
    diag_elems_d->size[0] = z->size[0];
    emxEnsureCapacity_real_T(sp, diag_elems_d, i, &mb_emlrtRTEI);
    w_data = diag_elems_d->data;
    b_i = z->size[0];
    for (i = 0; i < b_i; i++) {
      w_data[i] = 2.0 * z_data[i];
    }
    if ((diag_elems_d->size[0] != zeta->size[0]) &&
        ((diag_elems_d->size[0] != 1) && (zeta->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(diag_elems_d->size[0], zeta->size[0],
                                  &d_emlrtECI, (emlrtConstCTX)sp);
    }
    st.site = &k_emlrtRSI;
    if (diag_elems_d->size[0] == zeta->size[0]) {
      b_i = diag_elems_d->size[0];
      for (i = 0; i < b_i; i++) {
        w_data[i] -= zeta_data[i];
      }
    } else {
      b_st.site = &k_emlrtRSI;
      minus(&b_st, diag_elems_d, zeta);
    }
    b_st.site = &dd_emlrtRSI;
    if (diag_elems_d->size[0] != 298) {
      if (diag_elems_d->size[0] == 1) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &b_emlrtRTEI, "MATLAB:innerdim",
                                      "MATLAB:innerdim", 0);
      }
    }
    b_st.site = &cd_emlrtRSI;
    b_mtimes(H, diag_elems_d, y);
    st.site = &k_emlrtRSI;
    for (i = 0; i < 196; i++) {
      y[i] = eta_data[i] + bet * (y[i] - h[i]);
    }
    /* PROJ_K_POLAR */
    /*    W_PROJ = PROJ_K_POLAR(W, P) */
    /*  */
    /*  Project onto the polar cone, `K_polar`. */
    b_st.site = &kd_emlrtRSI;
    /* PROJ_K */
    /*    W_PROJ = PROJ_K(W, P) */
    /*  */
    /*  Project onto the convex cone, `K`. */
    memcpy(&w_proj[0], &y[0], 196U * sizeof(real_T));
    if (d < 1.0) {
      b_i = 0;
    } else {
      if (d != d1) {
        emlrtIntegerCheckR2012b(d, &emlrtDCI, &b_st);
      }
      if (((int32_T)d < 1) || ((int32_T)d > 196)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, 196, &emlrtBCI, &b_st);
      }
      b_i = (int32_T)d;
    }
    if (b_i - 1 >= 0) {
      memset(&w_proj[0], 0, (uint32_T)b_i * sizeof(real_T));
    }
    i = w->size[0];
    w->size[0] = 196;
    emxEnsureCapacity_real_T(sp, w, i, &nb_emlrtRTEI);
    w_data = w->data;
    for (i = 0; i < 196; i++) {
      w_data[i] = y[i] - w_proj[i];
    }
    b_i = zeta->size[0];
    for (i = 0; i < b_i; i++) {
      zeta_data[i] *= 1.0 - rho_extrap;
    }
    i = diag_elems_d->size[0];
    diag_elems_d->size[0] = z->size[0];
    emxEnsureCapacity_real_T(sp, diag_elems_d, i, &ob_emlrtRTEI);
    w_data = diag_elems_d->data;
    b_i = z->size[0];
    for (i = 0; i < b_i; i++) {
      w_data[i] = rho_extrap * z_data[i];
    }
    if ((zeta->size[0] != diag_elems_d->size[0]) &&
        ((zeta->size[0] != 1) && (diag_elems_d->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(zeta->size[0], diag_elems_d->size[0],
                                  &c_emlrtECI, (emlrtConstCTX)sp);
    }
    if (zeta->size[0] == diag_elems_d->size[0]) {
      b_i = zeta->size[0];
      for (i = 0; i < b_i; i++) {
        zeta_data[i] += w_data[i];
      }
    } else {
      st.site = &ce_emlrtRSI;
      plus(&st, zeta, diag_elems_d);
      zeta_data = zeta->data;
    }
    for (i = 0; i < 196; i++) {
      eta_data[i] *= 1.0 - rho_extrap;
    }
    for (i = 0; i < 196; i++) {
      eta_data[i] += rho_extrap * (y[i] - w_proj[i]);
    }
    guard1 = false;
    if (b_mod((real_T)idx + 1.0, s->check_every) == 0.0) {
      i = memcmp((char_T *)&s->termination[0], (char_T *)&b_b[0], 12);
      if (i == 0) {
        st.site = &l_emlrtRSI;
        b_sparse_mtimes(&st, D.d, D.colidx, D.rowidx, z, S);
        i1 = z_check->size[0];
        z_check->size[0] = 298;
        emxEnsureCapacity_real_T(sp, z_check, i1, &pb_emlrtRTEI);
        z_check_data = z_check->data;
        for (i1 = 0; i1 < 298; i1++) {
          z_check_data[i1] = S[i1];
        }
      }
      if (i == 0) {
        if ((z_check->size[0] != 298) && (z_check->size[0] != 1)) {
          emlrtDimSizeImpxCheckR2021b(z_check->size[0], 298, &b_emlrtECI,
                                      (emlrtConstCTX)sp);
        }
        b_i = z_check->size[0];
        for (i = 0; i < b_i; i++) {
          S[i] = z_check_data[i] - ground_truth[i];
        }
        lam = 0.0;
        x_tmp = 0.0;
        for (b_i = 0; b_i < 298; b_i++) {
          real_T absx;
          absx = muDoubleScalarAbs(S[b_i]);
          if (muDoubleScalarIsNaN(absx) || (absx > lam)) {
            lam = absx;
          }
          absx = muDoubleScalarAbs(ground_truth[b_i]);
          if (muDoubleScalarIsNaN(absx) || (absx > x_tmp)) {
            x_tmp = absx;
          }
        }
        if (100.0 * lam / x_tmp <= s->percent_rel_err) {
          exitg1 = true;
        } else {
          guard1 = true;
        }
      } else {
        if ((z_check->size[0] != zkm1_check->size[0]) &&
            ((z_check->size[0] != 1) && (zkm1_check->size[0] != 1))) {
          emlrtDimSizeImpxCheckR2021b(z_check->size[0], zkm1_check->size[0],
                                      &emlrtECI, (emlrtConstCTX)sp);
        }
        i = diag_elems_d->size[0];
        diag_elems_d->size[0] = z_check->size[0];
        emxEnsureCapacity_real_T(sp, diag_elems_d, i, &qb_emlrtRTEI);
        w_data = diag_elems_d->data;
        b_i = z_check->size[0];
        for (i = 0; i < b_i; i++) {
          w_data[i] = z_check_data[i] - zkm1_check_data[i];
        }
        if (b_norm(diag_elems_d) <=
            eps_abs_pipg +
                eps_rel_pipg *
                    muDoubleScalarMax(b_norm(z_check), b_norm(zkm1_check))) {
          i = diag_elems_d->size[0];
          diag_elems_d->size[0] = (int32_T)d;
          emxEnsureCapacity_real_T(sp, diag_elems_d, i, &rb_emlrtRTEI);
          w_data = diag_elems_d->data;
          for (i = 0; i < loop_ub; i++) {
            w_data[i] = 0.0;
          }
          if (b_norm(diag_elems_d) <=
              eps_abs_pipg +
                  eps_rel_pipg *
                      muDoubleScalarMax(b_norm(w_check), b_norm(wkm1_check))) {
            exitg1 = true;
          } else {
            guard1 = true;
          }
        } else {
          guard1 = true;
        }
      }
    } else {
      guard1 = true;
    }
    if (guard1) {
      idx++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
  }
  emxFree_real_T(sp, &r2);
  emxFree_real_T(sp, &wkm1_check);
  emxFree_real_T(sp, &w_check);
  emxFree_real_T(sp, &zkm1_check);
  emxFree_real_T(sp, &z_check);
  emxFree_real_T(sp, &diag_elems_d);
  emxFree_real_T(sp, &eta);
  emxFree_real_T(sp, &zeta);
  st.site = &m_emlrtRSI;
  b_sparse_mtimes(&st, D.d, D.colidx, D.rowidx, z, z_opt);
  emxFree_real_T(sp, &z);
  st.site = &n_emlrtRSI;
  b_st.site = &ld_emlrtRSI;
  D_inv_m = sparse_times(&b_st, 1.0 / c, E_d, E_colidx, E_rowidx, E_m, E_n,
                         D_inv_d, D_inv_colidx, D_inv_rowidx, &D_inv_n);
  emxFree_int32_T(&st, &E_rowidx);
  emxFree_int32_T(&st, &E_colidx);
  emxFree_real_T(&st, &E_d);
  st.site = &n_emlrtRSI;
  sparse_mtimes(&st, D_inv_d, D_inv_colidx, D_inv_rowidx, D_inv_m, D_inv_n, w,
                w_opt);
  emxFree_real_T(sp, &w);
  emxFree_int32_T(sp, &D_inv_rowidx);
  emxFree_int32_T(sp, &D_inv_colidx);
  emxFree_real_T(sp, &D_inv_d);
  st.site = &o_emlrtRSI;
  *pipg_time = 1000.0 * toc(&st);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (pipg.c) */
