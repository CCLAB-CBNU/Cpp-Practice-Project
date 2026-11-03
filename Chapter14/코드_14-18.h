// NeuralNetwork.h 수정(train 메서드 추가)
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
    void train(const vector<vector<double>>& inputs,
               const vector<vector<double>>& targets,
               double lr, int epochs);

    ~NeuralNetwork();
};

#endif
