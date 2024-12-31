#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//print name n times using recursion

void func1(int i,int n){

    if(i>n){
        return;
    }
    else{
        cout<<"\nTjas";
        func1(i+1,n);
    }
}

int main(){

    int n;
    cout<<"Enter a digit: ";
    cin>>n;

    func1(1,n);
}