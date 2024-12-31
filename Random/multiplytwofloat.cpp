#include <iostream>
using namespace std;


// Creating a user-defined function
// called mul_floatnumbers that
// multiplies the numbers passed to
// it as an input. It gives you the
// product of these numbers.
float mult_floatnumbers(float a, float b)
{
    return a * b;
}

// The two floating-point
// numbers are multiplied using the function that uses the arithmetic operator ( * ), and the product is stored in the variable product.

int main()
{ // C++ program to multiply two
    // floating point numbers

    float a = 1.2, b = 3.0, product;

    // Calling mul_floatnumbers function
    product = mult_floatnumbers(a, b);

    cout << product;

    return 0;
}