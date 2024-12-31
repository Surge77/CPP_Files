#include<stdio.h>

int prime(int a)
{
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            return(1);
        }
        else{
            return(0);
        }
    }
}
int main(){
    int n,t;
    printf("Enter a number: ");
    scanf("%d",&n);
    t=prime(n);
    if(t==0){
        printf("Not a prime number\n");
    }
        else 
        printf("it is a prime number\n");
    
}