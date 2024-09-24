#include <iostream>
using namespace std;

class Point{
    int x , y;
public:
    Point (int a=0 ,int b=0):x{a},y{b}{}
    Point operator- (){
        return Point(-x,-y);
    }
    void print(){cout << x << " " << y << endl;}
};

int main(){
    Point p1(1,1);
    Point p2 = -p1;
    p2.print();
    return 0;
}