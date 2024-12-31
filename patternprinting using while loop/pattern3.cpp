#include <iostream>
using namespace std;

// Question: Print the following pattern

//  1 2 3 4
//  1 2 3 4  Here columns are same i.e j
//  1 2 3 4
//  1 2 3 4

// i = rows and j = columns

int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n; //n decides how much times to print the pattern

    int i = 1; // We start the row count from 1

    while (i <= n) //this loop is for rows 
    {

        int j = 1;

        while (j <= n)// this loop is for columns
        {

            cout << j; // in each column we are printing the corresponding column number
            j = j + 1; // incrementing column
        }
        cout << endl; //Acts as enter and goes to next line

        i = i + 1; //incrementing row
    }

    return 0;
}
