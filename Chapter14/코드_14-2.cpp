#include "MathUtils.h"
#include <cmath>

double sigmoid(double x) {
    return 1.0 / (1.0 + exp(-x));
}

vector<double> matVecMultiply(const vector<vector<double>>& W,
                                     const vector<double>& input,
                                     const vector<double>& bias) {
    vector<double> result(W.size(), 0.0);   // 출력 뉴런 수만큼 벡터 생성
    for (size_t i = 0; i < W.size(); i++) {
        double sum = 0.0;
        for (size_t j = 0; j < input.size(); j++)
            sum += W[i][j] * input[j];
        result[i] = sigmoid(sum + bias[i]);
    }
    return result;
}
