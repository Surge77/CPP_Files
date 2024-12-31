#include<bits/stdc++.h>
using namespace std;

//adding two complex numbers using constructors and friend functions

class Complex {
public:
  int real;
  int imaginary;

  Complex() { //default constructor
    real = 0;
    imaginary = 0;
  }

  Complex(int r, int i) { //parametrized constructor
    real = r;
    imaginary = i;
  }

 friend Complex add(Complex,Complex);  //friend funcion declaration


  void display() {
    cout << real << "+" << imaginary << "i" << endl;
  }
};

Complex add(Complex c1,Complex c2){ // friend function definition

    Complex t;
    t.real = c1.real + c2.real;
    t.imaginary = c1.imaginary+ c2.imaginary;
    return t;
}

int main() {

    Complex M(2,3) , N(5,6) , S;
    cout<<"\n1st Complex no is : ";
    M.display();
    cout<<"\n";

    cout<<"2nd complex no is : ";
    N.display();

    S = add(M,N);
    cout<<"\nThe sum is : ";
    S.display();
  
}