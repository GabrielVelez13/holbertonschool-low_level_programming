#include <stdio.h>
#include "main.h"

/**
* print_most_numbers - prints 0 - 9, but not 2 and 4
*/

void print_most_numbers(void)
{

	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			putchar(48 + i);
		}
	}
	putchar('\n');
}
