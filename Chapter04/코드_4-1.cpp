#include <iostream>
using namespace std;

void simple();      // ❶ 프로토타입 : 반환값 없음, 매개변수 없음

int main() {
    cout << "main() 시작\n";
    simple();        // ❸ 호출
    cout << "main() 종료\n";
    return 0;
}

void simple() {     // ❷ 정의
    cout << "simple() 함수 실행 중\n";
}
