#include <iostream>

using namespace std;

enum Color { RED, GREEN, BLUE };       // 0, 1, 2 자동 할당

enum class Day { MON = 1, TUE, WED };  // C++11 scoped enum

int main() {
    Color c = GREEN;
    cout << "GREEN = " << c << endl;
    Day d = Day::TUE;
    // cout << d;  // 오류! scoped enum은 직접 출력 불가(타입 안전)
    return 0;
}
