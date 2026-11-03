#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Printer {
private:
    T value;

public:
    Printer(T v) {
        value = v;
    }

    void print() const {
        cout << "값: " << value << endl;
    }
};

template <>
class Printer<bool> {
private:
    bool value;

public:
    Printer(bool v) {
        value = v;
    }

    void print() const {
        if (value) {
            cout << "값: 참" << endl;
        } else {
            cout << "값: 거짓" << endl;
        }
    }
};

int main() {
    Printer<int> intPrinter(100);
    Printer<string> stringPrinter("C++");
    Printer<bool> boolPrinter(true);

    intPrinter.print();
    stringPrinter.print();
    boolPrinter.print();

    return 0;
}
