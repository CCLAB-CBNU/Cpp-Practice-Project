#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main() {
    // auto : 오른쪽 값으로 타입을 컴파일러가 추론한다.
    auto model_name = std::string{ "tiny-cnn" };   // std::string
    auto batch_size = 4;                               // int
    auto learning_rate = 0.01;                        // double

    std::vector<int> scores{ 92, 67, 88, 41, 95, 73 };

    // 범위 기반 for 문: 인덱스 없이도 원소를 하나씩 꺼낸다.
    std::cout << "[원본 점수] ";
    for (int s : scores) {
        std::cout << s << ' ';
    }
    std::cout << '\n';

    // 람다 : 이름 없는 함수 객체. 여기서는 '합격(70점 이상)' 판정
    auto is_pass = [](int s) { return s >= 70; };

    std::cout << "[합격 점수] ";
    for (int s : scores) {
        if (is_pass(s)) std::cout << s << ' ';
    }
    std::cout << '\n';

    // 알고리즘 + 람다 : 합격자 수를 셈
    auto pass_count = std::count_if(scores.begin(), scores.end(), is_pass);
    std::cout << model_name << " / batch=" << batch_size
           << " / lr=" << learning_rate
           << " / 합격 " << pass_count << "명\n";
}
