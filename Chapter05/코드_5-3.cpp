#include <iostream>
using namespace std;
int main() {
    int score = 80;
    int &refScore = score;

    cout << "수정 전 score = " << score << endl;
    cout << "수정 전 refScore = " << refScore << endl;

    refScore = 95;

    cout << "수정 후 score = " << score << endl;
    cout << "수정 후 refScore = " << refScore << endl;
    return 0;
}
