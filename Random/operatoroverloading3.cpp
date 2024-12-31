#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Write a program using unary operator overloading to overload plus plus (++) operator using friend function

class A{

    int a,b,c;

    public:

    void getdata();// function to input data from the user
    void display(); // function to display the data
    friend void operator ++(A& s);


};

void A::getdata(){

     cout << "\nEnter first integer: ";
    cin >> a;
    cout << "\nEnter second integer: ";
    cin >> b;
    cout << "\nEnter third integer: ";
    cin >> c;
    cout<<endl;
}

void A::display()
{
    cout << "\na = " << a;
    cout << "\nb = " << b;
    cout << "\nc = " << c;
}

void operator++(A& s){ //function for incrementing the values
    
    s.a = s.a+1;
    s.b = s.b+1;
    s.c = s.c+1;
}

int main(){

    A t;
    t.getdata();
    cout<<"Before ++";
    t.display();
    cout<<"\nAfter ++";
    ++t;
    t.display();
}
