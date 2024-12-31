#include <iostream>
using namespace std;

// Question: printing the following pattern

// 1
// 2 3
// 4 5 6
// 7 8 9 10

// this is just like pattern 5 but we have to print it in rectangle pattern

int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n; // n decides how much times to print the pattern

    int row = 1;   // We start the row count from 1
    int count = 1; // we created a varible to count the numbers from 1

    while (row <= n) // loop for rows
    {

        int column = 1; 
        while (column <= row) // loop for columns
        {
            cout << count << " ";
            count = count + 1;
            column = column + 1;
        }
        cout << endl; //enter after each row

        row = row + 1; // row incrementation
    }

    return 0;
}