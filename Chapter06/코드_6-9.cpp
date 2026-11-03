#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int score;

public:
    void setName(string studentName) {
        name = studentName;
    }

    void setScore(int studentScore) {
        if (studentScore >= 0 && studentScore <= 100) {
            score = studentScore;
        }
    }

    string getName() {
        return name;
    }

    int getScore() {
        return score;
    }
};

int main() {
    Student s;
    s.setName("Park");
    s.setScore(95);
    cout << "이름: " << s.getName() << endl;
    cout << "점수: " << s.getScore() << endl;
    return 0;
}
