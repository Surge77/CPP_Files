#include<iostream>
using namespace std;

class A
{
    public:
    int n1,n2;
    float s1,s2;

    public:
    void getdata(){
        cout<<"enter two integers: ";
        cin>>n1>>n2;
        cout<<"enter 2 floats: ";
        cin>>s1>>s2;
    }
    void sum(int x,int y);
    void sum(float m,float n);
};

void A::sum(int x,int y){
    int R;
    R = x + y;
    cout<<"sum of int is  = "<<R<<endl;
    
     }

     void A::sum(float m,float n){
        float R;
        R= m + n;
        cout<<"sum of float is: "<<R<<endl;
     }

     int main(){

        A a;
        a.getdata();
        a.sum(a.n1,a.n2);
        a.sum(a.s1,a.s2);
     }