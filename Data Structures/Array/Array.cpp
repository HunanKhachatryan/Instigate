#include "Array.h"
#include <stdexcept>
#include <iostream>

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
    if (index >= size) throw std::out_of_range ("Out of range"); 
    array[index] = val;
}
//resize array
void Array::reSize(int newSize) {
    int* newArray = new int[newSize];
    for (int i = 0, j = size; i<size , j < newSize; i++, j++){
        newArray[i] = array[i];
        newArray[j] = 0;
    }
    delete[] array;
    array = newArray;
    size = newSize;
}
// print array 
void Array::print() {
    for (int i = 0; i<size; i++){
        std::cout << array[i] << std::endl;
    }
}
// get size of array 
int Array::getSize(){
    return size;
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
