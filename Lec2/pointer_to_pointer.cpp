#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 10;
    int b = 20;

    int* ptr = &a;
    int** ptr2 = &ptr;
    int*** ptr3 = &ptr2;

    cout<<a<<endl;
    cout<<*(&a)<<endl;
    cout<<*ptr<<endl;

    ptr = &b;

    cout<<**ptr2<<endl;
    cout<<***ptr3<<endl;

    return 0;
}