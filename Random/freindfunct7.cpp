#include <bits/stdc++.h>
using namespace std;

// Program to swap the private data members of class using friend function

class Swap
{

private:
    int a, b;

public:
    void getdata()
    { // get the data from the user
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
    }

    void display()
    { // print the number on the screen

        cout << " a = " << a << " b = " << b;
    }

    friend void swap_number(Swap &s); // friend function
};

// swap the number
void swap_number(Swap &s)
{

    /* accessing private members from the friend function */

    int temp;
    temp = s.a;
    s.a = s.b;
    s.b = temp;
}

int main()
{

    Swap obj;  // creating object of class

    obj.getdata();
    cout << "Before swapping : " << endl;
    obj.display();

    swap_number(obj);
    cout << "\nAfter swapping :" << endl;
    obj.display();
}