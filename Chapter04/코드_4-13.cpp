#include <iostream>
using namespace std;

int add(int a, int b) {
    int result = a + b;     // 지역 변수
    return result;
}

int main() {
    int x = 3, y = 7;
    int sum = add(x, y);    // add() 호출
    cout << "합계: " << sum << "\n";
    return 0;
}
