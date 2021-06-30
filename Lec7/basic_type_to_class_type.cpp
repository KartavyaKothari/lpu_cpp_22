#include<bits/stdc++.h>
using namespace std;

class Time{
    public:
    int hours;
    int mins;

    // method 1
    // Time(int mins_from_mid){
    //     hours = mins_from_mid/60;
    //     mins = mins_from_mid%60;
    // }

    //method 2
    void operator =(int mins_from_mid){
        hours = mins_from_mid/60;
        mins = mins_from_mid%60;
    }

    void display(){
        cout<<"Time is "<<hours<<":"<<mins<<endl;
    }
};

int main(){
    int mins_from_midnight = 330;

    Time t;
    t = mins_from_midnight;
    // Time t(mins_from_midnight);

    t.display();

    return 0;
}