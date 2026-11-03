// Layer.h(기존 코드 수정)
#ifndef LAYER_H
#define LAYER_H
#include <vector>
using namespace std;

class Layer {
protected:
    vector<vector<double>> weights;
    vector<double> bias;
    vector<double> lastInput;    // 역전파에서 가중치 갱신 시 필요
    vector<double> lastOutput;

public:
    Layer(int inputSize, int outputSize);
    virtual vector<double> forward(const vector<double>& input) = 0;
    // backward()의 인자 의미는 계층마다 다르다.
    // - 출력층 : 정답(target) 벡터를 받는다.
    // - 은닉층 : 다음 층에서 전파된 오차(propagated error) 벡터를 받는다.
    // 반환값은 항상 "이전 층에 전달할 전파된 오차(Wᵀ * delta)"이다.
    virtual vector<double> backward(const vector<double>& arg, double lr) = 0;
    virtual ~Layer() {}
};

#endif
