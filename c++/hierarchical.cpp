#include <iostream>
using namespace std;

class Human{
public:
    void breathing(){ cout << "I am breathing" << endl; }
};
class Youtuber  :public Human{
public:
    void work(){cout << "Making Videos" << endl; }
};
class Engineer  :public Human{
public:
    void work(){cout << "Doing Coding" << endl; }
};
class Doctor    :public Human{
public:
    void work(){cout << "Seeing Patients" << endl; }
};

int main(){
    Youtuber y;
    y.breathing();
    y.work();
    Engineer e;
    e.breathing();
    e.work();
    Doctor d;
    d.breathing();
    d.work();
    return 0;
}