#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "점수를 입력하세요 (0~100): ";
    cin >> score;

    if (score < 0 || score > 100) {
        cout << "오류: 0에서 100 사이의 점수를 입력해야 합니다." << endl;
        return 1;
    }

    char grade;

    if (score >= 90) grade = 'A';
    else if (score >= 80) grade = 'B';
    else if (score >= 70) grade = 'C';
    else grade = 'F';

    cout << "결과 등급: " << grade << endl;

    switch (grade) {
        case 'A':
            cout << "장학금 대상자입니다!" << endl;
            break;
        case 'B':
            cout << "합격입니다. 수고 많았습니다!" << endl;
            break;
        case 'C':
            cout << "합격입니다. 다음 학기도 화이팅!" << endl;
            break;
        case 'F':
            cout << "재수강 대상입니다. 면담을 신청하세요." << endl;
            break;
        default:
            cout << "올바르지 않은 등급입니다." << endl;
            break;
    }
    return 0;
}
