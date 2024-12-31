#include <iostream>
using namespace std;

// Question: FInd the sum of all even integers from 1 to N and take the n input from the user

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;
    int i = 2;

    while (i <= n)
    {
        if (i % 2 == 0)
            sum = sum + i;
        i = i + 1;
        
    }

    cout << "sum from " << 1  << " to " <<  n << "=" << sum << endl;

    return 0;
}