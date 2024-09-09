#include <iostream>
using namespace std;

void update(int& x){
    x=x+10;
    cout << "x: " << x << endl;
}
int main(){
    int val = 10;
    cout<<"val before change: "<<val<<endl;
    update(val);
    cout<<"val after change: "<<val<<endl;
    return 0;
}