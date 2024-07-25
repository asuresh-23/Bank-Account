#include <iostream>
#include <string>
#include <vector>
#include "BankAccount.h"
#include "BankingSystem.h"

BankingSystem::BankingSystem(){
    //BankAccount defaultAccount("Account1", 100.0);
    //accounts.push_back(defaultAccount);
}




void BankingSystem::displayAccounts() const{
    for (std::vector<BankAccount>::const_iterator i = accounts.begin(); i != accounts.end(); ++i) {
        i->displayAccountInfo();
    }
}




void BankingSystem::addAccount(const std::string &acc, double money){
    BankAccount newAccount(acc, money);
    accounts.push_back(newAccount);
}




bool BankingSystem::deleteAccount(const std::string &acc){
    for (auto i = accounts.begin(); i != accounts.end(); ++i){
        if (i->getAccountNum() == acc){
            accounts.erase(i);
            return true;
        }
    }
    return false;
}




void BankingSystem::addMoney(const std::string &acc, double money){
    /*for (auto& a : accounts){
        if (a.getAccountNum() == acc){
            a.addMore(money);
        }
    }*/

    for (auto i = accounts.begin(); i != accounts.end(); ++i){
        if (i->getAccountNum() == acc){
            i->addMore(money);
        }
    }
}



void BankingSystem::deleteMoney(const std::string &acc, double money){
    for (auto& a : accounts){
        if (a.getAccountNum() == acc){
            a.addMore(-money);
        }
    }
}




double BankingSystem::viewBalance(const std::string &acc) const {
    for (std::vector<BankAccount>::const_iterator i = accounts.begin(); i != accounts.end(); ++i) {
        if (i->getAccountNum() == acc) {
            return i->getBalance(); // Assuming getBalance() method exists
        }
    }
    //std::cout << "Account not found.\n";
    return 1; // Return -1 if account is not found
}