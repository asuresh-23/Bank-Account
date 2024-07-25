#include <iostream>
#include <string>
#include <vector>
#include "BankAccount.h"
#include "BankingSystem.h"

int main(){
    using namespace std;
    BankingSystem account;
    //account.addAccount("Account2", 200.0);
    account.displayAccounts();

    int choice;
    int actions;
    cout << "Welcome to your personal Bank!\n";
   
    cout << "How many actions will you be doing today at the bank: \n";
    cin >> actions;

    for (int i = 0; i < actions; ++i){

        cout << "Would you like to\n1) Add account\n2) Delete account\n3) Deposit money to an account\n4) Withdraw money from an account\n5) View Accounts\n";
        cin >> choice;

        if (choice == 1){
            string acc;
            cout << "What is the name of your additional account: \n";
            cin >> acc;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            double money;
            cout << "How much money would you like to deposit into the account: \n";
            cin >> money;
            account.addAccount(acc, money);
        }

        else if (choice == 2){
            string acc;
            cout << "What is the name of the account you want to delete: \n";
            cin >> acc;
            account.deleteAccount(acc);
        }

        else if (choice == 3){
            string acc;
            double money;
            cout << "What is the name of the account you would like to ADD money to: \n";
            cin.ignore();
            getline(cin, acc);
            

            cout << "How much money would you like to ADD: \n";
            cin >> money;

            account.addMoney(acc, money);
            cout << account.viewBalance(acc);
        }

        else if (choice == 4){
            string acc;
            double money;
            cout << "What is the name of the account you would like to TAKE OUT money from: \n";
            cin.ignore();
            getline(cin, acc);

            //cin >> acc;
            //cin.ignore(numeric_limits<streamsize>::max(), '\n');


            cout << "How much money would you like to TAKE OUT: \n";
            cin >> money;
            account.deleteMoney(acc, money);
        }

        else if (choice == 5){
            account.displayAccounts();
        }

    }
}