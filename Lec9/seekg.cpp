#include<bits/stdc++.h>
using namespace std;

int main(){
    fstream fp;
    fp.open("data.aditya");
    string str;
    fp.seekg(-9,ios_base::end);
    getline(fp,str);
    cout<<str;

    return 0;
}