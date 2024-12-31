#include <iostream>
using namespace std;

// Question: printing the following pattern

// A B C
// A B C
// A B C

//Here rows = n i.e input number

int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n; // n decides how much times to print the pattern

    int row = 1; // We start the row count from 1

    while (row <= n) // loop for rows printing
    {

        int column = 1;
        char ch = 'A' + column - 1 ; // this is typecasting and the formula created for the pattern typescasting puts it explicitly into char if we wont put it in char it will take it as int
        while (column <= n) // loop for columns , everthing depends on what we write after <= if n then square pattern if row then triangle pattern
        {
            cout << ch << " ";
            column = column + 1;
            ch = ch + 1;
        }

        cout << endl;

        row = row + 1;
    }
}