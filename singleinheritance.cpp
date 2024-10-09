#include <iostream>
using namespace std;

class Vehicle{
public:
    void driveVehicle(){ cout << "Driving" << endl; }
};

class Car : public Vehicle{
public:
    void getTires(){ cout << "Four Tires" << endl; }
};
int main(){
    Car c;
    c.driveVehicle();
    c.getTires();
    return 0;
}