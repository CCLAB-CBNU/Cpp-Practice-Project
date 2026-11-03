#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    int id;
    char name[20];
    double score;
};

int main() {
    Student s = {20250001, "Kim", 92.5};

    ofstream fout("student.dat", ios::binary);

    if (!fout.is_open()) {
        cout << "파일을 열 수 없습니다." << endl;
        return 1;
    }

    fout.write(reinterpret_cast<const char*>(&s), sizeof(Student));

    fout.close();

    cout << "바이너리 파일 저장 완료" << endl;

    return 0;
}
