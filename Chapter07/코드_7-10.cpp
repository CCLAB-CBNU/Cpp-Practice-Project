#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "동물 소리" << endl;
    }
};

class Dog : public Animal {
public:
    void sound(int volume) override {
        cout << "멍멍, 크기: " << volume << endl;
    }
};

int main() {
    Dog dog;

    dog.sound(3);

    return 0;
}
