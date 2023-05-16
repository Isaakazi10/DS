#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE -1

void swap(int *a, int *b);
void merge(int *array, int size, int *LSA, int mid, int *RSA, int last);
int merge_sort(int *array, int size);

#endif