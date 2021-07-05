#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    Student(){
        cout<<"cons"<<endl;
    }
    ~Student(){
        cout<<"des"<<endl;
    }
};

void func(){
    cout<<"In func"<<endl;
    Student *s = new Student;
    delete s;
    cout<<"Out of func"<<endl;
}

int main(){
    func();    
    cout<<"In main after func"<<endl;

    Student *arr = new Student[3];
    delete[] arr;

    return 0;
}