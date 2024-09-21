#include <iostream>
using namespace std;

class Phone{
    string p_name;
    string p_size;
public:
    Phone(string name , string size){ p_name = name; p_size  = size;}

    void makeCall(){cout << "Make Call Using " << p_name <<p_size<< endl;}
    void receiveCall(){cout << "Receive Call Using " << p_name <<p_size<< endl;}
};

int main(){
    Phone iPhone("Iphnone","7");
    iPhone.makeCall();
    iPhone.receiveCall();
    return 0;
}