#include <iostream>
#include <vector>
#include <string>

using namespace std;

// [절차 지향 스타일] 데이터만 모아둔 구조체
struct PersonData {
    string name;
    int age;
};

// [객체 지향 스타일] 데이터와 동작을 결합한 클래스
class Person {
public:
    string name;
    int age;
    void introduce() { // 메서드: 객체가 스스로 수행하는 동작
    cout << "안녕! 나는 " << name << "이고, " << age << "살이야." << endl;
    }
};

int main() {
    // 1. 배열과 주소 계산(0번 인덱스 확인)
    int scores[3] = {90, 85, 95};
    cout << "Array[0] address: " << &scores[0] << ", value: " << scores[0] << endl;
    cout << "Array[1] address: " << &scores[1] << " (4 bytes offset)" << endl;
    // 2. 벡터(동적 배열)
    vector<int> v = {1, 2, 3};
    v.push_back(4); // 크기가 자유롭게 늘어남
    // 3. 구조체와 클래스 사용
    PersonData data = {"Lily", 8}; // 데이터 중심

    Person p; // 객체(인스턴스) 생성
    p.name = "Sophie";
    p.age = 9;
    p.introduce(); // 객체가 스스로 자신을 소개함(동작 중심)
    return 0;
}
