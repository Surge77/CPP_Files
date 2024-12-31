#include<iostream>
using namespace std;

class A{
    public:
    int l,b,r;
    float ba,h; //data members

    //member functions
    void getdata();
    void area(int x);
    void area(int l,int b);
    void area(float b,float h);

};
void A::getdata()
{
    cout<<"Enter l and b for rectangle: ";
    cin>>l>>b;
    cout<<"Enter r for circle: ";
    cin>>r;
    cout<<"Enter b & h for triangle: ";
    cin>>ba>>h;
}
void A::area(int x)
{
    float R;
    R = 3.14*x*x;
    cout<<"area of circle = "<<R<<endl;
}
void A::area(int l,int b)
{
    int R;
    R = l*b;
    cout<<"area of rectangle = "<<R<<endl;
}
void A::area(float b,float h)
{
    float R;
    R = 0.5*b*h;
    cout<<"area of triangle is = "<<R<<endl;
}

int main()
{
    A a;
    a.getdata();
    a.area(a.l,a.b);
    a.area(a.r);
    a.area(a.ba,a.h);
}