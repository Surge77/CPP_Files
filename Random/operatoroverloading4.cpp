#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//write a program using binary operator overloading to perform addition of two complex numbers using member functions

class Complex{

    int real,img;

    public:

    Complex(){

    }

    Complex(int r , int i){

        real = r;
        img = i;
    }

    void display(){

        cout<<real<<" + j"<<img;
    }

    Complex operator + ( Complex c);

};

Complex Complex::operator+(Complex c){ //operator overloading
      Complex t;
      t.real = real + c.real;
      t.img = img + c.img;
      return t;
}

int main(){

    int r1,r2,i1,i2;
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

    Complex c1(r1,i1), c2(r1,i2),c3;
    c3 = c1 + c2;
    cout<<"\n1st complex number: ";
    c1.display(); 
    cout<<"\n2nd complex number: ";
    c2.display();
    cout<<"\nsum of two complex numbers is: ";
    c3.display();

}