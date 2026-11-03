#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40};

    for (vector<int>::iterator it = numbers.begin();
         it != numbers.end(); ++it) {
        *it += 1;
    }

    cout << "변경된 원소: ";
    for (vector<int>::const_iterator it = numbers.cbegin();
         it != numbers.cend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
