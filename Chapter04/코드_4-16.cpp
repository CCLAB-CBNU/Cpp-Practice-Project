#include <iostream>
using namespace std;

inline double square(double x) {    // inline 키워드
    return x * x;
}

int main() {
    double a = 3.0;
    double result = square(a);        // 이 줄이 컴파일 시
                                           // result = a * a;로 대체됨
    cout << result << "\n";
    return 0;
}
