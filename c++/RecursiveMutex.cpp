#include <iostream>
#include <thread>
#include<chrono>
#include<mutex>
using namespace std;

int buffer = 0;
std::recursive_mutex m1;

void recursion (char c , int loopFor){

    if(loopFor < 0)return;

    m1.lock();
    cout << c << " " << buffer++ << endl;
    recursion(c , --loopFor);
    m1.unlock();
}

int main(){
    std::thread t1(recursion , '0' , 10);
    std::thread t2(recursion , '1' , 10);

    t2.join();
    t1.join();
    
    return 0;
}