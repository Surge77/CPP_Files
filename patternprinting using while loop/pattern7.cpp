#include <iostream>
using namespace std;

// Question: printing the following pattern

// 1
// 2 2
// 3 3 3
// 4 4 4 4

// Here n = 4 and and we need to print the row number
// n means how much time to print the pattern

int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n; // n decides how much times to print the pattern

    int row = 1; // row starting from 1

    while (row <= n)
    { // Loop for rows

        int column = 1;
        while (column <= row)
        { // loop for columns

            cout << row; // as the row number and the elements in the row are same
            column = column + 1;
        }
        cout << endl; // enter after a row

        row = row + 1;
    }

    return 0;
}