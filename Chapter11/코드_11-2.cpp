#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("hello.txt");

    fout << "Hello File" << endl;
    fout << "C++ 파일 출력 예제" << endl;

    fout.close();

    cout << "파일 저장 완료" << endl;

    return 0;
}
