#include <iostream>
#include <string>
using namespace std;

template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    Pair(T1 f, T2 s) {
        first = f;
        second = s;
    }

    void print() const {
        cout << "첫 번째 값: " << first << endl;
        cout << "두 번째 값: " << second << endl;
    }
};

int main() {
    Pair<string, int> student("Kim", 90);
    Pair<string, double> product("Keyboard", 35000.5);

    cout << "[학생 정보]" << endl;
    student.print();

    cout << endl;
    cout << "[상품 정보]" << endl;
    product.print();

    return 0;
}
