#include <iostream>
using namespace std;

template<class T1 , class T2>
auto getMax(T1 x , T2 y){
    return x>y?x:y;
}

int main(){
    cout << getMax(700 , 80) << endl;
    cout << getMax(30.5 , 20) << endl;
    cout << getMax(10 ,30.5) << endl;
    cout << getMax('a' , 'b') << endl;
    return 0;
}