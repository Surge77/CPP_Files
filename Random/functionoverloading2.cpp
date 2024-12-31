#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Write a program to calculate the perimeter of rectangle and square using function overloading

 // Function to calculate the perimeter of a rectangle
// int calculatePerimeter(int length, int width) {
//     return 2 * (length + width);
// }

// // Function to calculate the perimeter of a square
// int calculatePerimeter(int side) {
//     return 4 * side;
// }

class A {

    public:

    int l,w,s;// variables for length width of rectangle and side for square

    void getdata(){ // function for getting the data from the user

        cout<<"Enter the length of the rectangle: ";
        cin>>l;
        cout<<"Enter width of the rectangle: ";
        cin>>w;
        cout<<"Enter side of square: ";
        cin>>s;
    }
    
    //function overloading it means same function name with different parameters
    void calculateperimeter(int l,int w);
    void calculateperimeter(int s);

};

void A::calculateperimeter(int l,int w){ //function definition outside of class

    int P;
    P = 2 * (l+w);
    cout<<"\nPerimeter of rectangle is: "<<P;
}

void A::calculateperimeter(int s){ //function definition outside of class

    int P;
    P = 4 * s;
    cout<<"\nPerimeter of square is: "<<P;
}

int main(){

    A v;
    v.getdata();
    v.calculateperimeter(v.l,v.w);
    v.calculateperimeter(v.s);
}