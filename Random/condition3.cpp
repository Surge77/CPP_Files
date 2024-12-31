#include <iostream>
using namespace std;

int main()
{
    int a = 9;
    if (a == 9)
    {
        cout << "NINEY";
    }
    if (a > 0)
    {
        cout << "POSITIVE";  //In this case both first and second conditions are true so both will be displayed
    }
    else
    {
        cout << "NEGATIVE";
    }
}