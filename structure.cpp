#include <iostream>
using namespace std;


class A{};
class B:A{};

struct A2{};
struct B2:A2{};

class Base1{
public:
    int x;
};

struct Base2{
    int x;
};

int main(){
    Base1 b1;
    b1.x = 10;

    Base2 b2;
    b2.x = 10;
    return 0;
}