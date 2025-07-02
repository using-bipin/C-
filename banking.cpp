#include <iostream>
#include <string>
using namespace std;

// Global variables (for simplicity)
string accountHolder;
int accountNumber;
double balance = 0.0;

// Function to create an account
void createAccount()
{
    cout << "Enter account holder's name: ";
    cin.ignore(); // Clear newline from buffer
    getline(cin, accountHolder);
    cout << "Enter account number: ";
    cin >> accountNumber;
    cout << "Enter initial deposit: $";
    cin >> balance;
    cout << "Account created successfully!\n";
}

// Function to deposit money
void deposit()
{
    double amount;
    cout << "Enter amount to deposit: $";
    cin >> amount;
    if (amount > 0)
    {
        balance += amount;
        cout << "Deposited: $" << amount << endl;
    }
    else
    {
        cout << "Invalid deposit amount." << endl;
    }
}

// Function to withdraw money
void withdraw()
{
    double amount;
    cout << "Enter amount to withdraw: $";
    cin >> amount;
    if (amount > 0 && amount <= balance)
    {
        balance -= amount;
        cout << "Withdrawn: $" << amount << endl;
    }
    else
    {
        cout << "Insufficient balance or invalid amount." << endl;
    }
}

// Function to display account info
void displayAccount()
{
    cout << "\n--- Account Details ---" << endl;
    cout << "Account Holder: " << accountHolder << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << "Current Balance: $" << balance << endl;
}

int main()
{
    int choice;
    createAccount(); // Initialize the account first

    do
    {
        cout << "\n--- Banking Menu ---" << endl;
        cout << "1. Deposit\n2. Withdraw\n3. Display Account\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            deposit();
            break;
        case 2:
            withdraw();
            break;
        case 3:
            displayAccount();
            break;
        case 4:
            cout << "Exiting program. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
