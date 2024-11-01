#include <iostream>
using namespace std;


class Base{
    mutable int x;
    int y;
public:
    Base(){}
    Base(int a , int b):x{a},y{b}{ }
    int getX() const { x = 20; y = 30; return x;}
    void setX(int a){ x = a; }
};

int main(){
    Base b;
    b.setX(10);
    cout << b.getX() << endl;
    return 0;
}