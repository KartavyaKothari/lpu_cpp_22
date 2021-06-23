// create a function power(a,b) which calculates [a raised to b]
#include<bits/stdc++.h>
using namespace std;

// int power(int a, int b, unordered_map<int,int> &dp){
//     if(b == 0) return 1;
//     if(dp.find(b) != dp.end())
//         return dp[b] = power(a,b/2) * power(a,b-b/2);
//     return dp[b];
// }

int power(int a, int b){
    if(b == 0) return 1;
    return power(a,b/2) * power(a,b-b/2);
}

// int power(int a, int b){
//     if(b==0) return 1;
//     return power(a,b-1)*a;
// }

// int power(int a, int b){
//     int prod = 1;

//     for(int i = 1 ; i <= b ; i++){
//         // prod = prod*a;
//         prod *= a;
//     }

//     return prod;
// }

int main(){
    int a,b;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;

    cout<<"a raised to b = "<<power(a,b)<<endl;

    // unordered_map<int,int> dp;
    // cout<<"a raised to b = "<<power(a,b,dp)<<endl;

    return 0;
}