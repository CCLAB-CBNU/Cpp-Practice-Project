#include <iostream>
#include <vector>
using namespace std;

int main() {
    const vector<int> numbers = {1, 2, 3, 4, 5};

    cout << "const_iterator 순회: ";
    for (auto it = numbers.cbegin(); it != numbers.cend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "범위 기반 for문: ";
    for (int value : numbers) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
