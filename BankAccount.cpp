#include <iostream>
#include <string>
#include <vector>
#include "BankAccount.h"


BankAccount::BankAccount(const std::string &accountNum, double &initialBalance){
    holder = accountNum;
    balance = initialBalance;
}

const std::string& BankAccount::getAccountNum() const{
    return holder;
}

void BankAccount::addMore(double amount){
    if (amount > 0){
        balance += amount;
    }
}

double BankAccount::getBalance() const {
    return balance;
}

void BankAccount::displayAccountInfo() const {
    if (!holder.empty()){
        std::cout << "Account Number: " << holder << "\n";
        std::cout << "Balance: $" << balance << "\n";
    }
    else {
        std::cout << "You have no accounts registered in the bank!\n";
    }
}