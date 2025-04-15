#include<iostream>
using namespace std;
class Emp{
    public:
    Emp(){
        cout<<"constructor1 created"<<endl;
    }
    ~Emp(){
        cout<<"destructor1 "<<endl;
    }
};
class Sam{
    public:
    Sam(){
        cout<<"constructor2 created"<<endl;
    }
    ~Sam(){
        cout<<"destructor2 "<<endl;
    }
};
int main(){
    Emp e1;
    Emp e2;
    Sam s1;
    Sam s2;
    return 0;

}