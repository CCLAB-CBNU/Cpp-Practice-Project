#include <iostream>
#include <concepts>
#include <string>
#include <vector>

// T가 + 연산이 가능하고, 그 결과가 다시 T여야 함
template <typename T>
concept Addable = requires(T a, T b) {
    { a + b } -> std::same_as<T>;
};

template <Addable T>
T add_all(const std::vector<T>& xs) {
    T acc{};
    for (const T& x : xs) acc = acc + x;
    return acc;
}

// 정수 텐서처럼 '요소 합'이 있는 타입만 받음
template <typename T>
concept HasSum = requires(const T& t) {
    { t.sum() } -> std::convertible_to<double>;
};

template <HasSum T>
double mean_like(const T& t, int n) {
    return t.sum() / n;
}

struct MiniTensor {
    std::vector<double> v;
    double sum() const {
        double s = 0;
        for (double x : v) s += x;
        return s;
    }
};

int main() {
    std::vector<int> nums{ 1, 2, 3, 4 };
    std::cout << "int 합 = " << add_all(nums) << '\n';

    std::vector<std::string> words{ "AI", "-", "C++" };
    std::cout << "문자열 연결 = " << add_all(words) << '\n';

    MiniTensor t{ { 2.0, 4.0, 6.0 } };
    std::cout << "평균 = " << mean_like(t, 3) << '\n';

    // add_all(std::vector<MiniTensor>{}) 처럼
    // Addable이 아닌 타입을 넘기면 컴파일 오류 메시지가 분명해진다.
}
