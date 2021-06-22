#include<bits/stdc++.h>
// #include<iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int main(){
    int a,b;
    cout<<"Enter two nums: ";
    cin>>a>>b;

    cout<<"Addition of "<<a<<" and "<<b<<" = "<<add(a,b)<<endl;
    cout<<"Subtraction of "<<a<<" and "<<b<<" = "<<sub(a,b)<<endl;

    // for(int i = 0 ; i < 10 ; i++){
    //     if(i%2==0){
    //         cout<<i<<endl;
    //     }
    // }

    return 0;
}