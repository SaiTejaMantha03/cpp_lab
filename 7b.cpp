#include <iostream>
using namespace std;
void test(int x)
{
try
{
if(x==1)
throw x;
else
if(x==0)
throw 'x';
else
if(x==-1)
throw 1.0;
cout<<"end of try block"<<endl;
}
catch(char c)
{
cout<<"caught a character"<<endl;
}
catch(int m)
{
cout<<"caught an integer"<<endl;
}
catch(double d)
{
cout<<"caught a double"<<endl;
}
}
int main()
{
test(1);
test(0);
test(-1);

test(2); return 0;
}