#include<bits/stdc++.h>
using namespace std;

void add_mat(int arr1[3][3], int arr2[3][3]){
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cout<<arr1[i][j]+arr2[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    add_mat(arr,arr);

    return 0;
}