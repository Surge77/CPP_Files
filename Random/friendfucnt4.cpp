#include<bits/stdc++.h>
using namespace std;

//program to find largest sum of two different classes using friend function

class B; //forward declaration for using class B in friend fucntion declaration

class A{

    int  num1,num2; //two private data members for the sum of class A 

    public:

    void get(){ //function that takes the input from the user

        cout<<"Details of class A: \n";

        cout<<"Enter first number: ";
        cin>>num1;
        cout<<"Enter second number: ";
        cin>>num2;
        cout<<"\n";
    }

    friend void sum(A m, B n); //friend function declaration

}; //class A ends

class B{

    int num3,num4;

    public:

    void getdata(){
        
        cout<<"Details of class B:\n ";
        cout<<"Enter third number: ";
        cin>>num3;
        cout<<"Enter fourth number: ";
        cin>>num4;

    }

    friend void sum(A m,B n); //friend function declaration

};

void sum (A m, B n){ // defining the friend functino

    int s1,s2; //variables declared for sum1 and sum2
    s1 = m.num1+m.num2; //addition of class A data members 
    s2= n.num3+n.num4; //addition of class B data members 

    if (s1>s2){ //in this condition the greatest sum is evaluated

        cout<<"Sum of class A is largest i.e "<<s1;
    }
    else{
        cout<<"Sum of B is largest i.e "<<s2;
    }


}

int main(){

    A x; //object for class A
    B y; //object for class B
    x.get(); 
    y.getdata();
     sum(x,y);
}

