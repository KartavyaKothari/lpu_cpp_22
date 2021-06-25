#include<bits/stdc++.h>
using namespace std;

int main(){
    // getline
    string ques = "write a c++ Program to Capitalize the first letter of each word of a given string words must be separated by only one space";
    for(int i = 0 ; i < ques.size() ; i++){
        if(ques[i]==' '){
            // ques[i+1] = ques[i+1]-('a'-'A');
            ques[i+1] = toupper(ques[i+1]);
        }
    }

    ques[0] -= 32;

    cout<<ques<<endl;

    return 0;
}