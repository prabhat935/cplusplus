#include <iostream>
using namespace std;


class Base{
    int &x;
public:
    Base(int& a):x{a}{ }
    Base operator= (const Base& obj){x=obj.x; return *this;}
    void print(){ cout << x << endl; }
};

int main(){
    int val = 10;
    Base b(val);
    b.print();
    val = 20;
    b.print();

    int val1 = 30;
    Base b2(val1);
    b2 = b;

    cout << val1 << endl;


    /////////////////
    int *val3 = new int(40);
    Base b3(*val3);
    cout << endl;
    b3.print();
    delete val3;
    b3.print();
    return 0;
}