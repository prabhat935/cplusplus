#include <iostream>
using namespace std;

class Student{
public:
    void studying(){ cout << "I am studying" << endl; }
};
class Male{};
class Female{};
class Boy:public Student , public Male{};
class Girl:public Student , public Female{};

int main(){
    Boy b;
    b.studying();

    Girl g;
    g.studying();
    return 0;
}