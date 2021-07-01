#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    void speak(){
        cout<<"Make sound"<<endl;
    }
};

class Dog: public Animal{
    public:
    void speak(){
        cout<<"Woof woof"<<endl;
    }
};
class Cat: public Dog{
    public:
    // void speak(){
    //     cout<<"Meow meow"<<endl;
    // }
};

int main(){
    Dog d;
    Cat c;

    d.speak();
    d.Animal::speak();
    c.speak();

    return 0;
}