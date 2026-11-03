#include <iostream>
#include <vector>
using namespace std;

int findMaximum(const vector<int>& numbers) {
    int maximum = 0;

    for (int value : numbers) {
        if (value > maximum) { // ❶ 중단점( F9 ) 설정 위치
            maximum = value;
        }
    }

    return maximum;
}

int main() {
    vector<int> numbers = {-8, -2, -5, -11};

    cout << "최댓값: " << findMaximum(numbers) << endl;
    return 0;
}
