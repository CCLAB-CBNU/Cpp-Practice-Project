#include "NeuralNetwork.h"
#include "HiddenLayer.h"
#include "OutputLayer.h"

NeuralNetwork::NeuralNetwork(int inputSize, int hiddenSize, int outputSize) {
    layers.push_back(new HiddenLayer(inputSize, hiddenSize));
    layers.push_back(new OutputLayer(hiddenSize, outputSize));
}

vector<double> NeuralNetwork::predict(const vector<double>& input) {
    vector<double> current = input;
    for (Layer* layer : layers)
        current = layer->forward(current);  // 다형성 : 실제 계층 타입에 맞는 forward() 호출
    return current;
}

NeuralNetwork::~NeuralNetwork() {
    for (Layer* layer : layers)
        delete layer;
}
