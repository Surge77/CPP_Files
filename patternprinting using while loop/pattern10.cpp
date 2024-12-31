#include <iostream>
using namespace std;

// Question: printing the following pattern

// 1
// 2 3
// 3 4 5
// 4 5 6 7

// this is the second method of solving this pattern first method in pattern 9

// logic: column starts from 1 for every row.change it to start from row and go till row + row = row * 2

int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n; // n decides how much times to print the pattern

    int row = 1; // We start the row count from 1

    while (row <= n) // loop for rows
    {
        int column = row;
        while (column < row * 2)
        {
            cout << column << " ";
            column = column + 1;
        }
        cout << endl;
        row = row + 1;
    }

    return 0;
}
