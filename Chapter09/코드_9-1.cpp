#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {5, 1, 4, 2, 3};

    sort(numbers.begin(), numbers.end());

    cout << "정렬 결과: ";
    for (int value : numbers) {
        cout << value << " ";
    }
    cout << endl;

    auto position = find(numbers.begin(), numbers.end(), 4);
    if (position != numbers.end()) {
        cout << "4의 위치: " << distance(numbers.begin(), position) << endl;
    }

    return 0;
}
