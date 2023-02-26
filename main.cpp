#include<iostream>
using namespace std;
    int* removeNegativeNumbers(int* array, int size)
    {
        int nonNegCount = 0;
        for (int i = 0; i < size; i++) {
            if (array[i] >= 0) {
                nonNegCount++;
            }
        }
        int* newArray = new int[nonNegCount];
        int j = 0;
        for (int i = 0; i < size; i++) {
            if (array[i] >= 0) {
                newArray[j] = array[i];
                j++;
            }
        }
        delete[] array;
        return newArray;
    }
