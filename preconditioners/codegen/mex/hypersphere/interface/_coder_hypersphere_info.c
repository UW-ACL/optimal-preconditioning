/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_hypersphere_info.c
 *
 * Code generation for function 'hypersphere'
 *
 */

/* Include files */
#include "_coder_hypersphere_info.h"
#include "emlrt.h"
#include "tmwtypes.h"

/* Function Declarations */
static const mxArray *emlrtMexFcnResolvedFunctionsInfo(void);

/* Function Definitions */
static const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  const char_T *data[5] = {
      "789cdd54cb4ec240149d1a4c5cf860a37c851442f0b195a0280f8d405c18832dbdd0097d"
      "393308ba63e5d2c4850b37c63f70e937f915b6c040dba4a9a6a63e66"
      "737b72eef49cde7b7b917058151042ab687232cb93b832c5c9695c40dee3e7055f9ee04d"
      "478b28e1b9c7f9fb696c9b0683219b0043d261765331756c48066bdc",
      "5880085053bb0665cc74b0060dac43dd0d6a0ed2f75dd40c3894f35c50a1ddabf7754454"
      "3a77a8b9c1ac1eaf01df9bf8643dca01f548faf8f3e285d8a440a828"
      "c92a160f302bf565d1b418d6256dd322601748c10c9b0636baa21b3b7754bb36845a2a10"
      "48eb1eff5644ff6b21fe396f9903202dcc80488ea999fe30a2fe7a88",
      "3ee7dba602248ded212286a4a5a92511eaccd077f5b112e283f35febe37898ed5c59a220"
      "fa4a386924f77f19e08fd73fccbf3fcef397c671947defc6a977f7f0"
      "928a538f9f9fd28bfa1f6c04e8257dbcdcacb19c7c7554d24e2bbdadcc8eac958eb7f7e6"
      "3e4e4274c27ca0001cd7fbfffa3e8e3a07a910ff9ca72aee30505abf",
      "7d2fbf45f47116e283f3d1fa19504dbbb771ed93c798f7f3d3f3281fa71e3fff7d3fd7ca"
      "98403e9bcb158a6055b5c16ee156adfc83fdfc0121c9eabf",
      ""};
  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&data[0], 3144U, &nameCaptureInfo);
  return nameCaptureInfo;
}

mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xEntryPoints;
  mxArray *xInputs;
  mxArray *xResult;
  const char_T *propFieldName[7] = {
      "Version",      "ResolvedFunctions", "Checksum",    "EntryPoints",
      "CoverageInfo", "IsPolymorphic",     "PropertyList"};
  const char_T *epFieldName[6] = {
      "Name",           "NumberOfInputs", "NumberOfOutputs",
      "ConstantInputs", "FullPath",       "TimeStamp"};
  xEntryPoints =
      emlrtCreateStructMatrix(1, 1, 6, (const char_T **)&epFieldName[0]);
  xInputs = emlrtCreateLogicalMatrix(1, 6);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("hypersphere"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(6.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(11.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 0, "FullPath",
      emlrtMxCreateString("/Users/abhi/GitHub/optimal-preconditioning/"
                          "preconditioners/hypersphere.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp",
                emlrtMxCreateDoubleScalar(739707.03203703708));
  xResult =
      emlrtCreateStructMatrix(1, 1, 7, (const char_T **)&propFieldName[0]);
  emlrtSetField(xResult, 0, "Version",
                emlrtMxCreateString("9.14.0.2206163 (R2023a)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions",
                (mxArray *)emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "Checksum",
                emlrtMxCreateString("hPWkc8GDLC99wuAjO9txFF"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

/* End of code generation (_coder_hypersphere_info.c) */
