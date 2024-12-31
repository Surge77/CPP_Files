#include <iostream>
using namespace std;

int main()
{
    int a = 6;
    int b = 3;

    // Arithmentic operators

    cout << a + b << endl; // 9
    cout << a - b << endl; // 3
    cout << a * b << endl; // 18
    cout << a / b << endl; // 2
    cout << a % b << endl; // 0

    // Relational operators

    cout << (a == b) << endl; // false
    cout << (a != b) << endl; // true
    cout << (a >= b) << endl; // true
    cout << (a <= b) << endl; // false

    // Assignment operators

    a += 3; // 6+3 = 9
    cout << a << endl;
    b -= 2; // 3-2 = 1
    cout << b << endl;

    return 0;
}