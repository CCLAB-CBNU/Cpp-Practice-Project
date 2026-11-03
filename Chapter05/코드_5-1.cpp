#include <iostream>
using namespace std;

int main() {
    short s = 10;
    int i = 20;
    double d = 3.14;
    char c = 'A';

    short *ps = &s;
    int *pi = &i;
    double *pd = &d;
    char *pc = &c;

    cout << "[변수의 값과 주소 출력]" << endl;
    cout << "s = " << s << ", &s = " << &s << endl;
    cout << "i = " << i << ", &i = " << &i << endl;
    cout << "d = " << d << ", &d = " << &d << endl;
    cout << "c = " << c << ", &c = " << static_cast<void*>(&c) << endl;
    cout << endl;

    cout << "[포인터 변수 출력]" << endl;
    cout << "ps = " << ps << ", *ps = " << *ps << ", &s = " << &s << endl;
    cout << "pi = " << pi << ", *pi = " << *pi << ", &i = " << &i << endl;
    cout << "pd = " << pd << ", *pd = " << *pd << ", &d = " << &d << endl;
    cout << "pc = " << static_cast<void*>(pc) << ", *pc = " << *pc
         << ", &c = " << static_cast<void*>(&c) << endl;
    return 0;
}
