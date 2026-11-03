#include "HiddenLayer.h"
#include "MathUtils.h"

HiddenLayer::HiddenLayer(int inputSize, int outputSize)
    : Layer(inputSize, outputSize) {}

vector<double> HiddenLayer::forward(const vector<double>& input) {
    lastInput = input;
    lastOutput = matVecMultiply(weights, input, bias);
    return lastOutput;
}
