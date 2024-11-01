#include <iostream>
using namespace std;

// void add (double x , double y){
//     cout << "FIRST" << endl;
// }

// void add (int x , int y){
//     cout << "SECOND" << endl;
// }
void print (int x ){ cout << "FIRST" << endl;}
void print (double d ){ cout << "SECOND" << endl;}
void print (char c ){ cout << "THIRD" << endl;}

int main(){
    // add(1.2,2.3);
    // add(1,2);
    print(1);
    print(1.2);
    print('a');
    return 0;
}


/*
RULES WHERE FUNCTION OVERLOADING WILL NOT WORK
1.Function declarations that differ only in the return type.
2.In class if we have similar function name and parameter but one is static function and another is non-static.
3.when we receive array as pointer and array both are similar
4.const and volatile doesn't make any difference.
5.one function parameter declared as function type and another as pointer to the same function type are equivalent.
6.two function parameters are equal if they differ only if one of them is having default parameter.
*/