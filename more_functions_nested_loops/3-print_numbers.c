#include <stdio.h>
#include "main.h"

/**
* print_numbers - prints 0 - 9
*/

void print_numbers(void)
{
	for (int i = 0; i <= 9; i++)
	{
		putchar(48 + i);
	}
	putchar('\n');
}
