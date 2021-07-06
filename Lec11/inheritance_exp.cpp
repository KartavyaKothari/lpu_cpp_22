#include<bits/stdc++.h>
using namespace std;

class A{

};

class B: public A{

};

int main(){
    A a;
    B b;
    try{
        throw a;
    }catch(B e){
        cout<<"Caught child class";
    }catch(A e){
        cout<<"Caught parent class";
    }

    return 0;
}