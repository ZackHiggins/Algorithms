#include "sortingAlgorithms.h"

void bubbleSort(int array[], int size) {
    bool isSorted(false);
    int unsortedIndex(size - 1);
    while(!isSorted) {
        isSorted = true;
        for (int i = 0; i < unsortedIndex; i++) {
            if (array[i] > array[i+1]) {
                int temporary(array[i]);
                array[i] = array[i+1];
                array[i+1] = temporary;
                isSorted = false;
            }
        }
        unsortedIndex--;
    }
}

void insertionSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int j(i+1); 
        int key(array[j]);
        while (i >= 0 && array[i] > key) {
            array[i+1] = array[i];
            i--;
        }
        array[i+1] = key;
    }
}
                
/*
void selectionSort(Type array[], int size) {

}

void mergeSort(Type array[], int size) {

}

void merge(Type array[], int size) {

}

void quickSort(Type array[], int size) {

}
*/
