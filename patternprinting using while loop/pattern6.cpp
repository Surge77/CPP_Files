#include <iostream>
using namespace std;

// Question: printing the following pattern

// *
// **
// ***
// ****
// *****
// ******

// here star count = row number i.e n = i/row

int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n; // n decides how much times to print the pattern

    int row = 1; //row starting from 1

    while (row <= n) // loop for rows
    {

        int column = 1;
        while (column <= row) //loop for columns
        {
            cout << "*";
            column = column + 1;
        }
        cout << endl; //enter after each row

        row = row + 1; // row incrementing
    }

    return 0;
}