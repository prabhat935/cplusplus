#include <iostream>
using namespace std;

int main(){
    int x = 10;
    while(x>0){
        x--;
        if(x==5)continue;
        cout<<"x: "<<x<<endl;
    }
    return 0;
}