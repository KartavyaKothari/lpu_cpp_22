#include<bits/stdc++.h>
using namespace std;

int main(){
    double a = 10;
    double b = 0;
    
    try{
        if(b == 0){
            throw 'a';
        }
        cout<<a/b<<endl;
    }catch(int e){
        cout<<e<<" thrown"<<endl;
    }catch(char e){
        cout<<e<<" thrown"<<endl;
    }

    return 0;
}