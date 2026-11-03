#include <iostream>
using namespace std;

void swap_by_address(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;
    cout << "원본 x = " << x << ", 원본 y = " << y << "\n";
    swap_by_address(&x, &y);
    cout << "x = " << x << ", y = " << y << "\n";
    // 출력 : x = 20, y = 10
    return 0;
}
