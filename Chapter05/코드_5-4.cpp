#include <iostream>
using namespace std;

void swapValue(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10;
    int y = 20;

    cout << "교환 전 x = " << x << ", y = " << y << endl;
    swapValue(x, y);
    cout << "교환 후 x = " << x << ", y = " << y << endl;
    return 0;
}
