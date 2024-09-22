#include <iostream>
using namespace std;


class Base{
    int x;
    int y;
public:
    Base(int a , int z):x{a},y{z}{ }
    void print(){ cout << x << " " << y << endl; }
};

int main(){
    Base b(100 , 300);
    b.print();
    return 0;
}