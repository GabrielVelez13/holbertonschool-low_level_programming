#include "main.h"

/**
* print_diagsums - print the diagonal sum of a matrix.
* @a: parameters for the function.
* @size: parameters for the function.
**/

void print_diagsums(int *a, int size)
{
	int i, tot1 = 0, tot2 = 0;

	for (i = 0; i < size; i++)
	{
		tot1 += *((a + i * size) +  i);
		tot2 += *((a + i * size) + (size - i - 1));
	}
	printf("%d, %d\n", tot1, tot2);
}
