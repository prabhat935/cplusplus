#include <iostream>
using namespace std;

class Engineer{
    int x;
public:
    Engineer(int x=0):x{x}{ cout << "Constructed Engineer" << endl; }
    void work(){ cout << "Working as Engineer" << endl; }
};
class Youtuber{
    int y;
public:
    Youtuber(int y=0):y{y}{ cout << "Constructed Youtuber" << endl; }
    void work(){ cout << "Working as Youtuber" << endl; }
};
class Prabhat:public Engineer , public Youtuber{
public:
    Prabhat(int x , int y) : Engineer(x) , Youtuber(y){ cout << "Constructed Prabhat" << endl; }
};

int main(){
    Prabhat p(1,2);
    p.Engineer::work();
    p.Youtuber::work();

    Engineer pe = p;
    pe.work();

    Youtuber py = p;
    py.work();

    static_cast<Engineer>(p).work();
    static_cast<Youtuber>(p).work();
    return 0;
}