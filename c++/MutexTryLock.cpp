#include <iostream>
#include <thread>
#include<chrono>
#include<mutex>
using namespace std;

int counter = 0;
std::mutex m;

void increaseTheCounterFor100000Times (){
    for(int i=0;i<100000;i++){
        if(m.try_lock()){
            ++counter;
            m.unlock();
        }
    }
}

int main(){
    std::thread t1(increaseTheCounterFor100000Times);
    std::thread t2(increaseTheCounterFor100000Times);

    t2.join();
    t1.join();
    
    cout << "Counter Increased UpTo : " << counter << endl;
    return 0;
}