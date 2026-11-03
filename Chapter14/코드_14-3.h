#ifndef LAYER_H
#define LAYER_H
#include <vector>
using namespace std;

class Layer {
protected:
    vector<vector<double>> weights;  // 가중치 행렬
    vector<double> bias;               // 편향 벡터
    vector<double> lastInput;         // 가장 최근 순전파 입력
    vector<double> lastOutput;        // 가장 최근 순전파 출력
public:
    Layer(int inputSize, int outputSize);
    virtual vector<double> forward(const vector<double>& input) = 0;  // 순수 가상 함수
    virtual ~Layer() {}
};

#endif
