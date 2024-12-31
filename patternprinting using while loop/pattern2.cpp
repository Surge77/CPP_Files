#include <iostream>
using namespace std;

// Question: Print the following pattern

// 1 1 1 1
// 2 2 2 2
// 3 3 3 3  here rows is same i.e i
// 4 4 4 4
// 5 5 5 5

// i = rows and j = columns

// Here rows = 3 and colums = i that means column is the respective row number

int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;

    int i = 1;

    while (i <= n) //this loop is for rows 
    {

        int j = 1;
        while (j <= n) // this loop is for columns
        {
            cout << i;
            j = j + 1;
        }
        cout << endl;

        i = i + 1;
    }

    return 0;
}