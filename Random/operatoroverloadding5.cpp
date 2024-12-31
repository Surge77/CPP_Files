#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//write a program using binary operator overloading to perform addition of two complex numbers using member functions 
//with the help of friend function

class Complex{

    int real,img;

    public:

    Complex(){

    }

    Complex(int a , int b){

        real = a;
        img = b;
    }

    void display(){

        cout<<real<<" + j"<<img;
    }

    friend Complex operator+(Complex c, Complex d); //friend function declaration


};

Complex operator+(Complex c, Complex d){ //friend function definition

    Complex t;
    t.real = c.real + d.real;
    t.img = c.img + d.img;
    return t;

}

int main(){

     int r1,r2,i1,i2;  //varibles for taking the inputs from the user
    cout<<"\nReal part of complex number 1:  ";
    cin>>r1;
    cout<<"\nImaginary part of complex number 1: ";
    cin>>i1;
    cout<<endl;
    cout<<"\nReal part of complex number 2:  ";
    cin>>r2;
    cout<<"\nImaginary part of complex number 2: ";
    cin>>i2;
    cout<<endl;

     Complex c1(r1,i1), c2(r1,i2),c3; //creating two objects of complex class
    c3 = c1 + c2;
    cout<<"\n1st complex number: ";
    c1.display(); 
    cout<<"\n2nd complex number: ";
    c2.display();
    cout<<"\nsum of two complex numbers is: ";
    c3.display();

}