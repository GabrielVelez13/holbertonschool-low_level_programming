#include "main.h"

/**
* reverse_array - reverse an array.
* @a: parameters for the function.
* @n: parameters for the function.
**/


void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		temp = a[n - i - 1];
		a[n - i - 1] = a[i];
		a[i] = temp;
	}
}
