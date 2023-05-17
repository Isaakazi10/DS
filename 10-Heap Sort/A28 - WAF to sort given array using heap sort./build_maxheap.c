/*
NAME          : Muhammad Murshid c
DATE          : 17/05/2023
DESRIPTION    : Sorting of array using heap sort
*/
#include "main.h"

void build_maxheap(int *heap, int size)
{
    // Declaration of index
    int index = (size / 2) - 1;
    // Run the loop until index reaches zero
    while (index >= 0)
    {
        max_heap(heap, index, size);
        index--;
    }
}