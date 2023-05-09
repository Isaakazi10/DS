#include "main.h"

/* Function for binary search using iterations */
data_t binarySearch_iterative(data_t *arr, data_t size, data_t key)
{
    // Initializing the variables used in this array
    int low = 0, high = size, mid = 0;

    // While low is less than high keep running the loop
    while (low < high)
    {
        // Mid is equal to half of low + high
        mid = (low + high) / 2;

        // If the key is found in mid pos then return mid
        if (key == arr[mid])
        {
            return mid;
        }
        // if key is greater than  arr[mid] then make low = mid + 1
        else if (key > arr[mid])
        {
            low = mid + 1;
        }
        // if key is lesser than  arr[mid] then make low = mid - 1
        else if (key < arr[mid])
        {
            high = mid - 1;
        }
    }

    // low is greater than high then return DATA_NOT_FOUND
    return DATA_NOT_FOUND;
}
