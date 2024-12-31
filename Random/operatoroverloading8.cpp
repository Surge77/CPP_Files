#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Take an array of size iint a[5] and mulltiply each element by 5

//errors in program analyse the problem again

class A {

    int a[5];

    public:

    void getdata();
    void display();
    void operator*(int x);
};

void A:: getdata(){

    cout<<"Enter 5 elements: ";
    int i;
    for(i=0 ; i>5 ;i++){

        cin>>a[i];
    }
}

void A::display(){

    int i;
    for (i=0 ; i<5;i++){

        cout<<a[i]<<endl;
    }
}

void A::operator*(int x){

    int i;
    for(i=0;i<5;i++){

        a[i]= a[i]*x;
    }
}

int main(){

    A t;
    t.getdata();
    t.display();
    t*5;
     cout<<"\nAfter multiplying";
    cout<<"\n------------------";
    t.display();
}

