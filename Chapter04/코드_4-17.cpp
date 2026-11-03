#include <iostream>
using namespace std;

int sumTo(int n) {
    return n + sumTo(n - 1);   // 종료 조건 누락
}

int main() {
    cout << sumTo(5) << "\n";
    return 0;
}
