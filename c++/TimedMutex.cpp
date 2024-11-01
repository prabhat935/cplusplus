#include <iostream>
#include <thread>
#include<chrono>
#include<mutex>
using namespace std;

int myAmount = 0;
std::timed_mutex m;

void increment (int i){
    if(m.try_lock_for(std::chrono::seconds(2))){
        ++myAmount;
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << "Thread " << i << " entered" << endl;
        m.unlock();
    }
    else{
        std::cout << "Thread" << i << "Couldn't Enter" << endl;
    }
}

int main(){
    std::thread t1(increment , 1);
    std::thread t2(increment , 2);

    t2.join();
    t1.join();
    
    cout << myAmount << endl;
    return 0;
}