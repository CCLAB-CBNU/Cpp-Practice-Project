#include <iostream>
#include <coroutine>
#include <string>
#include <utility>
#include <vector>

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
    bool next() { h_.resume(); return !h_.done(); }
    const T& get() const { return h_.promise().value; }
private:
    std::coroutine_handle<promise_type> h_;
};

// 추론 파이프라인을 '단계별로 멈추며' 진행한다.
Generator<std::string> infer_pipeline(std::string image) {
    co_yield "load: " + image;
    co_yield "preprocess: resize+normalize";
    co_yield "infer: softmax=[0.1, 0.8, 0.1]";
    co_yield "postprocess: label=cat";
}

int main() {
    std::cout << "[비동기처럼 보이는 단계별 추론]\n";
    auto pipe = infer_pipeline("cat.jpg");
    int step = 1;
    while (pipe.next()) {
        std::cout << "  step " << step++ << " -> " << pipe.get() << '\n';
    }
}
