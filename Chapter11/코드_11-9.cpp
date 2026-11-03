#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ifstream fin("scores.txt");

    if (!fin.is_open()) {
        cout << "파일을 열 수 없습니다." << endl;
        return 1;
    }

    string name;
    int score;

    while (fin >> name >> score) {
        cout << name << " " << score << endl;
    }

    fin.close();

    return 0;
}
