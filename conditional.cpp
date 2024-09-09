#include <iostream>
using namespace std;

int main(){
    int a = 1;
    int b = 10 , c = 20;

    int k = (a == 1) ? b : c;
    cout << k << endl;
    int l = (a == 10) ? b : c;
    cout << l << endl;

    (a == 10) ? printf("YES\n") : printf("NO\n");
    (a == 1) ? ( (b == 5) ? printf("YES\n") : printf("NO\n")) : printf("a is not equal to 1\n");
    return 0;
}