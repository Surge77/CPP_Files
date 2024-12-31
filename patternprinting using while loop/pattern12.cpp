#include <iostream>
using namespace std;

// Question: printing the following pattern

// A A A
// B B B
// C C C

// HERE IN THE EXAMPLE N = 3 i.e input and rows printing depend on n i.e if n is 4 then 4 rows

int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n; // n decides how much times to print the pattern

    int row = 1; // We start the row count from 1

    while (row <= n) // loop for rows printing
    {

        int column = 1;
        char ch = 'A' + row - 1; // this is typecasting and the formula created for the pattern
        while (column <= n) // loop for columns , everthing depends on what we write after <= if n then square pattern if row then triangle pattern
        {
            cout << ch << " ";
            column = column + 1;
        }

        cout << endl;

        row = row + 1;
    }
}