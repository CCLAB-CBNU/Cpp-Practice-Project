#include <iostream>
#include <array>

// 컴파일 시 팩토리얼을 계산한다. 런타임 루프가 없다.
constexpr long long fact(int n) {
    long long r = 1;
    for (int i = 2; i <= n; ++i) r *= i;
    return r;
}

constexpr int align_up(int n, int a) {
    return (n + a - 1) / a * a;
}

int main() {
    constexpr auto f5 = fact(5);
    constexpr auto padded = align_up(1000, 32);

    std::array<int, fact(4)> table{};   // 크기가 컴파일 시간 상수
    for (int i = 0; i < static_cast<int>(table.size()); ++i) table[i] = i;

    std::cout << "5! = " << f5 << '\n';
    std::cout << "1000을 32의 배수로 올림 = " << padded << '\n';
    std::cout << "table 크기 = " << table.size() << '\n';
}
