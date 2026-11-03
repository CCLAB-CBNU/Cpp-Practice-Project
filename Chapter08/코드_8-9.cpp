#include <iostream>
#include <string>
using namespace std;

template <typename T>
void printArray(const T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};
    double scores[3] = {90.5, 85.0, 95.5};
    string names[3] = {"Kim", "Lee", "Park"};

    printArray(numbers, 5);
    printArray(scores, 3);
    printArray(names, 3);

    return 0;
}
