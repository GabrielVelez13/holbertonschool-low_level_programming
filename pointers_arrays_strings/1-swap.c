#include <stdio.h>
#include "main.h"

/**
* swap_int - changes the value of a to b and vise-versa.
* @a: parameters for the function.
* @b: parameters for the function.
**/

void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
