/*
NAME          : Muhammad Murshid c
DATE          : 17/05/2023
DESRIPTION    : Sorting of array using heap sort
*/
#include "main.h"

/* Function to sort the array using heap sort */
int heap_sort(int *heap, int size )
{
    int index, temp;
    // Calling buid_maxheap
    build_maxheap(heap, size);
    // index value
    index = size - 1;
    // Run the index until it become zero
    while (index >= 0)
    {
        // Swap heap[0] with heap[index]
        temp = heap[0];
        heap[0] = heap[index];
        heap[index] = temp;
        // Calling max_heap
        max_heap(heap, 0, index);
        index--;
    }
}       
