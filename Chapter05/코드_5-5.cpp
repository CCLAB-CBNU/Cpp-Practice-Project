#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    for (int &x : arr) {
        x *= 10;
    }

    for (int x : arr) {
        cout << x << " ";
    }
    return 0;
}
