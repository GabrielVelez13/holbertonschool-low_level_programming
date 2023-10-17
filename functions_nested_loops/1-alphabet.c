#include <stdio.h>
#include "main.h"

/**
* print_alphabet - a function that prints the alphabet
*
* Return: Always 0.
*/

void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}

	putchar('\n');

}
