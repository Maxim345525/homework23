#include<iostream>
using namespace std;
void add_to_array(int*& array, int& size, int* elements, int numElements) {
    int newSize = size + numElements;
    int* newArray = new int[newSize];
    for (int i = 0; i < size; i++) {
        newArray[i] = array[i];
    }
    for (int i = 0; i < numElements; i++) {
        newArray[size + i] = elements[i];
    }
    delete[] array;
    array = newArray;
    size = newSize;
}