#include "linkedlist.h"

Node::Node (int val){
  this->val = val;
  next = nullptr;
}

LinkedList::LinkedList (){
    head = new Node (0);
}

int LinkedList::get (int index){
  if (index >= size)
    return -1;
  Node *temp = head->next;
  for (int i = 0; i < index; i++)
    temp = temp->next;
  return temp->val;
}

void LinkedList::addAtHead (int val){
  Node *temp = head->next;
  head->next = new Node (val);
  head->next->next = temp;
  size++;
}

void LinkedList::addAtTail (int val){
  Node *temp = head;
  while (temp->next != nullptr)
    temp = temp->next;
  temp->next = new Node (val);
  size++;
}

void LinkedList::addAtIndex (int index, int val){
  if (index > size)
    return;
  Node *temp = head;
  for (int i = 0; i < index; i++)
    temp = temp->next;
  Node *temp1 = temp->next;
  temp->next = new Node (val);
  temp->next->next = temp1;
  size++;
}

void LinkedList::deleteAtIndex (int index){
  if (index >= size)
    return;
  Node *temp = head;
  for (int i = 0; i < index; i++)
    temp = temp->next;
  Node *temp1 = temp->next;
  temp->next = temp1->next;
  temp1->next = nullptr;
  size--;
  delete temp1;
}
