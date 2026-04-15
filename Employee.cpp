/*Q1. Class, Objects, and Encapsulation

Write a C++ program to create a class Employee with the following details:

· Employee ID

· Employee Name

· Basic Salary

Requirements:

1. Declare data members as private.

2. Use public member functions to:

o Read employee details

o Calculate gross salary

Gross Salary=Basic Salary+20%HRA+10%DA

o Display employee details and gross salary.

3. Create at least two objects of the class.*/
#include <iostream>
using namespace std;
class Employee {
private:
    int empID;
    string empName;
    float basicSalary, grossSalary;
public:
    void readDetails() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cout << "Enter Employee Name: ";
        cin >> empName;
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }
    void calculateSalary() {
        grossSalary = basicSalary + (0.20 * basicSalary) + (0.10 * basicSalary);
    }
    void displayDetails() {
        cout << "\nEmployee ID: " << empID;
        cout << "\nEmployee Name: " << empName;
        cout << "\nBasic Salary: " << basicSalary;
        cout << "\nGross Salary: " << grossSalary << endl;
    }
};
int main() {
    Employee e1, e2;
    cout << "\nEnter details for Employee 1:\n";
    e1.readDetails();
    e1.calculateSalary();
    cout << "\nEnter details for Employee 2:\n";
    e2.readDetails();
    e2.calculateSalary();
    cout << "\nEmployee 1 Details:";
    e1.displayDetails();
    cout << "\nEmployee 2 Details:";
    e2.displayDetails();
    return 0;
}