#include <iostream>
using namespace std;

int main() {
    int *pi = new int(100);
    cout << "pi = " << pi << endl;
    cout << "*pi = " << *pi << endl;

    delete pi;
    pi = nullptr;
    return 0;
}
