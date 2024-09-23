#include <iostream>
using namespace std;



class Base{
    int x;
public:
    Base(){}
    Base(int a):x{a}{ }
    friend int get(Base&);
    friend void set(Base& obj,int);
    friend class GetSet;
};

class GetSet{
public:
    int get(Base& obj){ return obj.x; }
    void set(Base& obj,int x){ obj.x = x; }
};

int get(Base& obj){
    return obj.x;
}

void set(Base& obj,int x){
    obj.x = x;
}

int main(){
    Base obj(10);
    cout << get(obj) << endl;
    set(obj,20);
    cout << get(obj) << endl;

    GetSet gs;
    gs.set(obj,30);
    cout << gs.get(obj) << endl;;
    return 0;
}