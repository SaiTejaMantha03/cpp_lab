//constructor overloading
#include<iostream>
using namespace std;
class abc{
    int a,b;
    public:
    abc(){
       a=5;
        b=10;
    }
    abc(int x,int y){
        a=x;
        b=y;
    }
    void display(){
        cout<<"a="<<a<<" b="<<b<<endl;
    }
};
int main(){
    abc a1;
    a1.display();
    abc a2(10,20);
    a2.display();

    return 0;
}