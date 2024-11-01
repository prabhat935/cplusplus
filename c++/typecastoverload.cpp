#include <iostream>
using namespace std;

double dollarToRupeeExchangeRate(){
    double rate;
    cout << "Enter todays rate" << endl;
    cin >> rate;
    return rate;
}

class Rupee{
    double rupee;
public:
    Rupee(double r = 0):rupee{r}{}
    void print(){cout << "Rupee: " << rupee << endl;}
};

class Dollar{
    double dollar;
public:
    Dollar(double d = 0):dollar{d}{}
    void print(){cout << "Dollar: " << dollar << endl;}
    operator Rupee (){
        return Rupee(dollar*dollarToRupeeExchangeRate());
    }
};



int main(){
    Dollar d(10);
    Rupee r;
    r = d;
    d.print();
    r.print();
    return 0;
}