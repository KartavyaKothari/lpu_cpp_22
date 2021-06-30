#include<bits/stdc++.h>
using namespace std;

class Height{
    public:
    int feet;
    int inches;

    Height(int f, int i){
        feet  = f;
        inches = i;
    }

    void display(){
        cout<<"Height is "<<feet<<" feet and "<<inches<<" inches"<<endl;
    }

    operator int(){
        return (feet*12+inches)*2.57;
    }
};

int main(){
    Height h(5,11);
    h.display();

    cout<<"Height in cms is "<<(int)h<<endl;

    return 0;
}