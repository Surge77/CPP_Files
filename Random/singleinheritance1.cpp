#include <bits/stdc++.h>
#include <cmath>
using namespace std;

// Write a program to find the Euclidean distance between two points using single inheritance,Take the data related to two points
// in base class and find the distance in derived class

class A //base class
{

protected:
    int x1, x2, y1, y2;

public:
    void getdata()
    {

        cout << "Enter x and y for two points: ";
        cin >> x1 >> y1 >> x2 >> y2;
    }

    void display()
    {

        cout << "(" << x1 << "," << y1 << ")";
        cout << "(" << x2 << "," << y2 << ")";
    }
};

class B : public A //derived class
{

public:
    void dist()
    {

        float R;
        R = sqrt(x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
        cout << "Result : " << R;
    }
};

int main()
{

    B a;
    a.getdata();
    a.display();
    a.dist();
}