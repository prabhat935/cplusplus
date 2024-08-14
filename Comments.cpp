#include <iostream>
using namespace std;

int main(){
    //This program is for calculating area of circle
    double area , radius;
    /*
    area of circle = pi*r^2;
    */
   cout<< "Enter Radius";
    cin >> radius;
    area = 3.14 * radius * radius;
    cout << area;
    return 0;
}