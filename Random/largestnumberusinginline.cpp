#include<iostream>

using namespace std;

class large
{
    public:
    int a,b;

    public:

    void getdata();
    void display();
};

void large:: display(){
    if(a > b){
        cout<<"largest number: "<<a;
    }
        else
        cout<<"largest number: "<<b;

}
  void large:: getdata()
{
    cout<<"Enter first integer: ";
    cin>>a;
    cout<<"Enter second integer: ";
    cin>>b;
}

int main(){

    large i;
    i.getdata();
    i.display();
 return 0;
}