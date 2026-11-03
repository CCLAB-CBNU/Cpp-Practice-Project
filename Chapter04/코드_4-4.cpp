#include <iostream>
using namespace std;

void addTen(int* p) {   // 포인터로 주소를 받음
    *p = *p + 10;          // 역참조로 원본 직접 변경
    cout << "함수 내부: *p = " << *p << "\n";
}

int main() {
    int score = 80;
    addTen(&score);      // score의 주소를 전달
    cout << "함수 외부: score = " << score << "\n";
    return 0;
}
