#include <iostream>
#include <vector>
using namespace std;

double calculateAverage(
    const vector<int>& scores
) {
    int total = 0;

    for (size_t index = 0;
         index <= scores.size();
         index++) {
        total += scores.at(index);
    }

    return static_cast<double>(total)
           / scores.size();
}

int main() {
    vector<int> scores = {80, 90, 85};

    cout << "평균: "
         << calculateAverage(scores)
         << endl;

    return 0;
}
