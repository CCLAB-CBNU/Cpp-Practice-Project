// main.cpp
#include <iostream>
#include <string>
#include "Perceptron.h"

using namespace std;

void printTruthTable(Perceptron& gate, const string& name) {
    cout << "[" << name << "]\n";
    cout << "0 0 -> " << gate.calculate(0, 0) << "\n";
    cout << "1 0 -> " << gate.calculate(1, 0) << "\n";
    cout << "0 1 -> " << gate.calculate(0, 1) << "\n";
    cout << "1 1 -> " << gate.calculate(1, 1) << "\n\n";
}

int main() {
    Perceptron AND(0.5, 0.5, -0.7);
    Perceptron OR(0.5, 0.5, -0.2);
    Perceptron NAND(-0.5, -0.5, 0.7);

    printTruthTable(AND, "AND");
    printTruthTable(OR, "OR");
    printTruthTable(NAND, "NAND");

    return 0;
}
