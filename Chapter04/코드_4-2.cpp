#include <iostream>
using namespace std;

void cheers(int n);                   // 프로토타입 : int를 받고 반환값 없음
double cube(double x);               // 프로토타입 : double을 받고 double 반환

int main() {
    cheers(3);                          // void 함수 : 호출 자체가 목적

    double side;
    cout << "한 변의 길이를 입력하세요: ";
    cin >> side;

    double volume = cube(side);     // 반환값을 변수에 저장
    cout << side << "의 세제곱 = " << volume << "\n";

    cheers(cube(2));                   // 반환값을 다른 함수의 인자로 직접 사용
    return 0;
}

void cheers(int n) {
    for (int i = 0; i < n; i++) {
        cout << "Cheers! ";
    }
    cout << "\n";
}

double cube(double x) {
    return x * x * x;
}
