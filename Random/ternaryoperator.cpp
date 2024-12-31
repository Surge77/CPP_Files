#include <iostream>
using namespace std;

int main()
{
    int marks;               // This is a example of ternary operator
    cout << "Enter marks: "; // This operator uses less lines compared to if else statements
    cin >> marks;

    marks > 33 ? cout << "pass" << endl : cout << "fail" << endl;

    return 0;
}
/* Syntax of Conditional/Ternary Operator in C
The conditional operator can be in the form

variable = Expression1 ? Expression2 : Expression3;
Or the syntax can also be in this form

variable = (condition) ? Expression2 : Expression3;
Or syntax can also be in this form

(condition) ? (variable = Expression2) : (variable = Expression3); */