#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;

public:
    BankAccount(int b) {
        balance = b;
    }

    friend void printBalance(const BankAccount &account);
};

void printBalance(const BankAccount &account) {
    cout << "잔액: " << account.balance << endl;
}

int main() {
    BankAccount account(50000);

    printBalance(account);

    return 0;
}
