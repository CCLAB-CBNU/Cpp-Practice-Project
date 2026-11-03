#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> scores = {65, 80, 95, 70, 55};
    int threshold = 70;

    int count = count_if(
        scores.begin(),
        scores.end(),
        [threshold](int score) {
            return score >= threshold;
        }
    );

    cout << threshold << "점 이상 인원: " << count << endl;

    sort(scores.begin(), scores.end(),
         [](int a, int b) {
             return a > b;
         });

    cout << "내림차순 정렬: ";
    for (int score : scores) {
        cout << score << " ";
    }
    cout << endl;

    return 0;
}
