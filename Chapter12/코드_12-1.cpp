#include <iostream>
#include <utility>
#include <vector>
using namespace std;
void bubbleSort(vector<int>& numbers) {
    int size = static_cast<int>(numbers.size());

    for (int i = 0; i < size - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < size - 1 - i; j++) {
            if (numbers[j] > numbers[j + 1]) {
                swap(numbers[j], numbers[j + 1]);
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
}

int main() {
    vector<int> numbers = {40, 10, 30, 20};

    bubbleSort(numbers);

    for (int number : numbers) {
        cout << number << " ";
    }

    return 0;
}
