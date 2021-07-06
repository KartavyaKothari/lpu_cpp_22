#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    int arr[10000000];
};

int main(){
    int a;
    cin>>a;
    try{
        A *arr = new A[a];
    }catch(bad_alloc e){
        cout<<"Exception caused: "<<e.what()<<endl;
    }

    cout<<"The program ends success"<<endl;


    // A *arr = new(nothrow) A[a];
    // this will return nullptr if not allocation error

    return 0;
}