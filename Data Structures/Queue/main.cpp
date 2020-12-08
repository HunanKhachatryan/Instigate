#include <iostream>
#include "queue.h"

int main()
{
    Queue queue = Queue(5);

    std::cout<<queue.isEmpty()<<std::endl;
    queue.push(1);
    std::cout<<queue.isEmpty()<<std::endl;
    queue.push(2);
    queue.empty();

    queue.push(3);
    queue.push(4);
    queue.push(5);
    queue.pop();
    
    std::cout<<queue.getFront();
    std::cout<<queue.getRear();
    
    return 0;
}
