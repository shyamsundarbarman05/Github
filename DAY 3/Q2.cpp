#include <iostream>
using namespace std;

class ATM {
private:
    double balance;

public:
    ATM() : balance(0.0) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn: $" << amount << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }

    void checkBalance() const {
        cout << "Current balance: $" << balance << endl;
    }
};

int main() {
    ATM atm;
    int choice;
    double amount;

    do {
        cout << "\nATM Simulator" << endl;
        cout << "1. Deposit Money" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the amount to deposit: ";
                cin >> amount;
                atm.deposit(amount);
                break;
            case 2:
                cout << "Enter the amount to withdraw: ";
                cin >> amount;
                atm.withdraw(amount);
                break;
            case 3:
                atm.checkBalance();
                break;
            case 4:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
