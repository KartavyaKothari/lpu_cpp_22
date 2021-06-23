// Evaluate binary expressions like 10+20, 4.6*12
#include<bits/stdc++.h>
using namespace std;

double add(double a, double b){
    return a+b;
}

double sub(double a, double b){
    return a-b;
}

double mul(double a, double b){
    return a*b;
}

double div(double a, double b){
    return a/b;
}

int main(){
    double a, b;
    char op;
    cin>>a>>op>>b;

    switch(op){
        case '+':
            cout<<"a+b = "<<add(a,b)<<endl;
            break;
        case '-':
            cout<<"a-b = "<<sub(a,b)<<endl;
            break;
        case '*':
            cout<<"a*b = "<<mul(a,b)<<endl;
            break;
        case '/':
            cout<<"a/b = "<<div(a,b)<<endl;
            break;
    }

    return 0;
}