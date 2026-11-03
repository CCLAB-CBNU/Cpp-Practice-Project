#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    int id;
    char name[20];
    double score;
};

int main() {
    Student students[3] = {
        {20250001, "Kim", 90.5},
        {20250002, "Lee", 85.0},
        {20250003, "Park", 95.5}
    };

    ofstream fout("students.dat", ios::binary);

    if (!fout.is_open()) {
        cout << "파일을 열 수 없습니다." << endl;
        return 1;
    }

    fout.write(reinterpret_cast<const char*>(students), sizeof(students));

    fout.close();

    cout << "학생 배열 저장 완료" << endl;

    return 0;
}
