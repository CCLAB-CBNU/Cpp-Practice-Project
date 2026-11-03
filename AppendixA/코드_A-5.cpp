#include <iostream>
#include <vector>
#include <ranges>
#include <algorithm>

int main() {
    std::vector<int> raw{ 12, 7, 25, 3, 18, 9, 30, 4 };

    // 파이프(|)로 '짝수만 골라 제곱'하는 파이프라인을 만든다.
    auto pipeline = raw
        | std::views::filter([](int x) { return x % 2 == 0; })
        | std::views::transform([](int x) { return x * x; });

    std::cout << "[짝수의 제곱] ";
    for (int y : pipeline) std::cout << y << ' ';
    std::cout << '\n';

    // 결과를 컨테이너에 모을 수도 있다(C++23이라면 ranges::to).
    std::vector<int> squared;
    for (int y : pipeline) squared.push_back(y);

    std::cout << "모은 개수 = " << squared.size() << '\n';
}
