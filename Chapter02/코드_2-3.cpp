#include <iostream>
#include <climits> // UINT_MAX 사용을 위한 헤더

using namespace std;
int main() {
    // =============================================================
    // 1. 부호 없는 정수(unsigned int): C++ 표준이 보장하는 순환(Wrap-around)
    // =============================================================
    unsigned int uMin = 0;
    unsigned int uMax = UINT_MAX; // 4294967295
    cout << "[1] 부호 없는 정수 (unsigned int)" << endl;
    cout << "Unsigned Min value : " << uMin << endl;
    cout << "Unsigned Max value : " << uMax << endl;
    cout << "Max value + 1      : " << uMax + 1 << " (0으로 순환)" << endl;
    cout << "Min value - 1      : " << uMin - 1 << " (최댓값으로 순환)" << endl;
    cout << "-------------------------------------------------------------" << endl;
    // =============================================================
    // 2. 부호 있는 정수(signed int): 하드웨어 비트 반전 vs 정의되지 않은 동작(UB)
    // =============================================================
    int sMin = INT_MIN; // -2147483648
    int sMax = INT_MAX; //  2147483647
    cout << "[2] 부호 있는 정수 (signed int)" << endl;
    cout << "Signed Min value   : " << sMin << endl;
    cout << "Signed Max value   : " << sMax << endl;
    cout << "Max value + 1      : " << sMax + 1 << " (하드웨어: 최솟값 / 표준: UB)" << endl;
    cout << "Min value - 1      : " << sMin - 1 << " (하드웨어: 최댓값 / 표준: UB)" << endl;
    return 0;
}
