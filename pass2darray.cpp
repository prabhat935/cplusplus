#include <iostream>
using namespace std;

void fun(int *arr,int r , int c){
    for(int i = 0 ; i < r ; i++ ){
        for(int j = 0 ; j < 2 ; j++ )
        cout << *(arr+i*c+j) << endl;
    }
}
int main(){
    int arr[3][2] = {{1,2},{3,4},{5,6}};
    int size = sizeof(arr)/sizeof(arr[0]);
    fun((int*)arr,3,2);
    return 0;
}