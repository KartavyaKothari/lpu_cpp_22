#include<bits/stdc++.h>
using namespace std;

void func(int a){
    if(a == 0) return;
    
    cout<<a<<" ";
    func(a-1);
    cout<<a<<" ";
}

int main(){
    func(3);

    return 0;
}