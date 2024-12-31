#include <iostream>
using namespace std;

// Question: printing the following pattern

// A B C
// D E F
// G H I

//wE NEED TO STORE THE COUNTING IN A SEPARATE VARIBALE JUST LIKE PATTERN 5

int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n; // n decides how much times to print the pattern

    int row = 1; // We start the row count from 1
    char ch = 'A'; //Varible declaration also affects the pattern it varies upon where you declare the variable
    while (row <= n) // loop for rows printing
    {

        int column = 1;
        
        while (column <= n) // loop for columns , everthing depends on what we write after <= if n then square pattern if row then triangle pattern
        {
            cout << ch << " ";
            ch = ch + 1;
            column = column + 1;
        }
        cout << endl;

        row = row + 1;

        
    }
}