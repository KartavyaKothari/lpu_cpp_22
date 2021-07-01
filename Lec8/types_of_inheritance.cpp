#include<bits/stdc++.h>
using namespace std;

// Single inheritance and single level
class A{};
class B: public A{};

// Multiple inheritance
class A{};
class B{};
class C: public A, public B{};

// Hierarchial
class A{};
class B: public A{};
class C: public A{};

// Multilevel and hybrid
class A{};
class B: public A{};
class C: public A{};
class D: public B, public C{};

int main(){

    return 0;
}