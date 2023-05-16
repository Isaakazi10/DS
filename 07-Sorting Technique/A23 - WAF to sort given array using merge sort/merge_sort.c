#include "main.h"

int merge_sort(int *array, int size)
{
    // If size is equal to 1 then return 0
    if (size == 1)
    {
        return 0;
    }

    // Assign size / 2 to mid
    int mid = size / 2;

    // Create an array of size mid and then store values stored in index less than mid in LSA.
    int *LSA = malloc(mid * sizeof(int));
    for (int i = 0; i < mid; i++)
    {
        LSA[i] = array[i];
    }

    // Create an array of size mid and then store values stored from index of mid to less than size in RSA.
    int *RSA = malloc((size - mid) * sizeof(int));
    for (int i = mid; i < size; i++)
    {
        RSA[i - mid] = array[i];
    }

    // Sort right and second halves
    merge_sort(LSA, mid);
    merge_sort(RSA, size - mid);

    merge(array, size, LSA, mid, RSA, size - mid);
}
