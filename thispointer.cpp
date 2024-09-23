#include <iostream>
using namespace std;


class Base{
    int x;
public:
    Base(){}
    Base(int a):x{a}{ }
    int get(){ return this->x;}
    void set(int a){this->x = a;}
};

int main(){
    Base b1;
    Base b2(10);
    cout << b2.get() << endl;
    return 0;
}