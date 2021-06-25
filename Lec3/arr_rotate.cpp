#include<bits/stdc++.h>
using namespace std;

void display(int arr[], int size){
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int r = 5;
    // cin>>r;

    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int size = 15;

    int arr2[size];

    display(arr,size);

    for(int i = 0 ; i < size ; i++){
        arr2[ (i+r)%size ] = arr[i];
    }

    display(arr2,size);

    return 0;
}