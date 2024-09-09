#include <iostream>
using namespace std;

int main(){
    int val;
    cin >> val;
    switch (val)
    {
        case 1:
        cout << "This is one" << endl;
            break;
        
        case 2:
        cout << "This is two" << endl;
            break;
        
        case 3:
        cout << "This is three" << endl;
            break;
        
        case 4:
        cout << "This is four" << endl;
            break;
        
        default:
        cout << "Default" << endl;
            break;
    }
    cout << "end of program" << endl;
    return 0;
}