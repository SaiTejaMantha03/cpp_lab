//Write a program that demonstrates default arguments
#include<iostream>
using namespace std;
void values(int a=10,int b=20){
    cout<<"a: "<<a<<" ";
    cout<<"b: "<<b<<endl;
}
int main(){
    values();
    values(30);
    values(30,40);
    return 0;
}