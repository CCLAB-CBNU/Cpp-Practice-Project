#include <iostream>
using namespace std;

void countUp(int n, int max) {
    if (n > max) return;    // 종료 조건
    cout << n << "\n";
    countUp(n + 1, max);
}

int main() {
    countUp(1, 5);           // 1부터 5까지만 출력
    return 0;
}
