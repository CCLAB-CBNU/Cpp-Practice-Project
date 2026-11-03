#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("log.txt", ios::app);

    if (!fout.is_open()) {
        cout << "파일을 열 수 없습니다." << endl;
        return 1;
    }

    fout << "프로그램 실행 기록 추가" << endl;

    fout.close();

    cout << "로그 추가 완료" << endl;

    return 0;
}
