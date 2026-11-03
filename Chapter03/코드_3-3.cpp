#include <iostream>
using namespace std;

int main() {
    int max_floor;
    cout << "마름모의 중간 높이(가장 긴 줄)를 입력하세요: ";
    cin >> max_floor;

    // 15층 제한 로직 유지
    if (max_floor > 15) {
        cout << "[알림] 시스템 보호를 위해 최대 크기를 15로 제한합니다." << endl;
        max_floor = 15;
    }

    // --- 1. 상단 삼각형 (기존 피라미드 로직) ---
    for (int i = 1; i <= max_floor; i++) {
        // 공백 출력: (전체 높이 - 현재 층수)
        for (int j = 1; j <= max_floor - i; j++) {
            cout << " ";
        }
        // 별 출력: (2 * 현재 층수 - 1)
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
    // --- 2. 하단 삼각형 (역피라미드 로직) ---
    for (int i = max_floor - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
