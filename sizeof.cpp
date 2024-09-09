#include <iostream>
using namespace std;

// class Base{
//     int x;
//     int y;
//     char c;
// };
// int fun(int arr[],int size){
//     std::cout<<sizeof(int)*size<<std::endl;
// }
// int main(){
//     Base o;
//     int arr[] = {1,2,3,4,5};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     fun(arr,size);
//     //std::cout<<sizeof(o)<<std::endl;
//     std::cout<<sizeof(arr)<<std::endl;
//     return 0;
// }

int main()
{
    char *c = new char('a');
    std::cout<<sizeof(c)<<std::endl;
    std::cout<<sizeof(*c)<<std::endl;

    int *p = new int(10);
    std::cout<<sizeof(p)<<std::endl;
    std::cout<<sizeof(*p)<<std::endl;

    double *d = new double(15.3);
    std::cout<<sizeof(d)<<std::endl;
    std::cout<<sizeof(*d)<<std::endl;
    return 0;
}