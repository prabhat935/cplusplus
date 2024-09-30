#include <iostream>
using namespace std;

class Test{
    int x;
public:
    Test(int a = 0):x{a}{}
    static void* operator new(size_t size){
        cout << "\nLocal overloaded new operator size: " << size << endl;
        void * p = malloc(size);
        return p;
    }
    static void operator delete(void * p){
         cout << "Local overloaded delete operator " << endl;
         free(p);
    }
};

void* operator new(size_t size){
    cout << "\nGlobal overloaded new operator size: " << size << endl;
    void * p = malloc(size);
    return p;
}

void* operator new(size_t size , int val){
    cout << "\nGlobal with value overloaded new operator size: " << size << endl;
    void * p = malloc(size);
    if(p != nullptr){
        *static_cast<int*>(p) = val;
    }
    return p;
}

void operator delete(void * p){
        cout << "Global overloaded delete operator " << endl;
        free(p);
}

void* operator new[](size_t size){
    cout << "Global array overloaded new operator size: " << size << endl;
    void * p = malloc(size);
    return p;
}
void operator delete[](void * p){
        cout << "Global array overloaded delete operator " << endl;
        free(p);
}

int main(){
    Test *t = new Test();
    delete t;
    int *x = new int;
    delete x;
    int *p = new int[10];
    delete[] p;

    int *k = new(55) int;
    cout << *k << endl;
    delete k;
    return 0;
}