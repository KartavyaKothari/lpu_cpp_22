#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> solar_sys = {"Mercury","Venus","Earth","Mars","Jupitor","Saturn","Neptune","Uranus"};
    vector<string>::iterator apollo = solar_sys.begin();
    vector<string>::iterator voyager = solar_sys.begin();

    cout<<"Apollo is at "<<*apollo<<endl;
    cout<<"Apollo, set a course for "<<*(apollo+3)<<endl;
    advance(apollo,3);
    cout<<"Apollo is at "<<*apollo<<endl;
    advance(apollo,-1);
    cout<<"Apollo is at "<<*apollo<<endl;
    cout<<"Apollo is "<<distance(voyager,apollo)<<" planets away"<<endl;
    
    // Next two are equivalent statements
    apollo = next(apollo,2);
    advance(apollo,2);

    return 0;
}