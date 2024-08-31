#include <iostream>
using namespace std;

int main(){
    int a = 10 , b = 20 , c = 30;
    //c = b = a;
    c = b = a++;
    //c = b = ++a;
    cout<< a <<endl;
    cout<< b <<endl;
    cout<< c <<endl;
    return 0;
}