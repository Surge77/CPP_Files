#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <string>
using namespace std;

// write a program to find the sum and average of two integer numbers using multi level inheritance

class details //class for taking the first and second number from the user
{

protected:
    int x, y;

public:
    void getdata()
    {
        cout << "Enter first number: ";
        cin >> x;
        cout << "Enter second number: ";
        cin >> y;
    }

    void display() //to display the input numbers on screen 
    {

        cout << "\nFirst number is : " << x;
        cout << "\n\nsecond number is : " << y;
    }
};

class sum : public details
{

public:
    int addition()
    {
        return x + y;
    }
};

class average : public sum
{

public:
    int avg()
    {

        float t;
        t = addition() / 2;
        return t;
    }
};

int main()
{

    average c;
    c.getdata();
    c.display();
    cout << "\n\nsum is " << c.addition();
    cout << "\n\nAverage is " << c.avg();
    cout << "\n";
}