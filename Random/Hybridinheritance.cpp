#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//write a program to display information regarding a student with roll no, 3 subject marks, total, sports score , total subject marks
//using hybrid inheritance using virtual base classes

class student{ //base class

    protected:

    int r;

    public:

    void get_roll(){

        cout<<"Enter your Roll no: ";
        cin>>r;
    }

    void display_roll(){

        cout<<"\nYour Roll no is : "<<r;
    }


};

class marks: virtual public student{ //derived class of student

    protected:

    int m1,m2,m3;

    public:

    void get_marks(){

        cout<<"\nEnter marks for subject 1: ";
        cin>>m1;
        cout<<"\nEnter marks for subject 2: ";
        cin>>m2;
        cout<<"\nEnter marks for subject 3: ";
        cin>>m3;
    }

    void display_marks(){

        cout<<"\n\nMarks of subject 1: "<<m1;
        cout<<"\n\nMarks of subject 2: "<<m2;
        cout<<"\n\nMarks of subject 3: "<<m3;
    }


};

class sports: virtual public student{  //virtual base classes are used  //derived class of student

    protected:

    int score;

    public:

    void get_score(){

        cout<<"\nEnter sports score: ";
        cin>>score;
    }

    void display_score(){

        cout<<"\n\nYour sports score is: "<<score;
    }


};

class stud_total: public marks,public sports{ //derived class of marks and sports class

    public:
    void display(){

        int total;
        total = m1+m2+m3+score;
        cout<<"\n\n Total marks: ";
        cout<<total;
    }


};

int main(){

    stud_total t;
    t.get_roll();
    t.get_marks();
    t.get_score();
    cout<<"-----------------------------";
    t.display_roll();
    t.display_marks();
    t.display_score();
    t.display();
}