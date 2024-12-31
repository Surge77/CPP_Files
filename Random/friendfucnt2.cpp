#include<bits/stdc++.h>
using namespace std;

//Program to perform addition of two data members using friend function
//and create 5 objects for class and perform addition of data members for 5 objects

class A{

    int x,y;

    public:

    void get(){ //function for gettting the data from the user

        cout<<"Enter first number: ";
        cin>>x;
        cout<<"Enter second number: ";
        cin>>y;
    }

    friend int add(A obj); //declaring the friend function
};

int add(A obj){  //defining friend function outside of class
     int a = (obj.x+obj.y);
    return  a;
}

int main(){

    A i,j,k,l,m; //here we need to perform addition five time and for that we created five objects
    i.get(); //getting data for first number 1
    cout<<"Addition is : "<<add(i)<<endl;
    cout<<" \n";
    j.get(); // getting data for number 2
    cout<<"\nAddition is : "<<add(j)<<endl;
    cout<<" \n";
    k.get();// getting data for number 3
    cout<<"\nAddition is : "<<add(k)<<endl;
    cout<<" \n";
    l.get(); // getting data for number 4
    cout<<"\nAddition is : "<<add(l)<<endl;
    cout<<" \n";
    m.get(); // getting data for number 5
    cout<<"\nAddition is : "<<add(m)<<endl;

}