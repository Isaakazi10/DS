#include "main.h"

/* Function to sort the array in quick sort method */
int quick_sort(int *arr, int first, int last)
{
    if (first < last)
    {
        // Storing return value of partition function in piv variable
        int pivot = partition(arr, first, last);

        // Separately sort elements before partition and after partition
        quick_sort(arr, first, pivot - 1);
        quick_sort(arr, pivot + 1, last);
    }
}
