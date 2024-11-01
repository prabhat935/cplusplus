#include <iostream>
using namespace std;

int main(){
    int a = 10 , b = 12;
    if(a == b)
        cout << "Equal" <<endl;
    else if(a != b)
        cout << "Not Equal" <<endl;
    else if(a >= b)
        cout << "A is greater than or equal to B" <<endl;
    else if(a <= b)
        cout << "A is less than or equal to B" <<endl;
    return 0;
}