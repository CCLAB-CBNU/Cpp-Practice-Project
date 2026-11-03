// mathutils.cpp
#include <iostream>
#include "mathutils.h"   // 직접 만든 헤더는 ""로 포함
using namespace std;

double square(double x) {
    return x * x;
}

void printResult(double x, double result) {
    cout << x << "의 제곱 = " << result << "\n";
}
