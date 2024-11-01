/*
1.C++ allows to overload member functions on the basis of const and non-const.
2.const parameters allows to overload member functions and normal functions but it should be reference/pointer.
*/
#include <iostream>
using namespace std;

class Test{
    int x;
public:
    Test (int x = 0):x{x}{}
    void print(int& val){cout << val <<endl; }
    void print(const int& val){cout << val <<endl; }

    void type(){cout << "non const" << endl;}
    void type() const {cout << "const" << endl;}
};

int main(){
    Test t;
    const Test t2;
    int k = 10;
    const int p = 20;
    t.print(k);
    t.print(p);

    t.type();
    t2.type();
    return 0;
}

