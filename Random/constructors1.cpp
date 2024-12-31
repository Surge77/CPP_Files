#include<bits/stdc++.h>
using namespace std;

//Program to add two data members of class using default constructors

class A{

    private:

    int a,b;

    public:

    A(){ //default constructor

        a = 100;
        b = 200;
    }

    void display(){

        int t;
        t = a + b;
        cout << t;
    }

};

int main(){

    A x;
    cout<<"addition is "; x.display();
}