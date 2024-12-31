#include <iostream>
using namespace std;

// Question: Program to convert farenheit to celsius using a simple formula
//  C = 5/9 * (F - 32)

int main()
{
    float farenheit;
    cout << "Enter temp in F: ";
    cin >> farenheit;

    float temp = 5.0 / 9 * (farenheit - 32);

    cout << "The temperature in Celsius is: " << temp << " C";

    return 0;
}