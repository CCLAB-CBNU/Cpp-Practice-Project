#include <iostream>
using namespace std;

template <typename T>
T getMax(T a, T b) {
    return a > b ? a : b;
}

int main() {
    cout << "정수 최댓값: " << getMax(10, 20) << endl;
    cout << "실수 최댓값: " << getMax(3.14, 2.75) << endl;

    return 0;
}
