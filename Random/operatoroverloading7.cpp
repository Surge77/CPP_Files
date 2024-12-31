#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Write a program to overload 2*A using binary operator overloading

class A{

    int a;

    public:

    void getdata(){

        cout<<"Enter a ";
        cin>>a;
    }

    void display(){

        cout<<"The number is : "<<a;
    }

    friend void operator*(int x, A& d); //friend function declaration


};

void operator*(int x, A& d){

    d.a = d.a*x;
}

int main(){

    A s;
    s.getdata();
    s.display();
    2*s;
    cout<<"\nAfter multiplying";
    cout<<"\n------------------";
    s.display();
}