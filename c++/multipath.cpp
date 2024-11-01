#include <iostream>
using namespace std;

class Human{
public:
    void breathing(){ cout << "I am breathing" << endl; }
};

class Youtuber:public virtual Human{};
class Engineer:public virtual Human{};
class Prabhat:public Youtuber , public Engineer{};

int main(){
    Prabhat p;
    p.breathing();
    return 0;
}