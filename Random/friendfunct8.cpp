#include <bits/stdc++.h>
using namespace std;
#include <cstring>

// Program to perform the concatenation of private data members(string) of two classes using friend function

class Test
{
private:
    char str1[100], str2[100];

public:
    void input()
    {
        cout << "Enter first string:";
        cin.getline(str1, 100);

        cout << "Enter second string:";
        cin.getline(str2, 100);
    }

    friend void add(Test t ); //declaration of friend function
};

void add(Test t) //friend function definition
{
    strcat(t.str1, t.str2); //The first parameter is ‘destination’ and the second parameter is ‘source’.
    cout << "After Concatenated string:" << t.str1;  //syntax for concatenation: Strcat (destination, source)
}

int main()
{
    Test t;
    t.input();
    add(t);

    return 0;
}
