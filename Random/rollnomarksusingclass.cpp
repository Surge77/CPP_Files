#include<iostream>
using namespace std;

class student
{
    public:
    int roll;
    int marks;

    public:

    void getdata();
    void display();
};

void student::getdata()
{
    cout<<"enter roll no: ";
    cin>>roll;
    cout<<"enter marks: ";
    cin>>marks;
}
void student::display()
{
    cout<<"roll = "<<roll<<endl;
    cout<<"marks = "<<marks<<endl;
}
int main()
{
    student s;
   s.getdata();
   s.display();
}
    