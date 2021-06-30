#include<bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &arr){
    for(int i = 0 ; i < arr.size() ; i++){
        int key = arr[i];
        int j = i-1;

        while(j >= 0 && arr[j] > key ){
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }
}

void display(vector<int> &arr){
    for(int ele: arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> arr = {6,4,5,2,7,8,9,1,3};
    insertion_sort(arr);

    display(arr);
    return 0;
}