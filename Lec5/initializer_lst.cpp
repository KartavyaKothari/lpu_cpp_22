#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int age;

    Person(string n, int a):
        name(n),
        age(a)
    {}
};

int main(){
    Person p("Kartavya",23);
    cout<<p.name<<" "<<p.age<<endl;

    return 0;
}