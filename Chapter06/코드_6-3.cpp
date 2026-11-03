#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int id;
    string name;
    double score;

    Student() {
        id = 0;
        name = "None";
        score = 0.0;
        cout << "기본 생성자 호출" << endl;
    }

    void printInfo() {
        cout << "학번: " << id << endl;
        cout << "이름: " << name << endl;
        cout << "점수: " << score << endl;
    }
};

int main() {
    Student s1;
    s1.printInfo();
    return 0;
}
