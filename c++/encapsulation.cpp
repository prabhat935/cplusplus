#include <iostream>
using namespace std;

class Base{
    int x;
public:
    int get(Base& obj){return obj.x;}
    void set(Base& obj,int x){obj.x = x;}
};

int main(){
    return 0;
}