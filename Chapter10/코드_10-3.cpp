#include <iostream>
#include <stdexcept>
using namespace std;

int divide(int a, int b) {
    if (b == 0) {
        throw invalid_argument("0으로 나눌 수 없습니다.");
    }
    return a / b;
}

int main() {
    try {
        cout << divide(10, 0) << endl;
    }
    catch (const invalid_argument& error) {
        cout << "예외 처리: " << error.what() << endl;
    }
    return 0;
}
