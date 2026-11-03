#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;

int findMaximum(const vector<int>& numbers) {
    if (numbers.empty()) {
        throw invalid_argument("비어 있는 벡터에서는 최댓값을 구할 수 없습니다.");
    }

    int maximum = numbers.front();

    for (int value : numbers) {
        if (value > maximum) {
            maximum = value;
        }
    }

    return maximum;
}

int main() {
    vector<int> numbers = {-8, -2, -5, -11};

    try {
        cout << "최댓값: " << findMaximum(numbers) << endl;
    }
    catch (const exception& error) {
        cout << "오류: " << error.what() << endl;
    }

    return 0;
}
