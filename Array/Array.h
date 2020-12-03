#ifndef ARRAY_H
#define ARRAY_H

class Array {
    private:
        int size;
        int* array;
    public:
	Array();
        Array(int size);
        ~Array();
        void insert(int index, int val);
        void append(int val);
        int pop();
        int &operator[](int index);
        bool isEmpty();
};

#endif
