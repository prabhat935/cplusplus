#include <iostream>
#include <thread>
#include<chrono>
#include<mutex>
#include<condition_variable>
using namespace std;

std::condition_variable cv;
std::mutex m;
long balance = 0;

void addMoney(int money){
    std::lock_guard<mutex> lg(m);
    balance += money;
    cout << "Amount Added to current balance: " << balance << endl;
    cv.notify_one();
}

void withdrawMoney(int money){
    std::unique_lock<mutex> ul(m);
    cv.wait(ul , [] {return (balance != 0) ? true : false; });
    if(balance >= money){
        balance -= money;
        cout << "Amount Deducted" << money << endl;
    }
    else{
        cout << "Amount Can't Be Deducted, Current Balance is Less Than " << money << endl;
    }
    cout << "Current Balance  " << balance << endl;
}

int main(){
    std::thread t1(withdrawMoney ,  500);
    std::thread t2(addMoney , 500);

    t1.join();
    t2.join();

    return 0;
}