#include "stack.h"

//Default Constructor
Stack::Stack(){
    this->size = 5;
    this->top = -1;
    array = new int[5];
}
// Constructor
Stack::Stack(int size){
    this->size = size;
    this->top = -1;
    array = new int[size];
}
//Destructor
Stack::~Stack(){
    delete[] array;
}
//add item to stack
void Stack::push(int val){
    if (top >= size-1){
        return;
    }
    array[top + 1] = val;
    top++;
}

//remove item from stack
void Stack::pop(){
    if (top == -1){
        return ;
    }
    top--;
}

//empty stack
void Stack::empty(){
    top = -1;
}

// check stack is empty
bool Stack::isEmpty(){
    if (top == -1){
        return true;
    }
    return false;
}

//get top value
int Stack::getTop(){
    return array[top];
}