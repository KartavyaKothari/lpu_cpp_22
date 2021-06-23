#include<bits/stdc++.h>
using namespace std;

void incre_by_val(int a){
    a++;
}

void incre_by_add(int *a){
    (*a)++;
}

void incre_by_ref(int &a){
    a++;
}

int main(){
    int i = 10;

    incre_by_val(i);
    cout<<i<<endl;

    incre_by_add(&i);
    cout<<i<<endl;

    incre_by_ref(i);
    cout<<i<<endl;

    return 0;
}