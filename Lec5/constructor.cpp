#include<bits/stdc++.h>
using namespace std;

class Person{
    int age;
    public:
    string name;

    Person(){
        cout<<"Default cons called"<<endl;
    }

    Person(string n){
        cout<<"param 2 cons called"<<endl;
        name = n;
    }

    Person(string n, int a){
        cout<<"Param cons called"<<endl;
        name = n;
        age = a;
    }

    void introduce(){
        cout<<"My name is "<<name<<" and I am "<<age<<" years old"<<endl;
    }
};


int main(){
    Person p("Kartavya",23);
    Person p2("Aditya",12);
    // Person p2 = p;
    // p.init("Kartavya",23);
    p2.introduce();

    return 0;
}