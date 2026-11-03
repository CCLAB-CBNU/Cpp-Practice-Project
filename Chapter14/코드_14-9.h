#ifndef NEURALNETWORK_H
#define NEURALNETWORK_H
#include "Layer.h"
#include <vector>
using namespace std;

class NeuralNetwork {
private:
    vector<Layer*> layers;

public:
    NeuralNetwork(int inputSize, int hiddenSize, int outputSize);
    vector<double> predict(const vector<double>& input);
    ~NeuralNetwork();
};

#endif
