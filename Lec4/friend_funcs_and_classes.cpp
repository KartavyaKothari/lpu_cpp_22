#include<bits/stdc++.h>
using namespace std;

class Person{
    int acc_balance;
    int age;
    public:
    string name;

    void init(string n, int b, int a){
        name = n;
        age = a;
        acc_balance = b;
    }

    friend class Government;
    friend void hackerman(Person p);
};

class Government{
    public:
    void print_details(Person p){
        cout<<p.name<<" is "<<p.age;
        cout<<" years old and have "<<p.acc_balance;
        cout<<" rupees"<<endl;
    }
};

void hackerman(Person p){
    cout<<p.name<<" is "<<p.age;
    cout<<" years old and have "<<p.acc_balance;
    cout<<" rupees"<<endl;
}

int main(){
    Person p;
    p.init("Kartavya",1000,23);

    Government g;
    g.print_details(p);
    hackerman(p);

    return 0;
}