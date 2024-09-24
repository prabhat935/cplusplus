#include <iostream>
using namespace std;

class Point{
    int arr[2];
public:
    Point (int a=0 ,int b=0){arr[0] = a; arr[1] = b;}
    int& operator[] (int pos){
        if(pos>=0 && pos < 2)
            return arr[pos];
        else{
            cout << "Out of bound" << endl;
            exit(0);
        }
    }
    void print(){cout << "a" <<arr[0] << " " << "b" << arr[1]<< endl;}
};

int main(){
    Point p1(5,6);
    p1.print();
    p1[0] = 7;
    p1[1] = 8;
    p1.print();
    p1[2] = 9;
    p1.print();
    return 0;
}