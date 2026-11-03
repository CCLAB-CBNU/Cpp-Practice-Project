#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swapValue(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10;
    int y = 20;

    cout << "정수 교환 전: " << x << ", " << y << endl;
    swapValue(x, y);
    cout << "정수 교환 후: " << x << ", " << y << endl;

    string first = "Apple";
    string second = "Banana";

    cout << "문자열 교환 전: " << first << ", " << second << endl;
    swapValue(first, second);
    cout << "문자열 교환 후: " << first << ", " << second << endl;

    return 0;
}
