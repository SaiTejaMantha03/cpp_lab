#include<iostream>
using namespace std;
class abc{
    public:
      inline int square(int x){
          return x*x;
      }
};
int main(){
    abc a;
    cout<<a.square(5)<<endl;
    return 0;

}