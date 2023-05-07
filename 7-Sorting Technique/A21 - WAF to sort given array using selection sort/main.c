/*
Name        : ISAA KAZI
Date        : 7/05/2023
Description : A21 - WAF to sort given array using selection sort
Sample I/O  :
Sample O/P  :
*/
#include "main.h"

/* Main Function */
int main()
{
	int i, limit, option;

	/* Scanning the size */
	printf("Enter the size of an array\n");
	scanf("%d", &limit);

	/* Declaring the array with size */
	data_t arr[limit];

	printf("Enter the array elements\n");
	for (i = 0; i < limit; i++)
	{
		/* Scanning the array elements */
		scanf("%d", &arr[i]);
	}

	/* Calling the function to bubble sort */
	selection(arr, limit);

	printf("Sorted array is : ");
	for (i = 0; i < limit; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
