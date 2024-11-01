#include <iostream>
using namespace std;

class circle{
    const float pi = 3.14;
    const float r;
public:
    circle(float a):r{a}{}
    float getArea(){return pi*r*r;};

};

int main(){
    circle c1(5.2),c2(10);
    cout << c1.getArea() << endl;
    cout << c2.getArea() << endl;
    return 0;
}