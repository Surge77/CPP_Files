#include<bits/stdc++.h>
using namespace std;

//program to add private members of two different classes using friend function

class B; // this is forward declaration , used beforehand because compiler 
         // should know this class exist when we declare it as friend class

 class A{
    int num1;

    public:

    void get(){

        cout<<"Enter first number: ";
        cin>>num1;
    }

    friend void sum(A m, B n);

 };

 class B{

    int num2;

    public:

    void get(){
        cout<<"Enter second number: ";
        cin>>num2;
    }

    friend void sum(A m,B n); //friend function declaration

 };  

 void sum(A m , B n){  //defining friend function outside class

    int t;
    t = m.num1 + n.num2;
    cout<<t;
 }

 int main(){

    A x;
    B y;
    x.get();
    y.get();
    cout<<"Addition is : "; sum(x,y); // here << gave error before sum 
 }

