#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
    string name;

public:
    Animal(string n) {
        name = n;
    }

    void printName() {
        cout << "이름: " << name << endl;
    }
};

class Dog : public Animal {
public:
    Dog(string n) : Animal(n) {}

    void bark() {
        cout << "멍멍" << endl;
    }
};

class Cat : public Animal {
public:
    Cat(string n) : Animal(n) {}

    void meow() {
        cout << "야옹" << endl;
    }
};

int main() {
    Dog d("초코");
    Cat c("나비");

    d.printName();
    d.bark();

    c.printName();
    c.meow();

    return 0;
}
