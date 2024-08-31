#include <iostream>
using namespace std;

int main(){
    int number[5] = {1,2,3,4,5};
    cout << number[4] <<endl;
    number[4]  = 10;
    cout << number[4] <<endl;
    return 0;
}