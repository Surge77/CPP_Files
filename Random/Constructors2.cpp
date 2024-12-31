#include<bits/stdc++.h>
using namespace std;

//Alternative method of adding two numbers using parameterized constructors

class add{

    int c;

    public:

     add(int a,int b){ //A parameterized constructor which is adding two numbers

        c = a + b;

    }

    void display(){

        cout<<"The sum of two numbers is : "<<c;
    }
};

int main(){

    int a,b;
    
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    
    add obj(a,b);
    obj.display();

}