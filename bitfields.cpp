#include <iostream>
using namespace std;

struct Node1
{
    unsigned int a:6;
    unsigned int b:9;
};

struct Node2
{
    unsigned int a:6;
    unsigned int:0;
    unsigned int b:9;
};

struct Date{
    unsigned int d:5;
    unsigned int m:4;
    unsigned int y;
};

int main(){
    Date d;
    d.d = 8; d.m = 8; d.y = 1989;
    cout << d.d << "/" << d.m << "/" << d.y << endl;
    cout << sizeof(Date) << endl;
    cout << sizeof(Node1) << endl;
    cout << sizeof(Node2) << endl;

    //cout << &d.d << endl; //this will not work because of bit field
    cout << &d.y << endl;
    return 0;
}