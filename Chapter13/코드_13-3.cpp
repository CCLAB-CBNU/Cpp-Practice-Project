// main.cpp
#include <iostream>
#include "Perceptron.h"
using namespace std;

int main() {
    Perceptron p(0.5, 0.5, -0.7);  // 가중치 0.5, 0.5 / 편향 -0.7

    cout << p.calculate(0, 0) << "\n";
    cout << p.calculate(1, 0) << "\n";
    cout << p.calculate(0, 1) << "\n";
    cout << p.calculate(1, 1) << "\n";

    return 0;
}
