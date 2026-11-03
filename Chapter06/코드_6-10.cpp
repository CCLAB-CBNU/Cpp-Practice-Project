#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int score;

public:
    Student(string n, int s) {
        name = n;
        score = s;
    }

    Student(const Student &other) {
        name = other.name;
        score = other.score;
        cout << "복사 생성자 호출" << endl;
    }

    void printInfo() {
        cout << "이름: " << name << endl;
        cout << "점수: " << score << endl;
    }
};

int main() {
    Student s1("Kim", 90);
    Student s2 = s1;
    s1.printInfo();
    cout << endl;
    s2.printInfo();
    return 0;
}
