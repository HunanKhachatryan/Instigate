/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include "stack.h"
using namespace std;

int main()
{
    
    cout<<"Hello World"<<endl;
    Stack stack = Stack(5);
    
    cout<<stack.isEmpty()<<endl;
    stack.push(1);
    cout<<stack.isEmpty()<<endl;
    stack.push(2);
    stack.empty();
    
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(6);
    stack.pop();
    cout<<stack.getTop();
    
    return 0;
}
