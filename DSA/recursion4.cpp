#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//print from 1 to n using backtracking here we were not allowed to use func1(i+1,n) as we used in before examples for printing from 1 to n

void func1(int i, int n){

    if(i<1){
        return;  }

        else{
            func1(i-1,n);// here we first call the recursive function 
            cout<<" "<<i;
            
        }


}

int main(){

    int n;
    cout<<"Enter a digit: ";
    cin>>n;

    func1(n,n);
}