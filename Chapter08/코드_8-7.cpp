#include <iostream>
using namespace std;

template <typename T>
void printValue(T value) {
    cout << "일반 값: " << value << endl;
}

template <>
void printValue<bool>(bool value) {
    cout << "논리 값: " << (value ? "true" : "false") << endl;
}

int main() {
    printValue(10);
    printValue(3.14);
    printValue(true);

    return 0;
}
