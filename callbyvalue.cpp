#include <iostream>
using namespace std;

void update(int x=18,int y=19,int z = 20){
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl;
}
int main(){
    int val = 10;
    update();
    cout<<"val: "<<val<<endl;
    return 0;
}