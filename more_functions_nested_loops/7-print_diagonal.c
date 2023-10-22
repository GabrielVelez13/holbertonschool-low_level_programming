#include <stdio.h>
#include "main.h"

/**
* print_diagonal - print diagonal lines
* @n: is the input parameter of function.
*/

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		_putchar(92);
		_putchar('\n');

		if (i < n - 1)
		{
			for (j = 0; j <= i; j++)
			{
				_putchar(' ');
			}
		}
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
