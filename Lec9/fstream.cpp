#include<bits/stdc++.h>
// #include<fstream>
using namespace std;

int main(){
    fstream fp;
    fp.open("data.aditya",ios::out);
    // fp.open("data.aditya",ios::app);

    if(!fp){
        cout<<"Some file opening error"<<endl;
        return 0;
    }

    fp<<"This is some data"<<endl;
    fp.close();

    fp.open("data.aditya");
    string str;
    // fp>>str;
    getline(fp,str);
    cout<<str;

    return 0;
}