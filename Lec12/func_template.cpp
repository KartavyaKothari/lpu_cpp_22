#include<bits/stdc++.h>
using namespace std;

template <class TYPE1>
TYPE1 func(vector<TYPE1> arr, TYPE1 def = 0){
    TYPE1 sum = def;
    for(TYPE1 ele: arr){
        sum += ele;
    }

    return sum;
}

// double func(vector<double> arr){
//     double sum = 0;
//     for(double ele: arr){
//         sum += ele;
//     }

//     return sum;
// }

int main(){
    vector<int> arr1= {1,2,3,4,5,6,7,8,9};
    vector<double> arr2= {1.12,2.6,3.7,4.12,5.65,6.3,7.87,8.123,9.5};
    vector<string> arr3 = {"isnt"," this", " cool"};

    cout<<func<int>(arr1)<<endl;
    cout<<func<double>(arr2)<<endl;
    string def = "";
    cout<<func<string>(arr3,def)<<endl;

    return 0;
}