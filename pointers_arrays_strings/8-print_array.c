#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* print_array - Prints an array.
* @a: parameters for the function.
* @n: parameters for the function.
**/

void print_array(int *a, int n)
{
	int i, len;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}

	putchar('\n');
}
