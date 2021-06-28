#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int age;

    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
};

int main(){
    Person p("Kartavya",23);
    Person* ptr = &p;

    cout<<p.name<<" "<<p.age<<endl;
    cout<<(*ptr).name<<" "<<(*ptr).age<<endl;
    cout<<ptr->name<<" "<<ptr->age<<endl;

    return 0;
}