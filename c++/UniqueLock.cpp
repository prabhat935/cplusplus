#include <iostream>
#include <thread>
#include<chrono>
#include<mutex>
using namespace std;

std::mutex m1;
int buffer = 0;

void task (const char* threadNumber , int loopFor){
    //m1.lock();
    std::unique_lock<mutex> lock(m1);
    //m1.lock();
    for(int i = 0 ; i < loopFor ; i++){
        buffer++;
        cout << threadNumber << " " << buffer << endl;
    }
    //m1.unlock();
}

int main(){
    std::thread t1(task , "T1", 10);
    std::thread t2(task , "T2", 10);

    t1.join();
    t2.join();

    return 0;
}