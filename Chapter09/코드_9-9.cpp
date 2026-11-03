#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class IsEven {
public:
    bool operator()(int value) const {
        return value % 2 == 0;
    }
};

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5, 6};

    int count = count_if(numbers.begin(), numbers.end(), IsEven());
    cout << "짝수의 개수: " << count << endl;

    return 0;
}
