#include <iostream>

using namespace std;

class ATM {
private:
    double balance;

public:
    // Constructor to initialize the account with an initial balance
    ATM(double initial_balance) {
        balance = initial_balance;
    }

    // Function to check the balance
    void checkBalance() {
        cout << "Your current balance is: $" << balance << endl;
    }

    // Function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "You have successfully deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Function to withdraw money
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
        } else {
            balance -= amount;
            cout << "You have successfully withdrawn: $" << amount << endl;
        }
    }
};

int main() {
    int choice;
    double amount;
    ATM atm(1000.0);  // Initialize the ATM with a starting balance of $1000

    do {
        // Display menu options
        cout << "\n=== ATM Menu ===" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                atm.checkBalance();
                break;
            case 2:
                cout << "Enter the amount to deposit: $";
                cin >> amount;
                atm.deposit(amount);
                break;
            case 3:
                cout << "Enter the amount to withdraw: $";
                cin >> amount;
                atm.withdraw(amount);
                break;
            case 4:
                cout << "Thank you for using the ATM. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid option. Please try again." << endl;
        }

    } while (choice != 4);

    return 0;
}
