//4 a) Write a program to use pointers for both base and derived classes and call the member functions. 
#include<iostream>
using namespace std;
class base{
    public:
    void display(){
        cout<<"in base display function"<<endl;
    }
    void show(){
        cout<<"in base show function"<<endl;
    }
    
};
class d:public base{
    public:
    void display(){
        cout<<"in derived display function"<<endl;
    }
    void show(){
        cout<<"in derived show function"<<endl;
    }
};
int main(){
    base b1,*b2;
    d d1,*d2;
    b2=&b1;
    d2=&d1;
    b2->display();
    b2->show();
    d2->display();
    d2->show();
    b2=&d1;
    b2->display();
    b2->show();
    //d2=&b1;   illegal

}