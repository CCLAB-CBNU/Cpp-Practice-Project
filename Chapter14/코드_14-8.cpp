#include "OutputLayer.h"
#include "MathUtils.h"

OutputLayer::OutputLayer(int inputSize, int outputSize)
    : Layer(inputSize, outputSize) {}

vector<double> OutputLayer::forward(const vector<double>& input) {
    lastInput = input;
    lastOutput = matVecMultiply(weights, input, bias);
    return lastOutput;
}
