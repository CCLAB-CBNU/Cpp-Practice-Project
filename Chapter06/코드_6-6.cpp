#include <iostream>
using namespace std;

class NumberBox {
private:
    int *num;

public:
    NumberBox(int value) {
        num = new int(value);
        cout << "동적 메모리 할당" << endl;
    }

    ~NumberBox() {
        delete num;
        num = nullptr;
        cout << "동적 메모리 해제" << endl;
    }

    void print() {
        cout << "값: " << *num << endl;
    }
};

int main() {
    NumberBox box(100);
    box.print();
    return 0;
}
