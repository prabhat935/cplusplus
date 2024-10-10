#include <iostream>
using namespace std;

class Animal{
public:
    virtual void move() = 0;
};

void Animal::move() {

}

class Cow : public Animal{
public:
    void move(){cout << "I walk and run" << endl; }
};

class Snake : public Animal{
public:
    void move(){cout << "I do rectilinear motion" << endl; }
};

int main(){
    Animal *a = new Snake();
    a->move();
    return 0;
}