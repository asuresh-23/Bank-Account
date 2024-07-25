#ifndef BANKINGSYSTEM_H
#define BANKINGSYSTEM_H

#include <string>
#include <vector>
#include "BankAccount.h"

class BankingSystem{
    public:
        BankingSystem();
        void addAccount(const std::string &acc, double money);
        bool deleteAccount(const std::string &acc);
        void addMoney(const std::string &acc, double money);
        void deleteMoney(const std::string &acc, double money);
        double viewBalance(const std::string &acc) const;
        void displayAccounts() const;
    private:
        std::vector<BankAccount> accounts;
};
#endif