#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void printPerson() {
        cout << "이름: " << name << endl;
        cout << "나이: " << age << endl;
    }
};

class Student : public Person {
private:
    int studentId;

public:
    Student(string n, int a, int id) : Person(n, a) {
        studentId = id;
    }

    void printStudent() {
        printPerson();
        cout << "학번: " << studentId << endl;
    }
};

int main() {
    Student s("Kim", 22, 20250001);

    s.printStudent();

    return 0;
}
