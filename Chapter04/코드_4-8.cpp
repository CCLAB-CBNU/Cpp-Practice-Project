#include <iostream>
using namespace std;

void byValue(int n) { n = 99; }        // 복사본 변경, 원본 유지
void byAddr(int* p) { *p = 99; }       // 역참조로 원본 변경
void byRef(int& r) { r = 99; }          // 별명으로 원본 변경

int main() {
    int a = 1, b = 1, c = 1;
    cout << "원본 a = " << a << ", 원본 b = " << b << ", 원본 c = " << c << "\n";

    byValue(a);                           // a = 1 (불변)
    byAddr(&b);                           // b = 99 (변경)
    byRef(c);                             // c = 99 (변경)

    cout << "a = " << a << ", b = " << b << ", c = " << c << "\n";
    // 출력: 1 99 99
    return 0;
}
