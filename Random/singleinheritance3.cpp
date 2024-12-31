#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//write a program to display roll no and total marks of 2 subjects for a student using single inheritance

class details{ //base class

        protected:

        int roll,m1,m2; //variable for roll no and marks of subject 1 and 2

        public:

        void get_roll(){ //function for getting roll no (for a single student)

            cout<<" Enter Roll no: ";
            cin>>roll;
        }

         void get_marks(){ //fucntion for getting the marks for two subjects

            cout<<" Enter marks of subject 1: ";
            cin>>m1;
            cout<<" Enter marks of subject 2: ";
            cin>>m2;
            
         }   

         void display_details(){ //function for displaying the details entered above 

            cout<<"\n Roll no: "<<roll;
            cout<<"\n subjects 1 marks: "<<m1;
            cout<<"\n subjects 2 marks: "<<m2;
         }

        };

    class total: public details //derived class
    {
        public:

        void display(){ 

            int t;
            t = m1+m2;
            cout<<"\n\n Total marks: "<<t;
        }

    };

    int main(){

        total a;
        a.get_roll();
        a.get_marks();
        a.display_details();
        a.display();
    }



