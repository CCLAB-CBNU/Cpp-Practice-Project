#include <iostream>
using namespace std;

class NumberBox {
private:
    int *num;

public:
    NumberBox(int value) {
        num = new int(value);
    }

    NumberBox(const NumberBox &other) {
        num = new int(*other.num);
        cout << "깊은 복사 생성자 호출" << endl;
    }

    ~NumberBox() {
        delete num;
        num = nullptr;
    }

    void setValue(int value) {
        *num = value;
    }

    void print() {
        cout << "값: " << *num << endl;
    }
};

int main() {
    NumberBox box1(100);
    NumberBox box2 = box1;
    box2.setValue(200);
    cout << "box1 ";
    box1.print();
    cout << "box2 ";
    box2.print();
    return 0;
}
