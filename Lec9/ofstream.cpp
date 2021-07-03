#include<bits/stdc++.h>
using namespace  std;

int main(){
    ofstream fp;
    fp.open("data.kar");

    for(int i = 0 ; i < 10 ; i++){
        fp<<"2x"<<i+1<<"="<<2*(i+1)<<endl;
    }

    return 0;
}