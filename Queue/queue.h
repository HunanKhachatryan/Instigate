#ifndef QUEUE_H
#define QUEUE_H

class Queue {
    private:
        int size, rear, front;
        int* queue;
    public:
	    Queue();
        Queue(int size);
        ~Queue();
        void push(int val);
        void empty();
        void pop();
        int getRear();
        int getFront();
        bool isEmpty();
};

#endif