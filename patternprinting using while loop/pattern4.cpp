#include <iostream>
using namespace std;

// Question: Print the following pattern

// 6 5 4 3 2 1
// 6 5 4 3 2 1        same as pattern 3 but it is reversed
// 6 5 4 3 2 1
// 6 5 4 3 2 1
// 6 5 4 3 2 1

// i = rows and j = columns

// everything is same as pattern 3 we just require a formula for column printing

int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n; // n decides how much times to print the pattern

    int i = 1; // We start the row count from 1

    while (i <= n) //this loop is for rows 
    {

        int j = 1;

        while (j <= n) // this loop is for columns
        {

            cout << n - j + 1; // this is the formula devised for the above pattern
            j = j + 1;         // incrementing column
        }
        cout << endl; // Acts as enter and goes to next line

        i = i + 1; // incrementing row
    }

    return 0;
}
