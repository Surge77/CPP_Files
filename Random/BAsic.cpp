#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long b ; 
    char c ;
    float d;
    double e;

     cin >> a >> b >> c >> d >> e;
     printf("%d\n%ld\n%c\n%0.3f\n%0.9lf\n",*&a,*&b,*&c,*&d,*&e);
     printf("\n");

     printf("%d",a);

    return 0;
}
