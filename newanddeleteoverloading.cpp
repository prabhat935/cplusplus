#include <iostream>
using namespace std;

class Test{
    int x;
public:
    Test(int a = 0):x{a}{}
    static void* operator new(size_t size){
        cout << "Overloaded new operator size: " << size << endl;
        void * p = malloc(size);
        return p;
    }
    static void operator delete(void * p){
         cout << "Overloaded delete operator " << endl;
         free(p);
    }
};

int main(){
    Test *t = new Test();
    delete t;
    return 0;
}