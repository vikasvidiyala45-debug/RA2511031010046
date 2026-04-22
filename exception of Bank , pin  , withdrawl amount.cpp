#include <iostream>
using namespace std;

int main()
{
    int pin, balance =10000 , amount;

    try
    {
        cout << "Enter ATM PIN: ";
        cin >> pin;

        if (pin != 1234)
            throw 1;

        cout << "Enter Withdrawal Amount: ";
        cin >> amount;

        if (amount > balance)
            throw 2;

        balance = balance - amount;

        cout << "Withdrawal Successful." << endl;
        cout << "Remaining Balance = " << balance << endl;
    }
    catch (int error)
    {
        if (error == 1)
            cout << "Wrong PIN number." << endl;
        else if (error == 2)
            cout << "Insufficient Balance." << endl;
    }

    return 0;
}