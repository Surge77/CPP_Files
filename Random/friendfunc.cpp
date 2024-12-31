#include<bits/stdc++.h>
using namespace std;

/*  C++ Program to find Mean Value of number using Friend function  */

class  base
{
    int val1,val2; //here by default is declared in private

   public:
        void getdata() 
        {
           cout<<"\nEnter 1st value :: "; //we can also do this by passby value method 
           cin>>val1;                       //like void get(int x,int y) then x = val1 and y = val2
           cout<<"\nEnter 2nd value :: ";
           cin>>val2;
        }

        friend float mean(base ob); //declaring friend function
};

float mean(base ob) //defining friend function outside the class
{ 
   return float(ob.val1+ob.val2)/2;
}

int main()
{
    base obj; //object created of base class
    obj.getdata(); 
    cout<<"\nMean value is :: "<<mean(obj)<<"\n"; //printinng the mean value

    return 0;
}