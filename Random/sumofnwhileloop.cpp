#include <iostream>
using namespace std;

int main() // Here we have to print the sum of 1 to n number
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 1; // i should start from 1
    int sum = 0; // sum should always start from 0

    while (i <= n)
    {
        sum = sum + i; //The mathematical formula for calculating sum is sum = n/2(a+l) here a is first and l is last term 
        i = i + 1;      // if n is 100 then first term will be 1 and last term will be 100 in the formula
    }
    cout<<"the value of sum is: "<<sum<<endl;

    return 0;
}