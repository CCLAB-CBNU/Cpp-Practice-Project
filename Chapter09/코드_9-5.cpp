#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, int> scores;

    scores["Kim"] = 90;
    scores["Lee"] = 85;
    scores["Park"] = 95;
    scores["Lee"] = 88;

    for (const auto& item : scores) {
        cout << item.first << ": " << item.second << endl;
    }

    auto position = scores.find("Park");
    if (position != scores.end()) {
        cout << "Park의 점수: " << position->second << endl;
    }

    return 0;
}
