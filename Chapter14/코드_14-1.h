// MathUtils.h -- 행렬곱 및 활성화 함수
#ifndef MATHUTILS_H
#define MATHUTILS_H
#include <vector>
using namespace std;

double sigmoid(double x);
vector<double> matVecMultiply(const vector<vector<double>>& W,
                                     const vector<double>& input,
                                     const vector<double>& bias);
#endif
