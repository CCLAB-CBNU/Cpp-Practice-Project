#include <iostream>
using namespace std;

template <typename T>
T getLarger(T a, T b) {
    return a > b ? a : b;
}

int main() {
    cout << getLarger(10, 20.5) << endl;

    return 0;
}
