#include "queue.h"
#include <iostream>
#define DEFAULTSIZE 100

//Default Constructor
Queue::Queue(){
    this->size = DEFAULTSIZE;
    this->rear = 0;
    this->front = 0;
    queue = new int[DEFAULTSIZE];
}
// Constructor
Queue::Queue(int size){
    this->size = size;
    this->rear = 0;
    this->front = 0;
    queue = new int[size];
}
//Destructor
Queue::~Queue(){
    delete[] queue;
}
//add item to queue
void Queue::push(int val){
    if (front == size-1){
        return;
    }
    queue[front] = val;
    front++;
}

//remove item from queue
void Queue::pop(){
    if (front == rear){
        return ;
    }
    front--;
}

//empty queue
void Queue::empty(){
    front = 0;
}

// check queue is empty
bool Queue::isEmpty(){
    if (front == rear){
        return true;
    }
    return false;
}

//get front value
int Queue::getFront(){
    if (isEmpty())
    return -1;
    return queue[front-1];
}

//get rear value
int Queue::getRear(){
    return queue[rear];
}