#include<bits/stdc++.h>
using namespace std;

class A{
    int a;
    protected:
    int b;
    public:
    int c;
};

class B: private A{
    // private:
    // int b;
    // private:
    // int c;

    public:
    B(){
        // cout<<a<<b<<c;
    }
};

class C: public B{
    public:
    C(){
        // cout<<a<<b<<c;
    }
}

int main(){
    // A obj;
    B obj;

    // cout<<obj.a<<obj.b<<obj.c;

    return 0;
}