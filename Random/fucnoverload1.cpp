#include<iostream>
using namespace std;

//Write a program to calculate the volume of the cube,cylinder and rectangular box using function overloading

class V
{
    public:

    int a,l,b,h;//variables for cube side and length breadth height for cuboid 
    float r,he; //readius and height for cylinder
    
    public:

    //functiion overloading
    void getdata();
    void volume(int a);//for cube
    void volume(float r,float he);//for cylinder
    void volume(int l,int b,int h);//for rectangular box or cuboid
};

void V:: getdata() //function for getting the data from the user
{
    cout<<"Enter side for cube: ";
    cin>>a;
    cout<<"enter radius and height for cylinder: ";
    cin>>r>>he;
    cout<<"enter l,b,h for cuboid: ";
    cin>>l>>b>>h;
}
void V::volume(int a){
    int R;
    R = a*a*a;
    cout<<"volume of cube = "<<R<<endl;
}
void V::volume(float r,float he)
{
    float R;
    R= 3.14*r*r*he;
    cout<<"volume of cylinder: "<<R<<endl;

}
void V::volume(int l,int b,int h)
{
    int R;
    R= l*b*h;
    cout<<"volume of cuboid = "<<R<<endl;
}

int main()
{
    V v;
    v.getdata();
    v.volume(v.a);
    v.volume(v.r,v.he);
    v.volume(v.l,v.b,v.h);
}