#include <iostream>
#include <vector>
using namespace std;

int linearSearch(
    const vector<int>& numbers,
    int target
) {
    for (int i = 0;
         i < static_cast<int>(numbers.size());
         i++) {
        if (numbers[i] == target) {
            return i;
        }
    }

    return -1;
}

int main() {
    vector<int> numbers = {
        40, 10, 30, 20, 50
    };

    int target = 20;
    int index = linearSearch(numbers, target);

    if (index != -1) {
        cout << target
             << "의 위치: "
             << index
             << endl;
    } else {
        cout << "값을 찾지 못했습니다."
             << endl;
    }

    return 0;
}
