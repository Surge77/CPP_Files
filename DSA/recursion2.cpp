#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// print linearly from n to 1 using recursion

// An alternative method is given in recursion3 file

void func1(int i, int n)
{

    if (i > n)
    {
        return;
    }
    cout << " " << n;
    func1(i, n - 1);
}

int main()
{

    int n;
    cout << "Enter a digit: ";
    cin >> n;

    func1(1, n);
    
}



