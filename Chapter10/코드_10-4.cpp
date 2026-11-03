#include <iostream>
#include <stdexcept>
using namespace std;

int calculate(int value, int divisor) {
    if (value < 0) {
        throw out_of_range("value는 0 이상이어야 합니다.");
    }
    if (divisor == 0) {
        throw invalid_argument("divisor는 0이 될 수 없습니다.");
    }
    return value / divisor;
}

int main() {
    try {
        cout << calculate(-10, 2) << endl;
    }
    catch (const invalid_argument& error) {
        cout << "잘못된 인자: " << error.what() << endl;
    }
    catch (const out_of_range& error) {
        cout << "범위 오류: " << error.what() << endl;
    }
    catch (const exception& error) {
        cout << "표준 예외: " << error.what() << endl;
    }
    return 0;
}
