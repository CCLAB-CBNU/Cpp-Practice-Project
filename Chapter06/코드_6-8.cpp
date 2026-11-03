#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;

public:
    BankAccount() {
        balance = 0;
    }

    void deposit(int money) {
        if (money > 0) {
            balance += money;
        }
    }

    void withdraw(int money) {
        if (money > 0 && money <= balance) {
            balance -= money;
        }
    }
    void showBalance() {
        cout << "잔액: " << balance << endl;
    }
};

int main() {
    BankAccount account;
    account.deposit(10000);
    account.withdraw(3000);
    account.showBalance();
    return 0;
}
