#include<iostream>
using namespace std;
void insertElements(int*& array, int& size, int* elements, int numElements, int index) {
    if (index < 0 || index > size) {
        return;
    }
    int newSize = size + numElements;
    int* newArray = new int[newSize];
    for (int i = 0; i < index; i++) {
        newArray[i] = array[i];
    }
    for (int i = 0; i < numElements; i++) {
        newArray[index + i] = elements[i];
    }
    for (int i = index; i < size; i++) {
        newArray[numElements + i] = array[i];
    }
    delete[] array;
    array = newArray;
    size = newSize;
}