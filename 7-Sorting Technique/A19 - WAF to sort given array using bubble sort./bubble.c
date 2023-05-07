/*
Name        : ISAA KAZI
Date        : 3/05/2023
Description : A19 - WAF to sort given array using bubble sort.
Sample I/O  :
Sample O/P  :
*/
#include "main.h"

// Defination of a function.
void bubble(data_t *arr, int size)
{
    // for i is less than size minus 1/
    for (int i = 0; i < size - 1; i++)
    {
        // for j is less than size
        for (int j = i; j < (size); j++)
        {
            // if arr[i] is less than arr[j]
            if (arr[i] > arr[j])
            {
                // Interchange the number.
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
