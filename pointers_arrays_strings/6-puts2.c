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

	while (i < len)
	{
		printf("%c", str[i]);
		i = i + 2;
	}

	putchar('\n');
}
