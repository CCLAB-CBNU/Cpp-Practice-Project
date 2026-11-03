// HiddenLayer.h(수정)
#ifndef HIDDENLAYER_H
#define HIDDENLAYER_H
#include "Layer.h"

class HiddenLayer : public Layer {
public:
    HiddenLayer(int inputSize, int outputSize);
    vector<double> forward(const vector<double>& input) override;
    vector<double> backward(const vector<double>& propagatedError, double lr) override;
};

#endif
