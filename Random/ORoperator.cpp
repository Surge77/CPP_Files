#include <iostream>
using namespace std;

int main()
{
    // Write a program to print the value if it is divisible by 3 or 5

    int num;
    cout << "Enter a number: ";
    cin >> num;

    if ((num % 3 == 0) || (num % 5 == 0))
    {
        cout << "It is divisible by 3 or 5" << endl;
    }
    else
    {
        cout << "NULL";
    }

    return 0;
}