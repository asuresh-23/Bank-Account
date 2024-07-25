#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>

class BankAccount {
public:
    BankAccount(const std::string &accountNum, double &initialBalance);
    const std::string& getAccountNum() const;
    void addMore(double amount);
    double getBalance() const; // New method to get balance
    void displayAccountInfo() const;

private:
    std::string holder;
    double balance;
};

#endif // BANKACCOUNT_H
