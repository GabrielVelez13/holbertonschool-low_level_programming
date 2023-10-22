#include <stdio.h>
#include "main.h"

/**
* print_line - print lines
* @n: is the input parameter of function.
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
