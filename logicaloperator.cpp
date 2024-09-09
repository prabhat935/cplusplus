#include <iostream>
using namespace std;

int main(){
    cout << "Enter a number" << endl;
    int num = 0;
    cin>>num;
    
    if(!num){
        cout << "number is 0" << endl;
    }
    else{
        if(num > 95 && num <= 100)
        {
            if(num == 96 || num == 97 || num == 98 || num == 99 || num == 100)
           cout << "excellent" << endl;
        }
    }
    return 0;
}