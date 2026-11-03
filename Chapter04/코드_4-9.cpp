// main.cpp(분리 전 -- 모든 코드가 한 파일에)
#include <iostream>
using namespace std;

double square(double x);
void printResult(double x, double result);

int main() {
    double val = 5.0;
    double result = square(val);
    printResult(val, result);
    return 0;
}

double square(double x) {
    return x * x;
}

void printResult(double x, double result) {
    cout << x << "의 제곱 = " << result << "\n";
}
