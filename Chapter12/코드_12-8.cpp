#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int partition(
    vector<int>& numbers,
    int left,
    int right
) {
    int pivot = numbers[right];
    int smallerIndex = left - 1;

    for (int current = left;
         current < right;
         current++) {
        if (numbers[current] <= pivot) {
            smallerIndex++;

            swap(
                numbers[smallerIndex],
                numbers[current]
            );
        }
    }

    swap(
        numbers[smallerIndex + 1],
        numbers[right]
    );
    return smallerIndex + 1;
}

void quickSort(
    vector<int>& numbers,
    int left,
    int right
) {
    if (left >= right) {
        return;
    }

    int pivotIndex = partition(
        numbers,
        left,
        right
    );

    quickSort(
        numbers,
        left,
        pivotIndex
    );

    quickSort(
        numbers,
        pivotIndex,
        right
    );
}

int main() {
    vector<int> numbers = {
        10, 20, 30, 40, 50
    };

    quickSort(
        numbers,
        0,
        static_cast<int>(numbers.size()) - 1
    );

    for (int number : numbers) {
        cout << number << " ";
    }

    return 0;
}
