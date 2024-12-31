#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// print linearly from 1 to n using recursion

void func1(int i, int n)
{

    if (i > n)
    {
        return;
    }
    else
    {
        cout << " " << i;
        func1(i + 1, n);
    }
}

int main()
{

    int n;
    cout << "Enter a digit: ";
    cin >> n;

    func1(1, n);
}