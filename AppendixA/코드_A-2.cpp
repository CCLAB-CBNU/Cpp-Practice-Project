#include <iostream>
#include <memory>
#include <string>

struct Model {
    std::string name;
    explicit Model(std::string n) : name(std::move(n)) {
        std::cout << "  생성: " << name << '\n';
    }
    ~Model() { std::cout << "  소멸: " << name << '\n'; }
    void infer() const { std::cout << "  추론: " << name << '\n'; }
};

int main() {
    std::cout << "[unique_ptr] 소유자가 하나뿐인 자원\n";
    {
        // make_unique : new를 직접 쓰지 않는다(예외 안전).
        std::unique_ptr<Model> p = std::make_unique<Model>("detector");
        p->infer();
        // p가 범위를 벗어나면 자동으로 delete된다.
    }

    std::cout << "\n[shared_ptr] 여러 모듈이 같은 모델을 공유\n";
    std::shared_ptr<Model> a = std::make_shared<Model>("shared-net");
    {
        std::shared_ptr<Model> b = a;   // 참조 횟수 2
        std::cout << "  use_count = " << a.use_count() << '\n';
        b->infer();
    } // b 소멸, 참조 횟수 1, 객체는 아직 살아 있음
    std::cout << "  use_count = " << a.use_count() << '\n';
} // a 소멸, 참조 횟수 0, Model 소멸
