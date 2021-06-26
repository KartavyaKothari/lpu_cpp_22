#include<bits/stdc++.h>
using namespace std;

class Student{
    private:
    string adhaar;

    public:
    string name;
    int age;

    void introduce(){
        cout<<"Name: "<<name<<", Age: "<<age<<endl;
    }
};

int main(){
    Student s;
    s.name = "Kartavya";
    s.age = 23;

    s.introduce();
    // s.adhaar = "123456789";

    return 0;
}