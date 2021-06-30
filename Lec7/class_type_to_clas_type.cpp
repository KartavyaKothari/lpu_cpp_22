#include<bits/stdc++.h>
using namespace std;

class Metric{
    public:
    int kms;
    int mts;

    void display(){
        cout<<kms<<" kms and "<<mts<<" mts"<<endl;
    }
};

class Imperial{
    public:
    int miles;
    int feet;

    Imperial(int m, int f){
        miles = m;
        feet = f;
    }

    // m2
    Imperial(Metric m){
        miles = m.kms/1.6;
        feet = m.mts/0.3;
    }

    void display(){
        cout<<miles<<" miles and "<<feet<<" feet"<<endl;
    }

    // m1
    operator Metric(){
        Metric m;
        m.kms = miles*1.6;
        m.mts = feet*0.3;

        return m;
    }
};

int main(){
    Imperial i(5,2630);
    i.display();

    // method 1
    Metric m;
    m = (Metric) i;

    m.display();

    // method 2
    // Imperial i2 = m;
    Imperial i2(m);
    i2.display();

    return 0;
}