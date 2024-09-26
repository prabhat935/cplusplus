#include <iostream>
using namespace std;

class Base{
    int x;
public:
    Base(int x=0):x{x}{}
    friend class Test;
};

class Test{
    int *x;
public:
    Test(int val = 0):x{new int(val)}{}
    void setX(int val){*x = val;}
    void print(){cout << "Output " << *x << endl;}
    Test& operator= (const Test& rhs){
        if(this != &rhs)
            *x = *rhs.x;
        return *this;
    }

    Test& operator= (const Base& rhs){
            *x = rhs.x;
        return *this;
    }
};

int main(){
    Test t1(10);
    Test t2;
    t2 = t1;
    t1.setX(20);
    t1.print();
    t2.print();

    Base b1(50);
    Test t3;
    t3 = b1;
    t3.print();
    return 0;
}