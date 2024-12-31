#include <iostream>
using namespace std;

// Question: To print the following pattern using while loop

// ******
// ******
// ******
// ******

// Here consider i = rows and j = columns and construct a relation between the pattern using whle loop
// and printing the corresponding pattern

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    int i = 1; // row starting from 1

    while (i <= n) //we are able to give equal to sign because we started from 1 and this loop is for rows 
    {

        int j = 1; // column starting from 1
        
        while (j <= n)// this loop is for columns
        {
            cout << "*";
            j = j + 1;
        }
        cout << endl;

        i = i + 1;
    }
}