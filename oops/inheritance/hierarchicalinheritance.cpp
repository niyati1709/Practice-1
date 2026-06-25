#include<iostream>
using namespace std;

class A {

    public:
    void f1(){
        cout << "Inside f1" << endl;
    }

};

class B : public A {
    
    public:
    void f2(){
        cout << "Inside f2" << endl;
    }

};

class C : public A {

    public:
    void f3(){
        cout << "Inside f3" << endl;
    }

};

int main(){

    A a;
    a.f1();

    B b;
    b.f1();
    b.f2();

    C c;
    c.f1();
    c.f3();

    return 0;
}