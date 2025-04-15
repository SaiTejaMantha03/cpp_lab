#include <iostream>
#include <stack>
using namespace std;
// function prototype for display_stack utility
void display_stack(stack<int> st);
int main() {
 // create a stack of strings
 stack<int> num;
 for(int i=10;i<=15;i++)
 {
 num.push(i);
 }
 // push elements into the stack
 cout << "Initial Stack: ";
 // print elements of stack
 display_stack(num);
 // removes "Blue" as it was inserted last
 num.pop();
 cout << "Final Stack: ";
 // print elements of stack
 display_stack(num);
 return 0;
}
// utility function to display stack elements
void display_stack(stack<int> st) 
{
    while(!st.empty()) {
    cout << st.top() << ", ";
    st.pop();
    }
    cout << endl;
   }
   