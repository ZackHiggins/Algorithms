#include "sortingAlgorithms.h"
#include <iostream>

int main() {
    
    int a1[5], a2[5];

    for (int i = 0; i < 5; i++) {
        a1[i] = 5 - (2*i);
        a2[i] = 5 - (2*i);
    }

    for (int i = 0; i < 5; i++) {
        std::cout << (i+1) << ": " << a1[i] << std::endl;
    }
 
    std::cout << std::endl;
    bubbleSort(a1, 5);
    insertionSort(a2,5);

    for (int i = 0; i < 5; i++) {
        std::cout << (i+1) << ": " << a1[i] << std::endl;
    }
    
    std::cout << std::endl;

    for (int i = 0; i < 5; i++) {
        std::cout << (i+1) << ": " << a2[i] << std::endl;
    }

    return 0;
}
