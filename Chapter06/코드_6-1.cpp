#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int id;
    string name;
    double score;

    void printInfo() {
        cout << "학번: " << id << endl;
        cout << "이름: " << name << endl;
        cout << "점수: " << score << endl;
    }
};

int main() {
    Student s1;
    s1.id = 20250001;
    s1.name = "Kim";
    s1.score = 92.5;
    s1.printInfo();
    return 0;
}
