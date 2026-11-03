#include <iostream>
#include <string>
#include <utility>

// C++23 std::expected와 같이 성공 값과 오류 중 하나를 반환하는 단순한 예시 타입이다.
// 비주얼 스튜디오에서 /std:c++20만으로 컴파일된다.
template <typename T, typename E>
class Expected {
    bool ok_;
    T value_{};
    E error_{};
public:
    static Expected success(T v) {
        Expected r; r.ok_ = true; r.value_ = std::move(v); return r;
    }
    static Expected failure(E e) {
        Expected r; r.ok_ = false; r.error_ = std::move(e); return r;
    }
    bool has_value( ) const { return ok_; }
    const T& value() const { return value_; }
    const E& error() const { return error_; }
};

Expected<double, std::string> safe_div(double a, double b) {
    if (b == 0.0) return Expected<double, std::string>::failure("division by zero");
    return Expected<double, std::string>::success(a / b);
}

Expected<int, std::string> parse_batch(const std::string& s) {
    if (s.empty()) return Expected<int, std::string>::failure("empty");
    int n = 0;
    for (char c : s) {
        if (c < '0' || c > '9') return Expected<int, std::string>::failure("not a number");
        n = n * 10 + (c - '0');
    }
    if (n == 0) return Expected<int, std::string>::failure("batch must be > 0");
    return Expected<int, std::string>::success(n);
}

int main() {
    for (double b : { 4.0, 0.0 }) {
        auto r = safe_div(10.0, b);
        if (r.has_value()) std::cout << "10 / " << b << " = " << r.value() << '\n';
        else                 std::cout << "오류: " << r.error() << '\n';
    }

    for (auto s : { "8", "x", "0" }) {
        auto r = parse_batch(s);
        if (r.has_value()) std::cout << "batch = " << r.value() << '\n';
        else                 std::cout << "파싱 실패(" << s << "): " << r.error() << '\n';
    }
}
