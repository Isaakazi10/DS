#include "main.h"

/* Function to partition the array */
int partition(int *arr, int first, int last)
{
    // Choosing the pivot
    int piv = arr[last];

    // Index of smaller element and indicates the right position of pivot found so far
    int i = (first - 1);

    for (int j = first; j <= last - 1; j++)
    {
        // If arr[j] is less than pivot
        if (arr[j] < piv)
        {
            // Increment i++
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[last]);
    return (i + 1);
}
