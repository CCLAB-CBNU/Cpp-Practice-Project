#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> numbers = {30, 10, 20, 10};

    numbers.insert(25);
    numbers.erase(20);
    cout << "set 원소: ";
    for (int value : numbers) {
        cout << value << " ";
    }
    cout << endl;

    cout << "10의 개수: " << numbers.count(10) << endl;
    cout << "20의 개수: " << numbers.count(20) << endl;
    return 0;
}
