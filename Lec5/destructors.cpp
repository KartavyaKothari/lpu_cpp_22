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

void func(){
    cout<<"In func"<<endl;
    A a;
    cout<<"Func ends"<<endl;
}

int main(){
    cout<<"Program starts"<<endl;
    
    func();

    cout<<"Program ends"<<endl;
    return 0;
}