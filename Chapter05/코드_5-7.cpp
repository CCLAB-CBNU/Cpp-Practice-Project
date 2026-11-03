#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    double score;
};

void printStudent(const Student &s) {
    cout << "학번: " << s.id << endl;
    cout << "이름: " << s.name << endl;
    cout << "점수: " << s.score << endl;
}

int main() {
    Student st = {20250001, "Kim", 92.5};
    printStudent(st);
    return 0;
}
