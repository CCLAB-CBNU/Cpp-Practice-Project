#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream fout("scores.txt");

    if (!fout.is_open()) {
        cout << "파일을 열 수 없습니다." << endl;
        return 1;
    }

    fout << "Kim 90" << endl;
    fout << "Lee 85" << endl;
    fout << "Park 95" << endl;

    fout.close();

    cout << "scores.txt 파일 저장 완료" << endl;

    return 0;
}
