#include <iostream>
#include "Array.h"

int main()
{
    Array arr = Array(3);
    
    arr.insert(0,1);
    arr.insert(1,2);

    arr.print();
    arr.reSize(5);
    arr.print();
    std::cout<<arr.getSize()<<std::endl;
    std::cout<<arr.isEmpty()<<std::endl;
    return 0;
}

