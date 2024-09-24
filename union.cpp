#include <iostream>
using namespace std;

union square{
    int width;
    int height;
};

int getArea(int width , int height){
    return width * height;
}

union myUnion
{
    char bytes[4];
    unsigned int value;
};


int main(){
    square sqr;
    sqr.width = 10;
    cout << getArea(sqr.width , sqr.height) << endl;

    myUnion un;
    un.value = 0;

    un.value = 2;

    cout << (int)un.bytes[0] << endl;
    cout << (int)un.bytes[1] << endl;
    cout << (int)un.bytes[2] << endl;
    cout << (int)un.bytes[3] << endl;
    return 0;
}