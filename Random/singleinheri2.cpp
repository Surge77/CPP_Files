#include<bits/stdc++.h>
using namespace std;

//Find average of two numbers using single inhertance

class A{ //base class

    protected:
    int a,b;

    public:

    void getdata(){

        cout<<"Enter a :";
        cin>>a;
        cout<<"Enter b: ";
        cin>>b;

    }

};

class B : public A{ //derived class

public:
    void display(){

        float R;
        R = (a+ b)/2.0;
        cout<<R;
    }
}b;

int main(){
    
    b.getdata();
    cout<<"Averge of two no is "; b.display();
    

}