#include <stdio.h>
#include "main.h"

/**
* print_alphabet_x10 - a function that prints the alphabet 10 times
*
* Return: Always 0.
*/

void print_alphabet_x10(void)
{
	int i;
	char l;

	for (i = 0; i < 10; i++) 
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			putchar(l);
		}
		putchar('\n');
	}
}
