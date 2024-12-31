#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Write a program to overload A*2 using binary operator overloading

class A{

    int a;

    public:
    void getdata(){

        cout<<"Enter a: ";
        cin>>a;
    }

    void display(){

        cout<<"\nThe number is "<<a;
    }

    void operator*(int x);


};
void A::operator*(int x){

    a = a*x;
}

int main(){

    A s;
    s.getdata();
    s.display();
    cout<<"\nAfter multiplying";
    cout<<"\n------------------";
    s*2;
    s.display();

}


