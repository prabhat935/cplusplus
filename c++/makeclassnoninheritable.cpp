#include <iostream>
using namespace std;

class Final{
private:
    Final(){}
    friend class Base;
};

class Base : virtual public Final{
public:
    Base(){}
};

class Derived : public Base{
public:
    Derived(){}
};


int main(){
    Derived d;
    return 0;
}