/** 
 * ===========================================================
 * Name: 
 * Section: 
 * Project: Quick Sort
 * ===========================================================
 */
#include "sortfuncts.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// swaps two integer values
void swap(int* x, int* y) {
    int temp;

    temp = *y;
    *y = *x;
    *x = temp;
}

/**
 * @brief - partition the sublist in to two lists
 * of elements larger and smaller than the selected pivot
 * @param values - the array to sort
 * @param lowIndex - the left bound of the sublist
 * @param highIndex - the right bound of the sublist
 */
int partition(int values[], int lowIndex, int highIndex) {
    return 0;
}

/** -------------------------------------------------------------------
 * @brief Perform a quick sort on a portion of an array, from lBound
 * to rBound
 * @param array - the array to sort
 * @param lBound - the starting index of the sublist to sort
 * @param rBound - the ending index of the sublist to sort
 * @pre parameters are populated with proper values
 * @post numbers is sorted
 */
void quickSort(int array[], int lBound, int rBound) {

}


// fills an array of size n with random values
void fillArray(int array[]) {
    // fill array with random ints from 0 to 99
    for (int i = 0; i < N; i++) {
        array[i] = (int)rand() % 100;
    }
}

// prints the array
void printArray(int nums[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}
