#include <iostream>
#include <vector>
using namespace std;

int binarySearch(
    const vector<int>& numbers,
    int target
) {
    int left = 0;
    int right =
        static_cast<int>(numbers.size()) - 1;

    while (left <= right) {
        int middle =
            left + (right - left) / 2;

        if (numbers[middle] == target) {
            return middle;
        }

        if (numbers[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    return -1;
}

int main() {
    vector<int> numbers = {
        10, 20, 30, 40, 50, 60, 70
    };

    int target = 60;
    int index = binarySearch(numbers, target);

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
