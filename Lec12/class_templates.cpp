#include<bits/stdc++.h>
using namespace std;

template <class TYPE1, class TYPE2>
class Calculator{
    TYPE1 x;
    TYPE2 y;
    public:
    Calculator(TYPE1 a, TYPE2 b){
        x = a;
        y = b;
    }

    TYPE1 add(){
        return x+y;
    }

    TYPE1 sub(){
        return x-y;
    }
};

int main(){
    Calculator<int,int> c(20,10);

    cout<<c.add()<<endl;
    cout<<c.sub()<<endl;

    Calculator<double,int> d(2.12,10);

    cout<<d.add()<<endl;
    cout<<d.sub()<<endl;


    return 0;
}