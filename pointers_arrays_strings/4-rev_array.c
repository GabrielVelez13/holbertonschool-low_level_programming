#include "main.h"

/**
* reverse_array - reverse an array.
* @a: parameters for the function.
* @n: parameters for the function.
**/


void reverse_array(int *a, int n)
{
	int i, temp = 0;

	for (i = 0; i < n; i++)
	{
		temp = a[n- 1];
		a[n - 1] = a[i];
		a[i] = temp;
		n--;
	}
}
