/*3. a) Write a program that illustrates the following forms of inheritances
 Single Multiple Multilevel Hierarchical */
 /*#include<iostream>
 using namespace std;
 class Animal{
    public:
    void eat(){
        cout<<"Eating..."<<endl;
    }
    public:
    void sleep(){
        cout<<"Sleeping..."<<endl;
    }
 };
 class Dog:public Animal{
    public:
    void bark(){
        cout<<"Barking..."<<endl;
    }
 };
 int main(){
    Dog obj;
    obj.bark();
    obj.sleep();
    obj.eat();
 }*/

/*#include<iostream>
using namespace std;
class A{
    public:
    int x;
    void getx(){
        cout<<"Enter x: ";
        cin>>x;
    }
};
class B{
    public:
    int y;
    void gety(){
        cout<<"Enter y: ";
        cin>>y;
    }
};
class C:public A,public B{
    public:
    void sum(){
        cout<<"Sum: "<<x+y<<endl;
    }
};
int main(){
    C obj;
    obj.getx();
    obj.gety();
    obj.sum();
    return 0;
}*/

/*#include<iostream>
using namespace std;
class base{
    public:
    int x;
    void getdata(){
        cout<<"Enter x: ";
        cin>>x;
    }   
};
class derived1:public base{
    public:
   int y;
   void readdata(){
         cout<<"Enter y: ";
         cin>>y;
   }
};
class derive2:public derived1{
    private:
    int z;
    public:
    void indata(){
        cout<<"Enter z: ";
        cin>>z;
    }
    void product(){
        cout<<"Product: "<<x*y*z<<endl;
    }
};
int main(){
    derive2 obj;
    obj.getdata();
    obj.readdata();
    obj.indata();
    obj.product();
    return 0;
}*/

#include<iostream>
using namespace std;
class A{
    public:
    int x,y;
    void getdata(){
        cout<<"Enter x: ";
        cin>>x;
        cout<<"Enter y: ";
        cin>>y;
    }
};
class B:public A{
    public:
    void product(){
        cout<<"Product: "<<x*y<<endl;
    }
};  
class C:public A{
    public:
    void sum(){
        cout<<"Sum: "<<x+y<<endl;
    }
};
int main(){
    B obj1;
    C obj2;
    obj1.getdata();
    obj1.product();
    obj2.getdata();
    obj2.sum();
    return 0;
}
