#include <iostream>
using namespace std;

void addTen(int& n) {   // n은 원본의 별명
    n = n + 10;            // 별명을 통해 원본 직접 변경
    cout << "함수 내부: n = " << n << "\n";
}

int main() {
    int score = 80;
    addTen(score);       // &score가 아닌 score 그대로 전달
    cout << "함수 외부: score = " << score << "\n";
    return 0;
}
