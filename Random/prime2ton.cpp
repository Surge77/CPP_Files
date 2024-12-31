#include <iostream>
using namespace std;

//Question: This while loop checks whether the number n which is input from user is prime or not prime starting from 2 to n

int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;

    int i = 2; // as we know 1 is divisible by every number so we start from 2

    while (i < n) // we gave the less than symbol beacause if we divide n with n we always get 0 i.e same number division
    {
        if (n % i == 0)
        {
            cout << "Not prime for: "<< i << endl;
        }
        else{
            cout<<"Prime for: "<< i <<endl; //prime number can only be divided by itself 
        }
        i = i + 1;
    }
}