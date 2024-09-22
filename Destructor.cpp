#include <iostream>
using namespace std;


class Base{
    int *x;
public:
    Base():x{nullptr}{ cout << "D constructor" << endl; }
    Base(int *a):x{a}{ cout << "P constructor" << endl; }
    ~Base(){
        delete x;
        cout << "Destructor" << endl;
    }
};

int main(){
    Base b(new int(10));
    return 0;
}