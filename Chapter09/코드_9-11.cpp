#include <algorithm>
#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> numbers = {5, 1, 4, 2, 3};

    sort(numbers.begin(), numbers.end());

    for (int value : numbers) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
