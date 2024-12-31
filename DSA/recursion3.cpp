#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// print linearly from n to 1 using recursion

//An alternative method of doing as we know the first number to print is n and the last is 1 so....

void func1(int i, int n)
{

    if (i < 1)
    {
        return;
    }
    cout << " " <<i ;
    func1(i-1, n);
}

int main()
{

    int n;
    cout << "Enter a digit: ";
    cin >> n;

    func1(n, n);

}    