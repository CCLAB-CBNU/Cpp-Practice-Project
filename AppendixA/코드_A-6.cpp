#include <iostream>
#include <ranges>
#include <vector>

int main() {
    // iota : 1부터 시작하는 무한(에 가까운) 정수 뷰. 아직 메모리를 쓰지 않는다.
    auto first_squares = std::views::iota(1)
        | std::views::transform([](int x) {
            std::cout << "  계산 " << x << "^2\n";
            return x * x;
        })
        | std::views::take(4);   // 앞에서 4개만

    std::cout << "[지연 평가] 루프를 돌기 전에는 계산이 일어나지 않습니다.\n";
    std::cout << "결과: ";
    for (int v : first_squares) std::cout << v << ' ';
    std::cout << "\n";

    // 원본 벡터를 복사하지 않고 뒤의 3개만 본다.
    std::vector<int> logs{ 10, 20, 30, 40, 50 };
    auto tail = logs | std::views::drop(2);
    std::cout << "drop(2): ";
    for (int v : tail) std::cout << v << ' ';
    std::cout << '\n';
}
