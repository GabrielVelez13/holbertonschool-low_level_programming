#include <stdio.h>
#include "main.h"

/**
* main - uses main.h to utilize functions
*
* Return: Always 0.
*/

void print_alphabet(void)
{
	char l;

	for (l = 'a'; l<='z'; l++)
	{
		putchar(l);
	}

	putchar('\n');
}
