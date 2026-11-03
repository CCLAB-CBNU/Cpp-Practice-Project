// Perceptron.cpp
#include "Perceptron.h"

Perceptron::Perceptron(double w1, double w2, double bias) {
    this->w1 = w1;
    this->w2 = w2;
    this->bias = bias;
}

int Perceptron::calculate(int x1, int x2) {
    double sum = w1 * x1 + w2 * x2 + bias;
    if (sum > 0)
        return 1;
    else
        return 0;
}
