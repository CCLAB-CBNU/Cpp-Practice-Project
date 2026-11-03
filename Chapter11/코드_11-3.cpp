#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string data = "Kim 90 85";
    string name;
    int score1;
    int score2;

    stringstream ss(data);

    ss >> name >> score1 >> score2;

    cout << "이름: " << name << endl;
    cout << "점수1: " << score1 << endl;
    cout << "점수2: " << score2 << endl;

    return 0;
}
