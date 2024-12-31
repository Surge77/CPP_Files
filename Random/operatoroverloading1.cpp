#include<iostream>
using namespace std;

//Write a program to negate 3 integer numbers using unary operator overloading

class A
{
private:
    int a, b, c;

public:
    void getdata(); // function to input data from the user
    void display(); // function to display the data
    void operator-(); 
};

void A::getdata() //function for getting the input from user
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


void A:: operator-()  //function for negating the values using the overloaded operator

{
    a = -a;
    b = -b;
    c = -c;
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
