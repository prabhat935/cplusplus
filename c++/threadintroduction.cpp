#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
using namespace std::chrono;

typedef unsigned long long ull;

ull evenSum = 0;
ull oddSum = 0;

void findEven(ull start , ull end){
    cout << "finEven" << endl;
    for(ull i = 0; i<end; i++){
        if((i&1) == 0){
            evenSum += i;
        }
    }
}

void findOdd(ull start , ull end){
    cout << "findOdd" << endl;
    for(ull i = 0; i<end; i++){
        if((i&1) == 1){
            oddSum += i;
        }
    }
}

int main(){
    ull start = 0 , end = 1900000000;

    auto startTime = high_resolution_clock::now();

    std::thread t1(findEven ,start,end);
    std::thread t2(findOdd ,start,end);

    t1.join();
    t2.join();

    // findEven(start,end);
    // findOdd(start,end);
    auto stopTime = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stopTime - startTime);

    cout << "evenSum" << evenSum << endl;
    cout << "oddSum" << oddSum << endl;
    cout << "duration " << duration.count()/1000000 << endl;


    return 0;
}