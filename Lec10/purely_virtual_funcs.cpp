#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    virtual void show() = 0;
};

class B: public A{
    public:
    // void show(){
    //     cout<<"done";
    // }
};

int main(){
    B b;
    A a;

    return 0;
}