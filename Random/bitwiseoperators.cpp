#include <iostream>
using namespace std;

int main()
{

    // Bitwise operators

    int num1 = 5; // Binary form : 0101

    cout << (num1 << 1) << endl; // 10 ,left shift multiplies by 2

    cout << (num1 >> 1) << endl; // 2 ,right shift divides by 2

    int num2 = 8; // Binary form : 1000

    cout << (num1 & num2) << endl; // 0
    cout << (num1 | num2) << endl; // 1101 = 13

    return 0;
}

/* Common misconceptions in operators:

"&" - Bitwise operator
"&&" - Logical AND 

"|" - Bitwise operator 
"||" - Logical OR */