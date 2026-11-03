#include <iostream>
using namespace std;

// 1. 전역 변수
int globalVar = 100; // 프로그램 시작 시 생성, 종료 시 소멸. 어디서든 접근 가능

void func() {
    // 2. 정적 지역 변수
    static int staticVar = 0; // 프로그램 시작 시 생성, 종료 시 소멸. func 내부에서만 접근 가능
    staticVar++;

    // 3. 지역 변수
    int localVar = 10; // func 호출 시 생성, func 종료 시 소멸

    {
        // 4. 블록 변수
        int blockVar = 20; // 블록 진입 시 생성, 블록 탈출 시 소멸
        cout << "Inside block - blockVar: " << blockVar << ", localVar: " << localVar << endl;
    } // blockVar는 여기서 메모리에서 해제됨(소멸)

    // cout << blockVar; // 오류! blockVar의 스코프를 벗어남
    cout << "Inside func - localVar: " << localVar << ", staticVar: " << staticVar << endl;
} // localVar는 여기서 메모리에서 해제됨(소멸)

int main() {
    func();
    func(); // 두 번째 호출 시 staticVar는 이전 값을 유지하지만, localVar는 새로 생성됨
    cout << "Inside main - globalVar: " << globalVar << endl;
    // cout << localVar; // 오류! func의 지역 변수에 접근 불가

    return 0;
}
