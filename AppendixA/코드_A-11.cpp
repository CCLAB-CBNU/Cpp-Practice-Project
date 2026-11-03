#include <iostream>
#include <vector>
#include <algorithm>
#include <execution>
#include <cmath>

int main() {
    std::vector<double> x(8);
    for (int i = 0; i < 8; ++i) x[i] = static_cast<double>(i);

    std::vector<double> y(x.size());

     // 실행 정책 par : 구현이 병렬로 돌릴 수 있게 한다.
     // MSVC는 추가 라이브러리 없이 지원한다.
     std::transform(std::execution::par, x.begin(), x.end(), y.begin(),
               [](double v) { return std::sqrt(v); });

    std::cout << "sqrt: ";
    for (double v : y) std::cout << v << ' ';
    std::cout << '\n';
}
