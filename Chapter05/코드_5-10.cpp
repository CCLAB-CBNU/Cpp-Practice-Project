#include <iostream>
#include <string>
using namespace std;

struct Student {
    int num;
    string name;
    double score;
};

int main() {
    Student *st = new Student;
    st->num = 20250001;
    st->name = "Lee";
    st->score = 88.5;

    cout << "학번: " << st->num << endl;
    cout << "이름: " << st->name << endl;
    cout << "점수: " << st->score << endl;
    cout << endl;

    cout << "(*st).num = " << (*st).num << endl;
    cout << "st->num = " << st->num << endl;

    delete st;
    st = nullptr;
    return 0;
}
