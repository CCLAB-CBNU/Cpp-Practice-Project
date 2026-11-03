#include <iostream>
using namespace std;

const int MAX_LIMIT = 15;  // 출력 허용 최대 층수

int main() {
    int max_floor;
    cout << "쌓고 싶은 피라미드의 최대 층수를 입력하세요: ";
    cin >> max_floor;

    if (max_floor < 1) {
        cout << "1 이상의 정수를 입력해야 합니다." << endl;
        return 0;
    }

    for (int i = 1; i <= max_floor; i++) {
        // [제어 1] 최대 층수를 넘으면 안전을 위해 반복 전체를 중단
        if (i > MAX_LIMIT) {
            cout << "[알림] 시스템 보호를 위해 " << MAX_LIMIT
                << "층까지만 출력합니다." << endl;
            break;  // 전체 for 문을 즉시 빠져나감
        }
        // [제어 2] 짝수 층은 이번 회차만 건너뜀
        if (i % 2 == 0) {
            continue;  // 아래 별 출력 코드를 실행하지 않고 i++로 이동
        }
        // 공백 출력 루프
        for (int j = 1; j <= max_floor - i; j++) {
            cout << " ";
        }
        // 별 출력 루프
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << "프로그램이 종료되었습니다." << endl;
    return 0;
}
