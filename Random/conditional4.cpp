#include <iostream>
using namespace std;

// Question: To print whether the number is uppercase or lowercase or a numeric between 0 to 9
//This question can be solved with the help of ascii table as every character has its ascii value

int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 97 && ch <= 122)
    {
        cout << "It is lowercase" << endl;
    }
    else if (ch >= 65 && ch <= 90)
    {
        cout << "It is an uppercase" << endl;
    }
    else if (ch >= 48 && ch <= 57)
    {
        cout << "It is a numeric" << endl;
    }
    else
    {
        cout << "It is something else"<<endl;
    }
}