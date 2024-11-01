#include <iostream>
using namespace std;

class Base{
    int x;
public:
    Base(){ cout << "Base Default constructor x = " << x << " "<< endl; }
    Base(int x) : x{x}{ cout << "Base Parameterized constructor x = "<< x << " " << endl; }
};

class Derived:public Base{
    int y;
public:
    Derived(){ cout << "Derived Default constructor y = " << y << " " << endl; }
    Derived(int x , int y):Base(x) , y{y}{ cout << "Derived Parameterized constructor y = " << y << " " << endl; }
};


int main(){
    Derived d;
    Derived(1,2);
    return 0;
}