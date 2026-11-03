#include "Loss.h"

double mse(const vector<double>& target, const vector<double>& output) {
    double sum = 0.0;
    for (size_t i = 0; i < target.size(); i++) {
        double diff = target[i] - output[i];
        sum += diff * diff;
    }
    return sum / target.size();
}
