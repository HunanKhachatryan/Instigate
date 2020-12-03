#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class Node {
public:
    int val;
    Node* next;
    Node(int val);
};
class LinkedList {
public:
    int size=0;
    Node* head;
    LinkedList();
    int get(int index);
    void addAtHead(int val);
    void addAtTail(int val);
    void addAtIndex(int index, int val);
    void deleteAtIndex(int index);
};

#endif