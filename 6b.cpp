//Write a program to create an array of objects.
#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;
    double marks;
    Student(string n,int a,double m){
        name=n;
        age=a;
        marks=m;
    }
    void display(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<marks<<endl;
    }
};

int main(){
    Student obj[4];
    
}