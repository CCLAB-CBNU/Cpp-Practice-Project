#include <iostream>
using namespace std;

void addTen(int n) {                                  // n은 원본의 복사본
    n = n + 10;
    cout << "함수 내부: n = " << n << "\n";
}

int main() {
    int score = 80;
    addTen(score);
    cout << "함수 외부: score = " << score << "\n";  // 원본 유지
    return 0;
}
