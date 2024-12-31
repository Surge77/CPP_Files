#include <iostream>
#include<bits/stdc++.h>
using namespace std;

/*
Printing the following pattern using nested loops

* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *

*/

int main()
{

  int n;
  cout << "Enter number of rows and coloums to print: ";
  cin >> n;
  for (int i = 0; i < n; i++) //outer loop for printing rows
  {

    for (int j = 0; j < n; j++)//inner loop for printing columns
    {

      cout << "* ";
    }
    cout << "\n";
  }
}