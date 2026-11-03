#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> numbers = {30, 10, 20};
    numbers.push_front(40);
    numbers.push_back(5);
    numbers.sort();
    numbers.remove(20);

    cout << "list 원소: ";
    for (int value : numbers) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
