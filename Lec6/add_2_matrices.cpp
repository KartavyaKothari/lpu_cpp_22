#include<bits/stdc++.h>
using namespace std;

class Matrix{
    public:
    vector<vector<int>> arr;
    Matrix(int a = 0){
        arr = vector<vector<int>>(10,vector<int>(10,a));
    }

    void display(){
        for(vector<int> v : arr){
            for(int ele: v){
                cout<<ele<<" ";
            }
            cout<<endl;
        }
    }

    Matrix operator +(Matrix m){
        Matrix res;
        for(int i = 0 ; i < arr.size() ; i++){
            for(int j = 0 ; j < arr[0].size() ; j++){
                res.arr[i][j] = arr[i][j]+m.arr[i][j];
            }
        }

        return res;
    }
};

int main(){
    Matrix m1(1),m2(2);
    m1 = m1+m2;

    m1.display();
    return 0;
}