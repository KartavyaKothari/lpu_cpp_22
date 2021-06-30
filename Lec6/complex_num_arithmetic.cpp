#include<bits/stdc++.h>
using namespace std;

class Complex{
    int real;
    int imag;
    public:
    Complex(int r, int i){
        real = r;
        imag = i;
    }

    void display(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }

    Complex operator +(Complex c){
        int r = real+c.real;
        int i = imag+c.imag;
        Complex res(r,i);
        return res;
        // return Complex(r,i);
    }

    void operator ++(){
        real++;
        imag++;
    }

    // void operator ++(int){
    //     real++;
    //     imag++;
    // }
};

int main(){
    Complex c1(3,6);
    Complex c2(5,-4);

    Complex c3 = c1+c2;
    c1 = c1+c2;
    // c1.+(c2);

    c1.display();

    ++c1;
    // c1++;
    // c1.++()
    c1.display();

    return 0;
}