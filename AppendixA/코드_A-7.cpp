#include <iostream>
#include <coroutine>
#include <utility>

// 최소 생성기 : co_yield로 값을 하나씩 내보낸다.
template <typename T>
class Generator {
public:
    struct promise_type {
        T value;
        Generator get_return_object() {
            return Generator{
            std::coroutine_handle<promise_type>::from_promise(*this) };
        }
        std::suspend_always initial_suspend() noexcept { return {}; }
        std::suspend_always final_suspend() noexcept { return {}; }
        std::suspend_always yield_value(T v) {
             value = std::move(v);
             return {};
        }
        void return_void() {}
        void unhandled_exception() { std::terminate(); }
    };

    explicit Generator(std::coroutine_handle<promise_type> h) : h_(h) {}
    ~Generator() { if (h_) h_.destroy(); }
    Generator(Generator&& o) noexcept : h_(o.h_) { o.h_ = {}; }
    Generator(const Generator&) = delete;
    bool next() {
        h_.resume();
        return !h_.done();
    }
    const T& get() const { return h_.promise().value; }

private:
    std::coroutine_handle<promise_type> h_;
};

Generator<int> count_to(int n) {
    for (int i = 1; i <= n; ++i) {
        co_yield i;   // 여기서 잠시 멈추고 값을 넘긴다.
    }
}

int main() {
    auto g = count_to(5);
    std::cout << "생성기 출력: ";
    while (g.next()) std::cout << g.get() << ' ';
    std::cout << '\n';
}
