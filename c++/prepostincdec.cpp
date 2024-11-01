#include <iostream>
using namespace std;

int main(){
    int A = 10;
    int B = ++A;
    cout<<"A:"<<A<<endl;
    cout<<"B:"<<B<<endl;
    --A;
    cout<<"A:"<<A<<endl;
    A+=2;
    cout<<"A:"<<A<<endl;
    A-=2;
    ++A;
    cout<<"A:"<<A<<endl;
    --A;
    cout<<"A:"<<A<<endl;

    cout<<endl;
    cout<<endl;
    int C = 10;
    int D = C++;
    cout<<"C:"<<C<<endl;
    cout<<"D:"<<D<<endl;
    --C;
    cout<<"C:"<<C<<endl;
    return 0;
}