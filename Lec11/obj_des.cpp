#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    A(){
        cout<<"Cons of A called"<<endl;
    }
    ~A(){
        cout<<"Dess of A called"<<endl;
    }
};

int main(){
    try{
        A a;
        throw 10;
    }catch(...){
        cout<<"Handling exp"<<endl;
    }

    return 0;
}