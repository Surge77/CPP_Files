#include <iostream>
using namespace std;

// Question: printing the following pattern

// 1 2 3
// 4 5 6
// 7 8 9

// i = rows and j = columns

int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n; // n decides how much times to print the pattern

    int i = 1;     // We start the row count from 1
    int count = 1; // we created a varible to count the numbers from 1

    while (i <= n)
    { // this loop is for rows

        int j = 1;     // column initialized with 1
        while (j <= n) // this loop is for columns
        {
            cout << count << " "; // for adding space between number
            count = count + 1;
            j = j + 1; // incrementing the column
        }
        cout << endl;

        i = i + 1; // incrementing the row
    }

    return 0;
}