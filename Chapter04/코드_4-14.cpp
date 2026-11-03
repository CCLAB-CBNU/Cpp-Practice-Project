#include <iostream>
using namespace std;

void countUp(int n) {
    cout << n << "\n";
    countUp(n + 1);     // 종료 조건 없이 자기 자신을 계속 호출
}

int main() {
    countUp(1);
    return 0;
}
