#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
    virtual void show(){
        cout<<"Showing from base"<<endl;
    }

    void print(){
        cout<<"printing from base"<<endl;
    }
};

class Derived: public Base{
    public:
    void show(){
        cout<<"Showing from derived"<<endl;
    }

    void print(){
        cout<<"printing from derived"<<endl;
    }
};

int main(){
    Base *ptr  = new Derived;
    ptr->show();
    ptr->print();


    return 0;
}