// OutputLayer.h(수정)
#ifndef OUTPUTLAYER_H
#define OUTPUTLAYER_H
#include "Layer.h"

class OutputLayer : public Layer {
public:
    OutputLayer(int inputSize, int outputSize);
    vector<double> forward(const vector<double>& input) override;
    vector<double> backward(const vector<double>& target, double lr) override;
};

#endif
