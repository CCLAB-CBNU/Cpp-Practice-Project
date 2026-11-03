#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    int id;
    char name[20];
    double score;
};

int main() {
    Student s;

    ifstream fin("student.dat", ios::binary);

    if (!fin.is_open()) {
        cout << "파일을 열 수 없습니다." << endl;
        return 1;
    }

    fin.read(reinterpret_cast<char*>(&s), sizeof(Student));

    fin.close();

    cout << "학번: " << s.id << endl;
    cout << "이름: " << s.name << endl;
    cout << "점수: " << s.score << endl;

    return 0;
}
