#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, int> inventory = {
        {"Keyboard", 5},
        {"Monitor", 3},
        {"Mouse", 10}
    };

    for (auto it = inventory.begin();
         it != inventory.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }

    return 0;
}
