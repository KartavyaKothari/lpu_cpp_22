#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {2432,35,645,36,6,356,56,37,5};

    sort(arr.begin(),arr.end(),greater<int>());

    for(int ele: arr){
        cout<<ele<<" ";
    }

    return 0;
}