#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a;

    cout<<ptr<<endl;
    cout<<ptr+1<endl;

    short c = 10;
    short *ptr_c = &c;

    cout<<ptr_c<<endl;
    cout<<ptr_c+1<<endl;

    return 0;
}


// datatype *ptr
// ptr + n === ptr + n*sizeof(datatype)
// ptr - n === ptr - n*sizeof(datatype)