#include <iostream>
using namespace std;

int main(){
    // int x = 10;
    // while(x>0){
    //     if(x==7)break;
    //     cout<<"x: "<<x<<endl;
    //     x--;
    // }
    int i = 0;
    while (i<3)
    {
        int j=0;
        while (j<2)
        {
            if(j==1)break;
            cout<<j<<endl;
            j++;
        }
        i++;
    }
    
    cout<<"End of Program"<<endl;
    return 0;
}