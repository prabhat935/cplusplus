#include <iostream>
#include <thread>
#include<chrono>
#include<mutex>
using namespace std;

std::mutex m1 , m2;

void thread1 (){
    m1.lock();
    std::this_thread::sleep_for(std::chrono::seconds(1));
    m2.lock();
    cout << "Critical Section of Thread1" << endl;
    m1.unlock();
    m2.unlock();
}

void thread2 (){
    m2.lock();
    std::this_thread::sleep_for(std::chrono::seconds(1));
    m1.lock();
    cout << "Critical Section of Thread2" << endl;
    m2.unlock();
    m1.unlock();

}

int main(){
    std::thread t1(thread1);
    std::thread t2(thread2);

    t2.join();
    t1.join();
    
    return 0;
}