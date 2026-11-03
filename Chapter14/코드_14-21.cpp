// NeuralNetwork.cpp -- 은닉층을 하나 더 추가
NeuralNetwork::NeuralNetwork(int inputSize, int hiddenSize, int outputSize) {
    layers.push_back(new HiddenLayer(inputSize, hiddenSize));    // 2 -> 8
    layers.push_back(new HiddenLayer(hiddenSize, hiddenSize));   // 8 -> 8 (추가)
    layers.push_back(new OutputLayer(hiddenSize, outputSize));   // 8 -> 1
}
