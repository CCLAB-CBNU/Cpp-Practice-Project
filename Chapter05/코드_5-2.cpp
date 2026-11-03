#include <iostream>
using namespace std;

int main() {
    int arr[3] = {10, 20, 30};
    int *p = arr;

    cout << "arr[0] = " << arr[0] << endl;
    cout << "*p = " << *p << endl;
    cout << "*(p + 1) = " << *(p + 1) << endl;
    cout << "*(p + 2) = " << *(p + 2) << endl;
    cout << endl;

    cout << "p = " << p << endl;
    cout << "p + 1 = " << p + 1 << endl;
    cout << "p + 2 = " << p + 2 << endl;
    return 0;
}
