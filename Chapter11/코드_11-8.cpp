#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("not_exist.txt");

    if (!fin.is_open()) {
        cout << "파일 열기 실패" << endl;
        return 1;
    }

    cout << "파일 열기 성공" << endl;

    fin.close();

    return 0;
}
