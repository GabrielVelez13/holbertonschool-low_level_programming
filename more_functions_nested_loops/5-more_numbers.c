#include <stdio.h>
#include "main.h"

/**
* more_numbers - prints 0 - 14 10 times
*/

void more_numbers(void)
{

	int i;
	int count = 1;

	while (count <= 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				putchar(i / 10 + '0');
			}
			putchar(i % 10 + '0');
		}
		putchar('\n');
		count++;
	}
}
