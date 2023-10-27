#include "main.h"

/**
* reverse_array - reverse an array.
* @a: parameters for the function.
* @n: parameters for the function.
**/


void reverse_array(int *a, int n)
{
	int i, temp, len = 0;

	len = sizeof(*a) / sizeof(a[0]);

	for (i = 0; i < len; i++)
	{
		temp = a[len - i - 1];
		a[len - i - 1] = a[i];
		a[i] = temp;
	}
	for (i = 0; i < len; i++)
	{
		printf("%d ", a[i]);
	}
}
