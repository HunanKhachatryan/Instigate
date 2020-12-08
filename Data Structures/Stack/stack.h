#ifndef STACK_H
#define STACK_H

class Stack {
    private:
        int size;
        int top;
        int* array;
    public:
	    Stack();
        Stack(int size);
        ~Stack();
        void push(int val);
        void empty();
        void pop();
        int getTop();
        bool isEmpty();
};

#endif