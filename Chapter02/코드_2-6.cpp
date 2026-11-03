#include <iostream>

using namespace std;

// 모든 멤버가 동일한 시작 메모리 주소를 공유하는 공용체
union Data {
    int i;       // 4바이트
    float f;    // 4바이트
    char c;     // 1바이트
};

int main() {
    Data data;
    // 1. 공용체의 메모리 크기 확인
    // 구조체였다면 4 + 4 + 1 = 9바이트(패딩 포함 시 12바이트)가 필요하지만,
    // 공용체는 가장 큰 멤버 크기(4바이트)만큼만 메모리를 차지한다.
    cout << "Data 공용체 크기: " << sizeof(Data) << " 바이트" << endl;
    cout << "---------------------------------------" << endl;

    // 2. int 멤버 사용 (활성 멤버: i)
    data.i = 100;
    cout << "1) data.i 저장 후   : " << data.i << endl;

    // 3. float 멤버로 값 덮어쓰기 (활성 멤버: f)
    // 기존 data.i가 차지하던 4바이트 공간에 부동소수점 비트를 덮어쓴다.
    data.f = 3.14f;
    cout << "2) data.f 저장 후   : " << data.f << endl;

    // 4. char 멤버로 값 덮어쓰기 (활성 멤버: c)
    // 메모리의 첫 번째 1바이트 공간에 문자 데이터를 덮어쓴다.
    data.c = 'A';
    cout << "3) data.c 저장 후   : " << data.c << endl;

    cout << "---------------------------------------" << endl;
    cout << "※ 현재 유효한 값은 마지막에 대입한 data.c('A')뿐입니다." << endl;

    return 0;
}
