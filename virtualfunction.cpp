#include <iostream>
using namespace std;

class Animal{
public:
    void talk(){cout << "talking something" << endl;}
    virtual void eat() = 0;
};

class Cat : public Animal{
public:
    void eat(){ cout << "Eating Mouse" << endl; }
    void talk(){cout << "Miaooo" << endl;}
};

class Cow : public Animal{
public:
    void eat(){cout << "Eating Grass" << endl; }
    void talk(){cout << "wheeeeeeeen" << endl;}
};

int main(){
    Animal *a = new Cow();
    a->eat();
    a->talk();
    return 0;
}