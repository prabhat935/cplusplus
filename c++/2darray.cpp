#include <iostream>
using namespace std;

int main(){
    char matrix0 [3][2] = {{'A','B'},{'C','D'},{'E','F'}};
    char matrix1 [][2] = {{'A','B'},{'C','D'},{'E','F'}};
    char matrix2 [3][2] = {'A','B','C','D','E','F'};
    cout << matrix0[1][0]<<endl;
    return 0;
}