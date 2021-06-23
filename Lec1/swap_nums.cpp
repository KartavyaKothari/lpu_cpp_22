#include<bits/stdc++.h>
// #include<iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 20;

    // Using 3 variable    
    int temp = a;
    a = b;
    b = temp;

    // Using 2 variables
    a = a + b;
    b = a - b;
    a = a - b;

    // Using XOR
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    // swap function
    swap(a,b);


    return 0;
}