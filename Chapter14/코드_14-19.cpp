// NeuralNetwork.cpp(train 메서드 구현)
#include "NeuralNetwork.h"
#include "HiddenLayer.h"
#include "OutputLayer.h"
#include "Loss.h"
#include <iostream>

NeuralNetwork::NeuralNetwork(int inputSize, int hiddenSize, int outputSize) {
    layers.push_back(new HiddenLayer(inputSize, hiddenSize));
    layers.push_back(new OutputLayer(hiddenSize, outputSize));
}

vector<double> NeuralNetwork::predict(const vector<double>& input) {
    vector<double> current = input;
    for (Layer* layer : layers)
        current = layer->forward(current);    // 다형성 : 타입에 맞는 forward() 호출
    return current;
}

// train 메서드 추가
void NeuralNetwork::train(const vector<vector<double>>& inputs,
                          const vector<vector<double>>& targets,
                          double lr, int epochs) {
    for (int epoch = 0; epoch < epochs; epoch++) {
        double totalLoss = 0.0;

        // 한 에포크 = 전체 학습 데이터를 한 번씩 모두 학습
        for (size_t s = 0; s < inputs.size(); s++) {
            vector<double> output = predict(inputs[s]);    // 1. 순전파
            totalLoss += mse(targets[s], output);            // 2. 손실 계산

            // 3. 역전파 (출력층 -> 은닉층 순으로 거슬러 진행)
            vector<double> delta = layers.back()->backward(targets[s], lr);
            for (int i = (int)layers.size() - 2; i >= 0; i--)
                delta = layers[i]->backward(delta, lr);
                // 4. 가중치 갱신은 backward 내부에서
        }

        if (epoch % 1000 == 0)
            cout << "Epoch " << epoch << " | Loss: " << totalLoss / inputs.size() << "\n";
    }
}

NeuralNetwork::~NeuralNetwork() {
    for (Layer* layer : layers)
        delete layer;
}
