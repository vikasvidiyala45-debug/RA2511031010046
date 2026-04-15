/*Q3. Static Data Members and Functions

Write a C++ program to demonstrate the use of static data members.

Create a class Account with:

· Account Number

· Account Holder Name

· Balance

· A static variable to count the total number of accounts created

Requirements:

1. Increment the static variable whenever an object is created.

2. Display individual account details.

3. Display the total number of accounts using a static member function.*/
#include <iostream>
using namespace std;
class Account {
private:
    int accNo;
    string name;
    float balance;
    static int count; 
public:
    Account() {
        count++;
    }
    void getData() {
        cout << "Enter Account Number: ";
        cin >> accNo;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Balance: ";
        cin >> balance;
    }
    void displayData() {
        cout << "\nAccount Number: " << accNo;
        cout << "\nName: " << name;
        cout << "\nBalance: " << balance << endl;
    }
    static void displayCount() {
        cout << "\nTotal Accounts Created: " << count << endl;
    }
};
int Account::count = 0;
int main() {
    Account a1, a2;
    cout << "\nEnter details for Account 1:\n";
    a1.getData();
    cout << "\nEnter details for Account 2:\n";
    a2.getData();
    cout << "\nAccount 1 Details:";
    a1.displayData();
    cout << "\nAccount 2 Details:";
    a2.displayData();
    Account::displayCount();
    return 0;
}