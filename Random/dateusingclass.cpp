#include <iostream>
using namespace std;

class date
{
public:
    int day;
    int year;
    int month;

public:
    void getdata();
    void display();
};
void date::getdata()
{
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;
}
void date::display()
{
    cout << day << "/" << month << "/" << year;
}
int main()
{
    date d;
    d.getdata();
    d.display();
}