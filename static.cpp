//write a program that demonstrates static function
#include<iostream>
using namespace std;
class Student{
    public:
    static int x;
    static void Test(){
        cout<<"Static function\n";      
    }
    void incr(){
        ++x;
        cout<<x<<endl;
    }
};
int Student::x=10;
int main(){
    Student::Test();
    cout<<Student::x<<endl;;
    Student s;
    s.incr();
    cout<<Student::x;
    return 0;
}