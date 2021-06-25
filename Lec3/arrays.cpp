#include<bits/stdc++.h>
using namespace std;

void display(int arr[], int size){
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    // int arr[10];
    int arr[] = {6,5,4,3,2,1,7,8,9};
    // cout<<arr[4]<<endl;

    // arr[4] = 20;

    // cout<<arr[4]<<endl;

    display(arr,9);

    return 0;
}