#include<iostream>
using namespace std;

class points
{
    int x,y;
    public:
    void getdata(int a,int b);
    void display();
};

void points::getdata(int a,int b)
{
    x=a;
    y=b;

}
void points::display()
{
    cout<<"C"<<x<<" "<<y<<"y";
}
int main()
    {
        points p;
        p.getdata(50,89);
        p.display();
    }