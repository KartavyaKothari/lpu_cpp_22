#include<bits/stdc++.h>
using namespace std;

int sum(int a = 10, int b = 10, int c = 10, int d = 10, int e = 10){
    return a+b+c+d+e;
}

int main(){

    cout<<sum()<<endl;
    cout<<sum(0)<<endl;
    cout<<sum(0,0)<<endl;
    cout<<sum(0,0,0)<<endl;
    cout<<sum(0,0,0,0)<<endl;
    cout<<sum(0,0,0,0,0)<<endl;

    return 0;
}