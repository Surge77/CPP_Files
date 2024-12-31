#include<stdio.h>

int fact(int a)
{
    int n = 1;
    for(int i=1;i<=a;i++)
    {
        n = n*i;
    }
    return(n);
}

int main(){

    int n,r;
    printf("enter number: ");
    scanf("%d",&n);
    r = fact(n);
    printf("\n factorial of %d  is %d",n,r);
}