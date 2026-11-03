// main.cpp
#include <iostream>
#include "XORGate.h"
using namespace std;

int main() {
    XORGate xorGate;

    cout << "0 0 -> " << xorGate.calculate(0, 0) << "\n";
    cout << "1 0 -> " << xorGate.calculate(1, 0) << "\n";
    cout << "0 1 -> " << xorGate.calculate(0, 1) << "\n";
    cout << "1 1 -> " << xorGate.calculate(1, 1) << "\n";

    return 0;
}
