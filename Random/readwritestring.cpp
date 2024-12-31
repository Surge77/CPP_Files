#include <iostream>
using namespace std;
int main()
{
    char s1[30], s2[30];
    cout << "Enter your names:\n";
    cin.get (s1, 30);
    cin.ignore ();
    cin.get (s2, 30);
    cout << "Welcome " << s1 << " and " << s2;
}