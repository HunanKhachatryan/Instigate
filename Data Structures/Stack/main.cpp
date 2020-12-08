#include <iostream>
#include "stack.h"

int main()
{
    Stack stack = Stack(5);
    
    std::cout<<stack.isEmpty()<<std::endl;
    stack.push(1);
    std::cout<<stack.isEmpty()<<std::endl;
    stack.push(2);
    stack.empty();
    
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(6);
    stack.pop();
    std::cout<<stack.getTop();
    
    return 0;
}
