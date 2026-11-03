#include <iostream>
using namespace std;

void addTenByValue(int n) {
    n += 10;
}

void addTenByAddress(int *p) {
    if (p != nullptr) {
        *p += 10;
    }
}

void addTenByReference(int &r) {
    r += 10;
}

int main() {
    int a = 10;
    int b = 10;
    int c = 10;

    addTenByValue(a);
    addTenByAddress(&b);
    addTenByReference(c);

    cout << "값에 의한 전달 결과 a = " << a << endl;
    cout << "주소에 의한 전달 결과 b = " << b << endl;
    cout << "참조에 의한 전달 결과 c = " << c << endl;
    return 0;
}
