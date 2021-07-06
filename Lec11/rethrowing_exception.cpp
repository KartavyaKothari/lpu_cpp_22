#include<bits/stdc++.h>
using namespace std;

int main(){
    try{
        try{
            throw 21;
        }catch(int e){
            cout<<"Handling exception"<<endl;
            cout<<"Couldn't handle it completely, rethrowing"<<endl;
            throw;
        }
    }catch(int a){
        cout<<"Handling it outside"<<endl;
    }

    
    cout<<"END OF PRG"<<endl;

    return 0;
}