#include <iostream>
using namespace std;

inline void printME(string str){
    cout << str << endl;
}

int main(){
    for(int i = 0 ; i < 100 ; i++) printME("Prabhat");
    return 0;
}