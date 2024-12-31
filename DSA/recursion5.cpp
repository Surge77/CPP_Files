#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//printing from n to 1 by backtracking but without using f(i-1,n) as we used for printing n to 1 for recursion

void func1(int i,int n){

    if(n<i){
        return;
    }
    else{

        func1(i+1,n); //i keeps on increasing until default condition is triggered and the backtrack starts
        cout<<" "<<i;
    }
}

int main(){
  

    int n;
    cout<<"Enter a digit: ";
    cin>>n;

    func1(1,n);// here we pass i as 1
}
