#include <iostream>
#include <thread>
using namespace std;

//Function pointer
void fun_f (int x){
    while(x --> 0)
        cout << "Function Pointer" << endl;
}

// lambda Function
auto fun_l = [](int x){
    while(x --> 0)
        cout << "lambda" << endl;
};

//Functor
class Base{
    public:
        void operator () (int x){
            while(x --> 0)
                cout << "Prabhat" << x << endl;
        }
        
        void run (int x){
            while(x --> 0)
                cout << "Non static" << x << endl;
        }

        static void run_s (int x){
            while(x --> 0)
                cout << " static" << x << endl;
        }
};

int main(){
    std::thread t_f(fun_f , 5);
    t_f.join();

    std::thread t_l(fun_l , 5);
    t_l.join();

    std::thread t_fr(Base () , 5);
    t_fr.join();

    Base b;
    std::thread t_ns(&Base::run ,&b, 5);
    t_ns.join();

    std::thread t_s(&Base::run_s , 5);
    t_s.join();
    return 0;
}