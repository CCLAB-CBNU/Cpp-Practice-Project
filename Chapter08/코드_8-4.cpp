#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Box {
private:
    T value;

public:
    Box(T v) {
        value = v;
    }

    void setValue(T v) {
        value = v;
    }

    T getValue() const {
        return value;
    }
};

int main() {
    Box<int> intBox(100);
    Box<double> doubleBox(3.14);
    Box<string> stringBox("C++");

    cout << "정수 Box: " << intBox.getValue() << endl;
    cout << "실수 Box: " << doubleBox.getValue() << endl;
    cout << "문자열 Box: " << stringBox.getValue() << endl;

    return 0;
}
