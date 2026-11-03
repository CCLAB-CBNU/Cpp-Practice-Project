#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;

public:
    void showBalance() {
        cout << "잔액: " << balance << endl;
    }
};
int main() {
    BankAccount account;
    account.balance = 10000;
    account.showBalance();
    return 0;
}
