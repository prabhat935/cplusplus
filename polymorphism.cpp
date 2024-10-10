#include <iostream>
using namespace std;

class Base{
public:
    virtual void fun(int x){ cout << "Base" << endl; }
};

class Derived:public Base{
public:
    void fun(int x) override { cout << "derived" << endl; }
};


int main(){
    Derived d;
    Base &b = d;
    b.fun(10);
    return 0;
}