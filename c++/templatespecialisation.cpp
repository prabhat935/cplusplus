#include <iostream>
#include <vector>
#include <sstream>
using namespace std;


template<typename T>
T addAll(vector<T> list){
    T count = 0;
    for(auto& elem : list){
        count += elem;
    }
    return count;
}

template<>
string addAll(std::vector<string> list){
    int count = 0;
    for(const string& elem : list){
        for(const char& chr : elem){
            count += chr;
        }
    }
    ostringstream Ostr;
    Ostr << count;
    string strCount = Ostr.str();
    return strCount;
}

int main(){
    vector<int> VecInt = {1,2,3,4,5};
    vector<double> VecDouble = {1.0,2.0,3.0,4.0,5.0};
    vector<string> VecString = {"abc","def"};
    cout << addAll(VecInt) << endl;
    cout << addAll(VecDouble) << endl;
    cout << addAll(VecString) << endl;
    return 0;
}