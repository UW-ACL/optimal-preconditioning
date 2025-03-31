/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fillIn.c
 *
 * Code generation for function 'fillIn'
 *
 */

/* Include files */
#include "fillIn.h"
#include "rt_nonfinite.h"
#include "ruiz_types.h"

/* Function Definitions */
void b_sparse_fillIn(sparse *this)
{
  int32_T c;
  int32_T i;
  int32_T idx;
  idx = 1;
  i = this->colidx->size[0];
  for (c = 0; c <= i - 2; c++) {
    int32_T ridx;
    ridx = this->colidx->data[c];
    this->colidx->data[c] = idx;
    while (ridx < this->colidx->data[c + 1]) {
      real_T val;
      int32_T currRowIdx;
      currRowIdx = this->rowidx->data[ridx - 1];
      val = this->d->data[ridx - 1];
      ridx++;
      if (val != 0.0) {
        this->d->data[idx - 1] = val;
        this->rowidx->data[idx - 1] = currRowIdx;
        idx++;
      }
    }
  }
  this->colidx->data[this->colidx->size[0] - 1] = idx;
}

void sparse_fillIn(b_sparse *this)
{
  int32_T c;
  int32_T i;
  int32_T idx;
  idx = 1;
  i = this->colidx->size[0];
  for (c = 0; c <= i - 2; c++) {
    int32_T ridx;
    ridx = this->colidx->data[c];
    this->colidx->data[c] = idx;
    int32_T exitg1;
    int32_T i1;
    do {
      exitg1 = 0;
      i1 = this->colidx->data[c + 1];
      if (ridx < i1) {
        real_T val;
        int32_T currRowIdx;
        val = 0.0;
        currRowIdx = this->rowidx->data[ridx - 1];
        while ((ridx < i1) && (this->rowidx->data[ridx - 1] == currRowIdx)) {
          val += this->d->data[ridx - 1];
          ridx++;
        }
        if (val != 0.0) {
          this->d->data[idx - 1] = val;
          this->rowidx->data[idx - 1] = currRowIdx;
          idx++;
        }
      } else {
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }
  this->colidx->data[this->colidx->size[0] - 1] = idx;
}

/* End of code generation (fillIn.c) */
