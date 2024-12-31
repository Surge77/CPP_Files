#include <iostream>
using namespace std;

// Question: printing the following pattern

// 1
// 2 1
// 3 2 1
// 4 3 2 1

// here row = n and a formula is required to print output just like in pattern 4

int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n; // n decides how much times to print the pattern

    int row = 1; // We start the row count from 1

    while (row <= n)//loop for rows printing
    {

        int column = 1;

        while (column <= row)// loop for columns printing
        {

            cout << row - column + 1<<" " ; //this is the formula created for above pattern which is true for every element
            column = column + 1; //column updation
        }
        cout << endl;

        row = row + 1; // row updation
    }
}