#include <iostream>
#include <span>
#include <vector>
#include <array>

// 소유하지 않는 뷰. vector든 array든 연속 메모리라면 받을 수 있다.
double mean(std::span<const double> xs) {
    if (xs.empty()) return 0.0;
    double s = 0.0;
    for (double x : xs) s += x;
    return s / static_cast<double>(xs.size());
}

void scale_in_place(std::span<double> xs, double k) {
    for (double& x : xs) x *= k;
}

int main() {
    double raw[4] = { 1.0, 3.0, 5.0, 7.0 };
    std::vector<double> vec{ 2.0, 4.0, 6.0 };
    std::array<double, 2> arr{ 10.0, 20.0 };

    std::cout << "배열 평균 = " << mean(raw) << '\n';
    std::cout << "벡터 평균 = " << mean(vec) << '\n';
    std::cout << "array 평균 = " << mean(arr) << '\n';

    scale_in_place(vec, 0.5);   // 복사 없이 원본을 수정
    std::cout << "스케일 후 벡터: ";
    for (double x : vec) std::cout << x << ' ';
    std::cout << '\n';
}
