#include<iostream>
using namespace std;
class MyClass
{
int x;
public:
void set(int i)
{
x=i;
}
int get()
{
return x;
}
};
int main()
{
MyClass obs[4];
int i;
for(i=0;i<4; i++)
obs[i].set(i);
for(i=0;i< 4;i++)
cout <<"obs[" << i << "]: " << obs[i].get() << "\n";
return 0;
}