#include<bits/stdc++.h>
using namespace std;

//Adding two complex number using friend function , another apporach

class Complex{

    private:

    int real;
    int img;

    public:

    void getdata(){ //function for getting the data from user 

        cout<<"Enter real part: ";
        cin>>real;
        cout<<"Enter img part: ";
        cin>>img;
    }

    void display(){

        cout<< real << " + "<< img<<"i";
    }
    friend Complex add(Complex s1,Complex s2); //friend function declaration
};

Complex add(Complex s1,Complex s2){ // defining of friend function

    Complex t;
    t.real = s1.real + s2.real;
    t.img = s2.img + s2.img;
    return t;
}

int main(){

    Complex m,n,R; 
    m.getdata();
    n.getdata();
    R = add(m,n);
    R.display();
    
}

