#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int id;
    string name;
    double score;

public:
    Student(int studentId, string studentName, double studentScore) {
        id = studentId;
        name = studentName;
        score = studentScore;
    }

    void printInfo() {
        cout << "학번: " << id << endl;
        cout << "이름: " << name << endl;
        cout << "점수: " << score << endl;
    }
};

int main() {
    Student s1(20250001, "Lee", 88.5);
    s1.printInfo();
    return 0;
}
