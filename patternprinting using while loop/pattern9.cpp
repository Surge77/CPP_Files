#include <iostream>
using namespace std;

// Question: printing the following pattern

// 1
// 2 3
// 3 4 5
// 4 5 6 7

int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n; // n decides how much times to print the pattern

    int row = 1; // We start the row count from 1

    while (row <= n) //loop for rows
    {

        int column = 1;
        int value = row; 
        while (column <= row) //loop for columns
        {

            cout << value << " ";
            value = value + 1;
            column = column + 1;
        }
        cout << endl;

        row = row + 1;
    }

    return 0;
}
