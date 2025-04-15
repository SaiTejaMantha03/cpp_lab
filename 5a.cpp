#include<iostream>
using namespace std;
class abc;
class xyz{
    int x;
    public:
    void get_xyz(int y){
        x=y;
        cout<<"x="<<x<<endl;
    }
    friend void max(abc,xyz);
};
class abc{
    int a;
    public:
    void get_abc(int b){
        a=b;
        cout<<"a="<<a<<endl;
    }
    friend void max(abc,xyz);
};
void max(abc a1,xyz x1){
    if(a1.a>x1.x){
        cout<<"a1 is greater"<<endl;
    }
    else{
        cout<<"x1 is greater"<<endl;
    }
}
int main(){
    abc a;
    xyz x;
    a.get_abc(10);
    x.get_xyz(20);
    max(a,x);
}