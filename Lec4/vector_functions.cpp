#include<bits/stdc++.h>
using namespace std;

void display(vector<int> arr){
    // for(int i = 0 ; i < arr.size() ; i++){
    //     cout<<arr[i]<<" ";
    // }

    for(int ele: arr){
        cout<<ele<<" ";
    }

    cout<<endl;
}

class Student{
    public:
    string name;
};

int main(){
    vector<int> arr(2,1000);
    display(arr);

    arr.push_back(123);
    arr.push_back(64);
    arr.push_back(100);

    display(arr);

    arr.pop_back();
    display(arr);

    arr.pop_back();
    display(arr);

    vector<Student> arr_s(4);
    

    return 0;
}