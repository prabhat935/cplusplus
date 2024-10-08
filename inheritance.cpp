#include <iostream>
using namespace std;

class Animal{
public:
    void eat(){ cout << "Eating" << endl; }
    void walk(){ cout << "Walking" << endl; }
};

class Dog : public Animal{
public:
    void talk(){ cout << "Baooo" << endl; }
};

class Cat : public Animal{
public:
    void talk(){ cout << "Miaooo" << endl; }
};

class Dinasour : public Animal{
public:
    void talk(){ cout << "Haooo" << endl; }
};

int main(){
    Dog d;
    Cat c;
    Dinasour di;

    d.eat();
    c.eat();
    di.eat();

    d.talk();
    c.talk();
    di.talk();

    return 0;
}