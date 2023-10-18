#include <stdio.h>
#include "main.h"

/**
* print_to_98 - prints from given number still 98.
*
* @n: is the input parameter of function.
*
* Return: 1 if lowercase, 0 if not.
*/

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d\n", i);
			}
		}
	}

	for (i = n; i <= 98; i++)
	{
		if (i != 98)
		{
			printf("%d, ", i);
		}
		else
		{
			printf("%d\n", i);
		}
	}
}
