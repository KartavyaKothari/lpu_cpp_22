#include<bits/stdc++.h>
using namespace std;

// Func overloading
// 1. Same func name
// 2. Either num of params is differnt
        // or data type of params is differet
        // or both

int max(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

int max(int a, int b, int c){
    if(a>b){
        if(a>c) return a;
        return c;
    }else{
        if(b>c) return b;
        return c;
    }
}

int max(int a, int b, int c, int d){
    return max( max(a,b) , max(c,d));
}

int main(){
    cout<<max(10,20)<<endl;
    cout<<max(10,20,30)<<endl;
    cout<<max(10,20,30,40)<<endl;

    return 0;
}