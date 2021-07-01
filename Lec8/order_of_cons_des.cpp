#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    A(){
        cout<<"Cons of A called"<<endl;
    }
    ~A(){
        cout<<"Des of A called"<<endl;
    }
};
class B{
    public:
    B(){
        cout<<"Cons of B called"<<endl;
    }
    ~B(){
        cout<<"Des of B called"<<endl;
    }
};
class C: public A, public B{
    public:
    C(){
        cout<<"Cons of C called"<<endl;
    }
    ~C(){
        cout<<"Des of C called"<<endl;
    }
};

int main(){
    C obj;

    return 0;
}