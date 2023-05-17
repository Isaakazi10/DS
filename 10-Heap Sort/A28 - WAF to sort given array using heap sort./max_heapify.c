/*
NAME          : Muhammad Murshid c
DATE          : 17/05/2023
DESRIPTION    : Sorting of array using heap sort
*/
#include "main.h"

/* Function to check the number is minimum or maximum to decide the position */
void max_heap(int *heap, int i, int size)
{
    // Declaring variables
    int large, L, R, temp;
    // Logic to get left and right part of tree
    large = i;
    L = ((2 * i) + 1);
    R = ((2 * i) + 2);
    // Logic for left
    if ((L < size) && (heap[large] < heap[L]))
    {
        large = L;
    }
    else
    {
        large = i;
    }
    // Logic for right
    if (( R < size) && (heap[large] < heap[R]))
    {
        large = R;
    }
    // Check if both left and right fails
    if (large != i)
    {
        temp = heap[i];
        heap[i] = heap[large];
        heap[large] = temp;
        max_heap(heap, large, size);
    }
}
