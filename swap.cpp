/*Write a program which uses function to swap two integers and two float numbers by using
reference variable*/
#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void swap(float &a,float &b){
    float temp=a;
    a=b;
    b=temp;
}
int main(){
    int i1,i2;
    float f1,f2;
    cout<<"Enter two integers: ";
    cin>>i1>>i2;
    swap(i1,i2);
    cout<<"After swapping: "<<i1<<" "<<i2<<endl;
    cout<<"Enter two float numbers: ";
    cin>>f1>>f2;
    swap(f1,f2);
    cout<<"After swapping: "<<f1<<" "<<f2<<endl;
    return 0;
}