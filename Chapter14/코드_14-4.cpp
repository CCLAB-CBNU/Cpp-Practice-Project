#include "Layer.h"
#include <cstdlib>

Layer::Layer(int inputSize, int outputSize) {
    weights.resize(outputSize, vector<double>(inputSize));
    bias.resize(outputSize, 0.0);
    for (int i = 0; i < outputSize; i++)
        for (int j = 0; j < inputSize; j++)
            weights[i][j] = ((double)rand() / RAND_MAX) * 0.2 - 0.1;  // -0.1~0.1 랜덤 초기화
}
