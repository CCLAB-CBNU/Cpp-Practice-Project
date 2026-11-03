#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

class Trace {
private:
    string name;
public:
    Trace(const string& value) : name(value) {
        cout << name << " 생성" << endl;
    }
    ~Trace() {
        cout << name << " 소멸" << endl;
    }
};

void level3() {
    Trace object("level3 객체");
    throw runtime_error("level3에서 예외 발생");
}

void level2() {
    Trace object("level2 객체");
    level3();
}

void level1() {
    Trace object("level1 객체");
    level2();
}

int main() {
    try {
        level1();
    }
    catch (const exception& error) {
        cout << "main에서 처리: " << error.what() << endl;
    }
    return 0;
}
