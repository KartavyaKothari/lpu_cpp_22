#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    int a;
};

class B: virtual public A{};
class C: public virtual A{};

class D: public B, public C{};

int main(){
    D obj;

    // obj.a = 10;
    obj.B::a = 10;
    // cout<<obj.a<<endl;
    cout<<obj.B::a<<endl;
    obj.C::a = 20;

    cout<<obj.B::a<<endl;

    return 0;
}