//--------------------------------Theoy------------------------------------
//Cin == Console Input
//Cout == Console Output

//Cin and cout both are objects of istream and ostream class respectively,these two classes resides
// inside istream and ostream header files and these two header files are included(merged) in iostream

//Cin is used with stream extraction operator(>>)
//Cout is used with stream insertion operator(<<)

#include <iostream>
using namespace std;

int main(){
    int num;
    string name;
    cout << "Please enter your name" << endl;
    cin >> name;
    cout << "Hi "<< name << " Please enter a number "<< endl;
    cin >> num;
    cout << num + 100 <<endl;
    cout << num / 100 <<endl;
    return 0;
}