#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
    return a<b;
}

void selection_sort(vector<int> &arr){
    for(int i = 0 ; i < arr.size() ; i++){
        for(int j = i+1 ; j < arr.size() ; j++){
            if(!cmp(arr[i],arr[j])){
                swap(arr[i],arr[j]);
            }
        }
    }
}

void bubble_sort(vector<int> &arr){
    bool is_continue = false;
    for(int i = 0 ; i < arr.size() ; i++){
        is_continue = false;
        for(int j = 0 ; j < arr.size() - 1; j++){
            if(!cmp(arr[j],arr[j+1])){
                is_continue = true;
                swap(arr[j],arr[j+1]);
            }
        }
        if(!is_continue)return;
    }
}

void display(vector<int> arr){
    for(int ele: arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> arr = {32, 11, 38, 10, 46, 79, 28, 11, 49, 79};
    display(arr);
    // selection_sort(arr);
    // bubble_sort(arr);
    // sort(arr.begin(),arr.end());
    display(arr);

    return 0;
}