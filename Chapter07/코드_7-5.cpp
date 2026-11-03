#include <iostream>
using namespace std;

class Money {
private:
    int won;

public:
    Money(int w) {
        won = w;
    }

    Money operator+(const Money &other) {
        return Money(won + other.won);
    }

    void print() {
        cout << won << "원" << endl;
    }
};

int main() {
    Money m1(1000);
    Money m2(2500);

    Money result = m1 + m2;

    result.print();

    return 0;
}
