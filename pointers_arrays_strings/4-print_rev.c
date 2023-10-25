#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* print_rev - prints a string in reverse.
* @s: parameters for the function.
**/

void print_rev(char *s)
{
	int i, len;

	len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
}
