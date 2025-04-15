#include<iostream>
using namespace std;
class Sample{
    int a,b;
    public:
    Sample(int p,int q){
        a=p;
        b=q;
    }
    Sample(Sample &s){
        a=s.a;
        b=s.b;
    }
    void display(){
        cout<<"a: "<<a<<endl;
        cout<<"b: "<<b<<endl;
    }
};
int main(){
    Sample s1(10,20);
    Sample s2(s1);
    s2.display();
    


}

