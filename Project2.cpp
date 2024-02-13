#include <iostream>
#include <string>
using namespace std;

struct BankAccount {
    string accountNumber;
    string accountHolderName;
    double balance;

    BankAccount(string accNumber, string accHolderName, double initialBalance) {
        accountNumber = accNumber;
        accountHolderName = accHolderName;
        balance = initialBalance;
    }
};

void deposit(BankAccount& account, double amount) {
    account.balance += amount;
    cout << "Deposit of $" << amount << " successful.\n";
}

void withdraw(BankAccount& account, double amount) {
    if (amount > account.balance) {
        cout << "Insufficient funds.\n";
    } else {
        account.balance -= amount;
        cout << "Withdrawal of $" << amount << " successful.\n";
    }
}

void displayAccountDetails(const BankAccount& account) {
    cout << "Account Number: " << account.accountNumber << endl;
    cout << "Account Holder Name: " << account.accountHolderName << endl;
    cout << "Balance: $" << account.balance << endl;
}

int main() {
    BankAccount myAccount("0101010", "Jatin Chourasiya", 1000.00);
    int choice;
    double amount;

    do {
        cout << "\nBank Management System Menu:\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Display Account Details\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: $";
                cin >> amount;
                deposit(myAccount, amount);
                break;
            case 2:
                cout << "Enter amount to withdraw: $";
                cin >> amount;
                withdraw(myAccount, amount);
                break;
            case 3:
                cout << "\nAccount Details:\n";
                displayAccountDetails(myAccount);
                break;
            case 4:
                cout << "Thank you! code by Jatin\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 4);
    return 0;
}