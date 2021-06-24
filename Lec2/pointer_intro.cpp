#include<bits/stdc++.h>
using namespace std;

int main(){
    int var = 10;
    int * ptr = &var;

    // cout<<var<<endl;
    // cout<<ptr<<endl;
    // cout<<&var<<endl;
    // cout<<*ptr<<endl;
    // cout<<&ptr<<endl;

    char c = 'a';
    // char *ptr_c = &c;

    void* ptr_v = &var;
    cout<<ptr_v<<" "<<ptr<<endl;
    cout<<*ptr<<endl;
    ptr_v = &c;
    cout<<*(char*)ptr_v<<endl;


    return 0;
}