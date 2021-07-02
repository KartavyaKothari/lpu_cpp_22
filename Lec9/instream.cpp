#include<bits/stdc++.h>
using namespace std;

int main(){
    ifstream fp;
    fp.open("happy.ajit");

    string name;
    int age;
    
    fp>>name>>age;

    cout<<name<<" is "<<age<<" years old"<<endl;

    return 0;
}