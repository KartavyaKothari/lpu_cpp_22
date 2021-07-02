#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    A(int a){
        cout<<"A cons with val "<<a<<" called"<<endl;
    }
};

class C{
    public:
    C(int a){
        cout<<"C cons with val "<<a<<" called"<<endl;
    }
};

class B : public A, public C{
    public:
    B():C(10),A(12){
        cout<<"Cons of B called"<<endl;
    }
};

int main(){
    B obj;

    return 0;
}