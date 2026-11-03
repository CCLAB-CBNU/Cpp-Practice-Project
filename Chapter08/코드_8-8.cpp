#include <iostream>
using namespace std;

template <typename T>
class TypeInfo {
public:
    void print() const {
        cout << "일반 자료형입니다." << endl;
    }
};

template <typename T>
class TypeInfo<T*> {
public:
    void print() const {
        cout << "포인터 자료형입니다." << endl;
    }
};

int main() {
    TypeInfo<int> normalType;
    TypeInfo<int*> pointerType;

    normalType.print();
    pointerType.print();

    return 0;
}
