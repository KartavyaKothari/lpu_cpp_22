#include<bits/stdc++.h>
using namespace std;

int main(){
    // char arr[] = {'k','a','r','t','a','v','y','a','\0'};
    // char arr[] = "kartavya";

    // printf("%s",arr);
    // cout<<arr;

    string name = "Kartavya";
    string l_name = "kothari";
    cout<<name<<endl;;
    cout<<name+" "+l_name<<endl;

    cout<<name[0]<<endl;
    cout<<name[3]<<endl;

    for(int i = 0 ; i < name.size() ; i++){
        cout<<name[i]<<" ";
    }
    cout<<endl;

    name = name+"K";
    name.push_back('K');

    cout<<name<<endl;

    name.pop_back();

    cout<<name<<endl;

    return 0;
}