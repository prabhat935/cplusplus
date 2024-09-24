#include <iostream>
using namespace std;

class Point{
    int x , y;
public:
    Point (int a=0 ,int b=0):x{a},y{b}{}
    Point operator+ (const Point& rhs){
        Point p;
        p.x = x + rhs.x;
        p.y = y + rhs.y;
        return p;
    }
    Point add (const Point& rhs){
        Point p;
        p.x = x + rhs.x;
        p.y = y + rhs.y;
        return p;
    }
    Point operator- (const Point& rhs){
        Point p;
        p.x = x - rhs.x;
        p.y = y - rhs.y;
        return p;
    }
    void print(){cout << x << " " << y << endl;}

};

int main(){
    Point p1(1,1) , p2(2,2);
    Point p3 = p1 + p2;
    p3.print();
    Point p4 = p2 - p1;
    p4.print();
    Point p5 = p1.add(p2);
    p5.print();
    return 0;
}