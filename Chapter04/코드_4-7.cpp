#include <iostream>
using namespace std;

void swap_by_ref(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    cout << "원본 x = " << x << ", 원본 y = " << y << "\n";
    swap_by_ref(x, y);   // &x, &y가 아닌 x, y 그대로
    cout << "x = " << x << ", y = " << y << "\n";
    // 출력: x = 20, y = 10
    return 0;
}
