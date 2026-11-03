#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "동물 소리" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "멍멍" << endl;
    }
};

int main() {
    Dog dog;
    Animal *p = &dog;

    p->sound();
    return 0;
}
