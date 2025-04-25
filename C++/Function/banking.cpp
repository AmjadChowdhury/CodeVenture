#include <iostream>
#include<iomanip> // to setprecision
// cout << "current balance is " << setprecision(2)<<fixed << balance << endl;
using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    int choice = 0;
    double balance = 0.00;
    do
    {
        cout << "******************\n";
        cout << "   Enter Choice : \n";
        cout << "******************\n";
        cout << "1. Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit\n";

        cout << "Select Choice : ";
        cin >> choice;


        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            showBalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            showBalance(balance);
            break;
        case 4:
            cout << "Thank you!\n";
            break;
        default:
            cout << "You didn't enter valid option.!\n";
            break;
        }
    } while (choice != 4);

    return 0;
}

void showBalance(double balance)
{
    cout << "current balance is " << setprecision(2)<<fixed << balance << endl;
}
double deposit()
{
    double amount = 0;
    cout << "Enter deposit money : ";
    cin >> amount;

    if(amount < 0)
    {
        cout<< "That's not avalid amount.\n";
        return 0;
    }
    return amount;
}
double withdraw(double balance)
{
    double amount = 0;
    cout << "Enter withdraw amount : ";
    cin >> amount;

    if(amount > balance)
    {
        cout<< "Insufficient funds!\n";
        return 0;
    }
    if(amount < 0)
    {
        cout<< "That's not a valid amount!\n";
        return 0;
    }
    return amount;
}