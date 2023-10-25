#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* puts2 - Prints two characters at a time.
* @str: parameters for the function.
**/

void puts2(char *str)
{
	int i, len;

	len = strlen(str);

	for (int i = 0; i < len; i += 2)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
