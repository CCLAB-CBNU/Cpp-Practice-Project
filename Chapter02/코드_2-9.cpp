#include <iostream>
#include <vector>

using namespace std;
int main() {
    vector<int> v = {1, 2, 3};
    v.push_back(4);
    v.push_back(5);
    for(size_t i = 0; i < v.size(); i++) {
    cout << "v[" << i << "] = " << v[i] << endl;
    }
    cout << "현재 크기: " << v.size() << endl;
    return 0;
}
