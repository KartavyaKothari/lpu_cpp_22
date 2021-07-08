#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> lst;
    lst.push_back(10);
    lst.push_back(20);
    lst.push_front(30);

    lst.sort();

    for(auto itr = lst.begin(); itr != lst.end() ; itr++){
        cout<<*itr<<" ";
    }

    cout<<endl;

    cout<<lst.size()<<" elemts are currently there"<<endl;
    lst.push_front(120);
    lst.pop_back();
    lst.pop_front();
    lst.pop_back();

    for(auto itr = lst.begin(); itr != lst.end() ; itr++){
        cout<<*itr<<" ";
    }

    return 0;
}