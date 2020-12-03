#include "Array.h"
#include <stdexcept>
#include "iostream"

// Default Constructor
Array::Array(){
    this->size = 10;
    array = new int[10];
}
// Constructor
Array::Array(int size){
    this->size = size;
    array = new int[size];
}
//Destructor
Array::~Array(){
    delete[] array;
}

//insert value by index
void Array::insert(int index, int val){
    array[index] = val;
}
//add value from behind
void Array::append(int val){
    size++;
    int* newArray = new int[size];
    for (int i =0; i<size-1; i++){
        newArray[i] = array[i];
    }
    newArray[size-1] = val;
    delete[] array;
    array = newArray;
}

//delete item from behind
int Array::pop(){
    size--;
    int* newArray = new int[size];
    for (int i =0; i<size-1; i++){
        newArray[i] = array[i];
    }
    const int deletedItem = array[size];
    delete[] array;
    array = newArray;
    return deletedItem;
}
//check array is empty
bool Array:: isEmpty(){
    if (size == 0) return true;
    return false;
}

//ovveriding [] operator
int &Array::operator[](int index) {
    if (index >= size) throw std::out_of_range ("Out of range"); 
  return array[index]; // returned as a reference
}
