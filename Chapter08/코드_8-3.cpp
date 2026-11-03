#include <iostream>
#include <string>
using namespace std;

template <typename T1, typename T2>
void printValues(T1 first, T2 second) {
    cout << "첫 번째 값: " << first << endl;
    cout << "두 번째 값: " << second << endl;
}

int main() {
    printValues(10, 3.14);
    cout << endl;
    printValues(string("나이"), 22);

    return 0;
}
