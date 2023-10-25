#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* puts_half - Prints second half of string.
* @str: parameters for the function.
**/

void puts_half(char *str)
{
	int i, len, n;

	len = strlen(str);
	n = (len - 1) / 2;

	for (i = n; i < len; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
