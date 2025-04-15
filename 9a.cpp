#include <iostream>
using namespace std;

template <class A>
void fun(A a, A b)
{
cout<<a<<endl;
cout<<b;
}
int main()
{
fun(15,34);
}