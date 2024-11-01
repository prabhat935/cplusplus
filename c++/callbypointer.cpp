#include <iostream>
using namespace std;

void change(int* newx){
    *newx = 20;
}
int main(){
    int x = 10;
    change(&x);
    cout<<"x: "<<x<<endl;
    return 0;
}