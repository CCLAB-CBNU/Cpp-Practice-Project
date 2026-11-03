#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "동물 소리" << endl;
    }

    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "멍멍" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "야옹" << endl;
    }
};
int main() {
    Dog dog;
    Cat cat;

    Animal *animals[2] = { &dog, &cat };

    for (int i = 0; i < 2; i++) {
        animals[i]->sound();
    }

    return 0;
}
