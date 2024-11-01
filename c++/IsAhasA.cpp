#include <iostream>
using namespace std;

class Tire{};
class Engine{};

class Vehicle{
    Tire t;             //composition
    Engine e;           //composition
};

class Car : public Vehicle{   //inheritance

};
int main(){

    return 0;
}