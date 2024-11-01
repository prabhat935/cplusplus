#include <iostream>
using namespace std;

class Base{
public:
    int x;
    static int y;

    void printX(){cout << x << endl; }
    static void printY(){cout << y << endl; }
};

int Base::y;

int main(){
    Base b1;
    b1.x = 10;
    Base::y = 30;

    Base b2;
    b2.x = 20;
    Base::y = 40;

    b1.printX();
    Base::printY();

    b2.printX();
    Base::printY();
    return 0;
}