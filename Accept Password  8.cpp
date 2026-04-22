/*Write a program to accept password. Throw exception if password length is less than 8 characters.*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string password;

    try
    {
        cout << "Enter Password: ";
        cin >> password;

        if (password.length() < 8)
            throw password;

        cout << "Password accepted." << endl;
    }
    catch (string)
    {
        cout << "Error: Password must contain at least 8 characters." << endl;
    }

    return 0;
}