#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};

    for(vector<int>::iterator itr = arr.begin() ; itr != arr.end() ; itr++){
        cout<<*itr<<" ";
    }

    cout<<endl;

    for(vector<int>::reverse_iterator itr = arr.rbegin() ; itr != arr.rend() ; itr++){
        cout<<*itr<<" ";
    }

    return 0;
}