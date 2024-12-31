#include<bits/stdc++.h>
#include<cstdlib>
#include<conio.h>
using namespace std;

//Program to copy value of one data member of one object to another object using copy constructor

class Id{

    private:

    int id1,id2;

    public:

    Id(int a,int b){

        id1 = a;
        id2 = b;
    }
    Id(const Id &x){ //copy constructor

        id1 = x.id1;
        id2 = x.id2;

    }

    void display(){

        cout<<id1 <<" "<<id2<<endl;
    }


};

int main(){

    Id a(10 , 20);
    Id b(a);

    cout<<"Data members of objects a: ";
    a.display();

    cout<<"Data members of objects b: ";
    b.display();

    getch();

    system("cls");
}