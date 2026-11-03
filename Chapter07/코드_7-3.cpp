#include <iostream>
#include <string>
using namespace std;

class Printer {
public:
    void print(int n) {
        cout << "정수 출력: " << n << endl;
    }

    void print(double d) {
        cout << "실수 출력: " << d << endl;
    }

    void print(string s) {
        cout << "문자열 출력: " << s << endl;
    }
};

int main() {
    Printer p;

    p.print(10);
    p.print(3.14);
    p.print("Hello C++");

    return 0;
}
