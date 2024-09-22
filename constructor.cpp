#include <iostream>
using namespace std;

class Point{
    double x;
    double y;
public:
    Point(){x=0;y=0; cout << "Default Constructor" << endl;}
    Point(double X , double Y){x=X;y=Y; cout << "Parameterized Constructor" << endl;}
    Point(const Point& rhs){x=rhs.x;y=rhs.y; cout << "Copy Constructor" << endl;}

    double getX(){return x;}
    double getY(){return y;}
};

int main(){
    Point p1;
    Point p2(1.3 , 2.6);
    Point p3 = p2;

    cout << "p3x " << p3.getX() << endl;
    cout << "p3y " << p3.getY() << endl;
    return 0;
}