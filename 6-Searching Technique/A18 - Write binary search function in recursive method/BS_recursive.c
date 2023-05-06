#include "main.h"

/* Function to search the element using binary search */
data_t binarySearch_recursive(data_t *arr, data_t size, data_t key, data_t low, data_t high)
{

    // Initializing the variables used in this array
    int mid = 0;

    // if low is less than high keep doing recursion else return DATA_NOT_FOUND.
    if (low < high)
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

        // Calling function itself
        binarySearch_recursive(arr, size, key, low, high);

        // low is greater than high then return DATA_NOT_FOUND
    }
    else
    {
        return DATA_NOT_FOUND;
    }
}
