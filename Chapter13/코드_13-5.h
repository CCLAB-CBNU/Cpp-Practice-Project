// XORGate.h
#ifndef XORGATE_H
#define XORGATE_H
#include "Perceptron.h"

class XORGate {
private:
    Perceptron nandGate;
    Perceptron orGate;
    Perceptron andGate;

public:
    XORGate();    // 세 내부 게이트의 가중치/편향을 초기화
    int calculate(int x1, int x2);
};

#endif
