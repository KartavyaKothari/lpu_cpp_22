#include<bits/stdc++.h>
using namespace std;

int main(){
    ifstream fp;
    fp.open("happy.ajit");

    int n;
    string name;
    int age;
    
    fp>>n;

    for(int i = 0 ; i < n ; i++){
        fp>>name>>age;
        cout<<name<<" is "<<age<<" years old"<<endl;
    }

    return 0;
}