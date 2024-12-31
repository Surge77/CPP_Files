#include <iostream>
using namespace std;

int main()
{
    int age; // Here we have three cases so we used if else if ladder
    cout << "Enter age: ";
    cin >> age;

    if (age < 12)
    { // Age : below 12: child
        cout << "child";
    }
    else if (age < 18)
    {
        cout << "Teenager"; //  age : below 18: teenager
    }
    else
        cout << "Adult"; // Age above 18 : Adult

    return 0;
}