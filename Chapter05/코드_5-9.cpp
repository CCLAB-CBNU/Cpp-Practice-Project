#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "학생 수를 입력하세요: ";
    cin >> n;

    int *scores = new int[n];
    for (int i = 0; i < n; i++) {
        cout << i + 1 << "번째 점수 입력: ";
        cin >> scores[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += scores[i];
    }

    cout << "총점: " << sum << endl;
    cout << "평균: " << static_cast<double>(sum) / n << endl;

    delete[] scores;
    scores = nullptr;
    return 0;
}
