#include <iostream>
using namespace std;

class Test {
public:
    Test() {
        cout << "생성자 호출" << endl;
    }

    ~Test() {
        cout << "소멸자 호출" << endl;
    }
};

int main() {
    cout << "main 함수 시작" << endl;
    Test t;
    cout << "main 함수 종료 직전" << endl;
    return 0;
}
