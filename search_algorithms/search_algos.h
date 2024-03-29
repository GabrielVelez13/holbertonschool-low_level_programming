#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void printBinaryArray(int *array, int first, int last);

#endif
