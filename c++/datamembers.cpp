#include <iostream>
using namespace std;

class Point{
public:
    int x , y;
    Point(){}
    Point (int a ,int b){x = a; y = b;}

};

int main(){
    Point p1(1,1) , p2(2,2);
    cout << p1.x << " " << p1.y << endl;
    cout << p2.x << " " << p2.y << endl;
    return 0;
}