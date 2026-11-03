#include <iostream>

int main() {
    int kor = 90;
    int eng = 85;
    int math = 80;

    // [논리 에러 발생] 과목이 3개인데 실수로 2로 나누어 평균이 잘못 계산됨
    int total = kor + eng + math;
    double average = total / 2;

    std::cout << "총점: " << total << std::endl;
    std::cout << "평균: " << average << std::endl; // 예상: 85, 실제: 127

    return 0;
}
