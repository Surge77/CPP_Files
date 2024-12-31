#include<iostream>
using namespace std;

//Write a program to negate 3 integer numbers using unary operator overloading (friend functions)

class A
{
private:
    int a, b, c;

public:
    void getdata(); // function to input data from the user
    void display(); // function to display the data
    friend void operator-(A& s); // friend function declaration
};

void A::getdata()
{
    cout << "\nEnter first integer: ";
    cin >> a;
    cout << "\nEnter second integer: ";
    cin >> b;
    cout << "\nEnter third integer: ";
    cin >> c;
}

void A::display()
{
    cout << "\na = " << a;
    cout << "\nb = " << b;
    cout << "\nc = " << c;
}

// Friend function definition
void operator-(A& s) //The friend function should take a reference to the object (A& s) instead of a copy (A s). This is necessary to modify the actual object passed to the function.

{
    s.a = -s.a;
    s.b = -s.b;
    s.c = -s.c;
}

int main()
{
    A t;
    t.getdata();
    
    cout << "Before Negative: ";
    t.display();

    cout << "\nAfter negative: ";
    -t; // Using the overloaded operator
    t.display();

    return 0;
}
