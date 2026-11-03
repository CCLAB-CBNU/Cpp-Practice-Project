#include <iostream>
using namespace std;

class NumberBox {
private:
    int *num;

public:
    NumberBox(int value) {
        num = new int(value);
    }

    ~NumberBox() {
        delete num;
    }

    void print() {
        cout << "값: " << *num << endl;
    }
};

int main() {
    NumberBox box1(100);
    NumberBox box2 = box1;
    box1.print();
    box2.print();
    return 0;
}
