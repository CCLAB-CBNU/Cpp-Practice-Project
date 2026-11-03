#include <iostream>
using namespace std;
int main() {
    int positive = 5;     // 양수 5
    int negative = -5;    // 음수 -5(2의 보수로 저장됨)
   cout << positive << " + " << negative << " = " << (positive + negative) << endl;
    // 내부적으로 일어나는 비트 연산 과정:
    //   5:  0000 0000 0000 0000 0000 0000 0000 0101
    //  -5:  1111  1111  1111  1111  1111  1111 1111  1011   (2의 보수)
    // ------------------------------------------------
    //      0000 0000 0000 0000 0000 0000 0000 0000   (= 0)
   return 0;
}
