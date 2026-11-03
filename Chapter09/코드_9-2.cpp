#include <iostream>
#include <vector>
using namespace std;

int main() {

vector<int> scores = {80, 90, 70};

    scores.push_back(100);
    scores.insert(scores.begin() + 1, 85);
    scores.erase(scores.begin() + 3);

    cout << "저장된 점수: ";
    for (int score : scores) {
        cout << score << " ";
    }
    cout << endl;

    cout << "첫 번째 점수: " << scores.front() << endl;
    cout << "원소 개수: " << scores.size() << endl;
    return 0;
}
