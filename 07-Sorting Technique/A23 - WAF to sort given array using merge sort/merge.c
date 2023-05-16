#include "main.h"

void merge(int *array, int size, int *LSA, int mid, int *RSA, int last)
{
    // Initialization of variable
    int i = 0, j = 0, k = 0;

    // While i is less than mid and j is less than size minus mid keep running the loop
    while ((i < mid) && (j < (size - mid)))
    {
        // If LSA[i] is less than RSA[j] then assign LSA[i] to array[k] and increament i++.
        if (LSA[i] < RSA[j])
        {
            array[k] = LSA[i];
            i++;
        }
        // Else assign RSA[j] to array[k] and increament j++.
        else
        {
            array[k] = RSA[j];
            j++;
        }
        // Increament k++
        k++;
    }

    // While j is less than size minus mid.
    while (j < (size - mid))
    {
        // RSA[j] assign array[k] and increament os k and j
        array[k] = RSA[j];
        k++;
        j++;
    }

    // While i is less than mid.
    while (i < mid)
    {
        // LSA[i] assign array[k] and increament os k and i
        array[k] = LSA[i];
        k++;
        i++;
    }
}
