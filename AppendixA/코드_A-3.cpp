#include <iostream>
#include <utility>
#include <cstring>

// 큰 버퍼(가중치, 텐서)를 흉내 낸 클래스
class Buffer {
    std::size_t size_{ 0 };
    int* data_{ nullptr };

public:
    Buffer() = default;
    explicit Buffer(std::size_t n) : size_(n), data_(new int[n]) {
        for (std::size_t i = 0; i < n; ++i) data_[i] = static_cast<int>(i);
        std::cout << "  생성 size=" << size_ << '\n';
    }
    ~Buffer() {
        delete[] data_;
        std::cout << "  소멸 size=" << size_ << '\n';
    }

    // 복사 생성 : 비용이 큼(깊은 복사)
    Buffer(const Buffer& o) : size_(o.size_), data_(new int[o.size_]) {
        std::memcpy(data_, o.data_, size_ * sizeof(int));
        std::cout << "  복사 생성 size=" << size_ << '\n';
    }
    Buffer& operator=(const Buffer& o) {
        if (this == &o) return *this;
        delete[] data_;
        size_ = o.size_;
        data_ = new int[size_];
        std::memcpy(data_, o.data_, size_ * sizeof(int));
        std::cout << "  복사 대입 size=" << size_ << '\n';
        return *this;
    }

    // 이동 생성 : 포인터만 훔친다. O(1)
    Buffer(Buffer&& o) noexcept : size_(o.size_), data_(o.data_) {
        o.size_ = 0;
        o.data_ = nullptr;
        std::cout << "  이동 생성 size=" << size_ << '\n';
    }
    Buffer& operator=(Buffer&& o) noexcept {
        if (this == &o) return *this;
        delete[] data_;
        size_ = o.size_;
        data_ = o.data_;
        o.size_ = 0;
        o.data_ = nullptr;
        std::cout << "  이동 대입 size=" << size_ << '\n';
        return *this;
    }

    std::size_t size() const { return size_; }
};

Buffer make_weights() {
    Buffer w(4);          // 지역 객체
    return w;             // 이동(또는 NRVO)으로 반환
}

int main() {
    std::cout << "[이동 반환]\n";
    Buffer a = make_weights();

    std::cout << "\n[std::move로 소유권 이전]\n";
    Buffer b;
    b = std::move(a);     // a는 빈 껍데기가 된다.
    std::cout << "a.size=" << a.size() << ", b.size=" << b.size() << '\n';
}
