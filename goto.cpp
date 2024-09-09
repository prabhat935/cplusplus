#include <iostream>
using namespace std;

int main(){
    std::cout << 1 << std::endl;
    goto a;
    std::cout << 2 << std::endl;
    std::cout << 3 << std::endl;
    a:
    std::cout << 4 << std::endl;
    return 0;
}