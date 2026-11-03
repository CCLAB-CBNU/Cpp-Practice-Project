// Perceptron.h
#ifndef PERCEPTRON_H
#define PERCEPTRON_H

class Perceptron {
private:
    double w1, w2;   // 가중치
    double bias;     // 편향
public:
    Perceptron(double w1, double w2, double bias);  // 생성자
    int calculate(int x1, int x2);                      // 가중합 계산 및 활성화
};

#endif
