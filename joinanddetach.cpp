#include <iostream>
#include <thread>
#include<chrono>
using namespace std;

void run (int x){
    while(x --> 0)
        cout << "run" << endl;

    std::this_thread::sleep_for(chrono::seconds(5));
}



int main(){
    std::thread t(run,10);
    cout << "before join" << endl;
    t.detach();
    cout << "after join" << endl;
    return 0;
}