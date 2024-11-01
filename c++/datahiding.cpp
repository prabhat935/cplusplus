#include <iostream>
using namespace std;

class AbcPlayer{
    int volume;
public:
    AbcPlayer():volume{0}{}
    void setVolume(int x){
        if(x>=0 && x<=100){
            volume = x;
            cout << "Set" << endl;
        }
        else{
            cout << "Can't Set" << endl;
        }
    }
};

int main(){
    AbcPlayer abc;
    abc.setVolume(50);
    abc.setVolume(-30);
    abc.setVolume(1000);
    return 0;
}