#include <iostream>
#include "linkedlist.h"

int main()
{
    
  LinkedList* list = new LinkedList();
  list->addAtHead(1);
  list->addAtTail(3);
  std::cout<< list->get(1);
  list->addAtIndex(1,2);
  std::cout<< list->get(1);
  list->deleteAtIndex(2);
  
  std::cout<< list->get(2);
    
    return 0;
}
