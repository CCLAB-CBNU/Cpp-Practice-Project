#include <iostream>
#include <stdexcept>
using namespace std;

class Account {
private:
    int balance;
public:
    Account(int initialBalance) : balance(initialBalance) {}

    void withdraw(int amount) {
        if (amount <= 0) {
            throw invalid_argument("출금액은 양수여야 합니다.");
        }
        if (amount > balance) {
            throw runtime_error("잔액이 부족합니다.");
        }
        balance -= amount;
    }

    int getBalance() const {
        return balance;
    }
};

int main() {
    Account account(10000);

    try {
        account.withdraw(15000);
    }
    catch (const exception& error) {
        cout << "출금 실패: " << error.what() << endl;
    }

    cout << "현재 잔액: " << account.getBalance() << endl;
    return 0;
}
