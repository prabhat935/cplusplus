#include <iostream>
using namespace std;

int main(){
    int x = 10 , y = 20;
    int &r = x;

    cout << x << endl;
    cout << r << endl;

    x = 100;

    cout << x << endl;
    cout << r << endl;
    return 0;
}