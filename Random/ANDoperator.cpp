#include <iostream>
using namespace std;

int main()
{
    // Write a program to print the value if it is even and divisible by 3

    int num;
    cout << "Enter a number: ";
    cin >> num;

    if ((num % 2 == 0) && (num % 3 == 0))
    {
        cout << "It is even and divisible by 3" << endl;
    }
    else
    {
        cout << "NULL";
    }

    return 0;
}